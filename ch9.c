#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

void up_and_down(int);

void interchange(int *u, int *v)
{
	int temp;
	temp = *u;
	*u = *v;
	*v = temp;
}

double ex1(double x, double y)
{
	return x < y ? x : y;
}

void ex3(char ch, int jj, int ii)
{
	for (int i = 0; i < ii; i++)
	{
		for (int j = 0; j < jj; j++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
}

double ex4(double d1, double d2)
{
	if (d1 != 0)
		d1 = 1 / d1;
	if (d2 != 0)
		d2 = 1 / d2;
	double avg = (d1 + d2) / 2.0;

	if (avg != 0)
		avg = 1 / avg;
	return avg;
}

void ex5(double *a, double *b)
{
	if (*a > *b)
		*b = *a;
	else
		*a = *b;
}

void ex6(double *a, double *b, double *c)
{
	double min, mid, max;
	if (*a < *b)
	{
		if (*a < *c)
		{
			min = *a;
			if (*b < *c)
			{
				mid = *b;
				max = *c;
			}
			else
			{
				mid = *c;
				max = *b;
			}
		}
		else
		{
			min = *c;
			mid = *a;
			max = *b;
		}
	}
	else //*a>*b
	{
		if (*b < *c)
		{
			min = *b;
			if (*a > *c)
			{
				mid = *c;
				max = *a;
			}
			else
			{
				mid = *a;
				max = *c;
			}
		}
		else
		{
			min = *c;
			mid = *b;
			max = *a;
		}
	}
	*a = min;
	*b = mid;
	*c = max;
}

int checkch(char c)
{
	if (isupper(c))
		return c - 'A' + 1;
	else if (islower(c))
		return c - 'a' + 1;
	return -1;
}
void ex7(FILE *fp)
{
	char ch;
	int x;
	while ((ch = getc(fp)) != EOF)
	{
		x = checkch(ch);
		if (x > 0)
			printf("Is a alpha %c, its index is %d\n", ch, x);
	}
}

double ex8(double n, int p)
{
	double pow = 1;
	int i, f = 0;
	if (p == 0)
	{
		if (n == 0)
		{
			printf("0^0 is undefined");
		}
		return 1;
	}
	if (n == 0)
		return 0;
	if (p < 0)
	{
		p = -p;
		f = 1;
	}
	for (i = 1; i <= p; i++)
		pow *= n;
	if (f)
		return 1 / pow;
	else
		return pow;
}

double ex9(double n, int p)
{
	if (n == 0)
	{
		if (p == 0)
			return 1;
		else
			return 0;
	}

	if (p == 0)
		return 1;

	if (p > 0)
		return n * ex9(n, p - 1);
	else
		return 1 / n * ex9(n, p + 1);
}

void ex10(unsigned long n, unsigned short x)
{
	int r;
	r = n % x;
	if (n >= x)
		ex10(n / x, x);
	printf("%d", r);
	return;
}

void ex11(int n)
{
	if (n == 1 || n == 2)
		printf("1\n");
	unsigned long long a = 1, b = 1, sum;
	for (int i = 3; i <= n; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
	}
	printf("%llu\n", sum);
	return;
}

int main()
{
	// up_and_down(1);
	/* ex7
	FILE* fp = fopen("essay.txt", "r");
	ex7(fp);
	fclose(fp); */

	/* ex8 & 9
	double pow;
	pow = ex9(3, -2);
	printf("%lf", pow);
	*/

	// ex10(129,8);
	ex11(10);
	return 0;
}

void up_and_down(int n)
{
	printf("Level %d: n location %p\n", n, &n);
	if (n < 4)
		up_and_down(n + 1);
	printf("Level %d: n location %p\n", n, &n);
}