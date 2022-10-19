#include <stdio.h>

#define MIN_PER_HRS 60
void ex1()
{
	int n;
	while(scanf("%d",&n) && n>0)
	{
		printf("hrs: %d and min: %d \n", n/60, n %60);
	}
}

void ex2()
{
	printf("Enter a integer:\n");
	int n;
	scanf("%d", &n);
	for(int i=0; i<=10;i++)
	{
		printf("%d ", n++);
	}
	
}

void ex3()
{
	printf("Enter day number:\n");
	int day;
	scanf("%d", &day);
	printf("%d days are %d weeks,%d days.", day, day/7, day%7);
}

void ex4()
{
	printf("Enter a height in centimeters: ");
	float h;
	while(scanf("%f",&h) && h>0)
	{
		int feet = h/12;
		printf("%.1f cm = %d feet, %.1f inches\n", h, feet, h-feet*12);
		printf("Enter a height in centimeters (<=0 to quit):");
	}
	printf("bye\n");
}

void ex5()
{
	int day;
	scanf("%d",&day);
	int sum = 0;
	int earn = 0;
	for(int i=0; i<day; i++)
	{
		earn++;
		sum += earn;
	}
	printf("You have earned %d money\n", sum);
}

void ex6()
{
	int day;
	scanf("%d",&day);
	int sum = 0;
	int earn = 0;
	for(int i=0; i<day; i++)
	{
		earn++;
		sum += (earn*earn);
	}
	printf("You have earned %d money\n", sum);	
}

void ex7()
{
	double d;
	scanf("%lf", &d);
	printf("%lf", d*d*d);
}

void ex8()
{
	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand:");
	int m;
	scanf("%d",&m);
	int n;
	printf("Now enter the first operand:");
	while(scanf("%d",&n) && (n>0))
	{
		printf("%d %% %d is %d\n", n, m, n%m);
		printf("Enter next number for first operand (<= 0 to quit):");
	}
	printf("Done\n");
}
void Temperatures(double w)
{
	double cels = 5.0/9.0*(w-32.0);
	printf("wals: %.2lf\n", w);
	printf("cels: %.2lf\n", cels); 
	printf("Ks: %.2lf\n", cels + 273.16);
	
}

void ex9()
{
	printf("Enter a wals:\n");
	double wal;
	scanf("%lf", &wal);
	Temperatures(wal);
}

int main(void)
{
	ex9();
	return 0;
}