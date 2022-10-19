#include <stdio.h>
#include <string.h>

void ex1()
{
	char ch[26];
	for(int i=0; i<26;i++)
	{
		ch[i] = 'a'+i;
	}
	for(int i=0; i<26;i++)
		printf("%c ", ch[i]);
}

void ex2()
{
	for(int i=1; i<=5; i++)
	{
		for(int j=0; j<i; j++)
			printf("$");
		printf("\n");
	}
}
char lets[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void ex3()
{
	for(int i=1; i<=6; i++)
	{
		for(int j=0; j<i; j++)
		{
			printf("%c", lets[5-j]);
		}
		printf("\n");
	}
}

void ex4()
{
	char c = 'A';
	for(int i=1; i<=6; i++)
	{
		for(int j=0; j<i; j++)
		{
			printf("%c", c++);
		}
		printf("\n");
	}
}

void ex5()
{
	char c = 'E';
	for(int i=1; i<= (c-'A'+1); i++)
	{
		int j=0;
		char t = 'A';
		for(; j<i; j++)
		{
			printf("%c", t);
			t++;
		}
		t--;
		for(; j>1; j--)
		{
			t--;
			printf("%c",t);
		}
		printf("\n");
	}
}

void ex6()
{
	int low = 1, up = 5;
	for(int i=low; i<= up; i++)
	{
		printf("%d\t %ld\t %ld\n", i, i*i, i*i*i );
	}
}

void ex7()
{
	char s[256];
	printf("Enter a string:\n");
	scanf("%s", s);
	int len = strlen(s);
	for(int i=len-1; i>=0; i--)
		printf("%c", s[i]);
	printf("\n");
}

void ex8()
{
	float a,b;
	printf("Enter two float:\n");
	while(scanf("%f%f", &a, &b)==2)
	{
		printf("ans: %f\n", (a-b)/(a*b));
		printf("Enter two float:\n");
	}
	
}

void ex10()
{
	int lower, upper;
	printf("Enter lower and upper integer limits:");
	while((scanf("%d%d",&lower, &upper)==2) && (lower<upper))
	{
		int ssum=0;
		for(int i = lower; i<=upper; i++)
		{
			ssum += (i*i);
		}
		printf("The sums of the squares from %d to %d is %d\n", 
		lower*lower, upper*upper, ssum );
		printf("Enter next set of limits:");
	}
	printf("Done\n");
}

void ex11()
{
	int arr[8] = {2,3,4,5,6,7,8,9};
	for(int i=7; i>=0; i--)
		printf("%d ", arr[i]);
	printf("\n");
}

void ex12()
{
	float s1=0.0, s2=0.0, t=1.0;
	for(int i=1; i<10000; i++)
	{
		s1 += (t / (float)(i));
		if(i%2 ==0)
			s2 += (t / (float)(i) *(-1));
		else
			s2 += (t / (float)(i));
	}
	printf("s1: %f\n", s1);
	printf("s2: %f\n", s2);
	
}

void ex13()
{
	int ar[8];
	int t = 1;
	for(int i=0;i<8; i++)
	{
		t *=2;
		ar[i] = t;  
	}
	int i=0;
	do{
		printf("%d ", ar[i]);
		i++;
	}while(i<8);
	printf("\n");
}

void ex16()
{
	float dap = 100 * 1.1 , dei = 100 * 1.05;
	int y = 1;
	while(dei < dap)
	{
		dei *= 1.05;
		dap += 10;
		y++;
	}
	printf("dei:%f dap:%f after %d yrs\n", dei, dap, y);
		
}

void ex17()
{
	float luc = 100;
	int yr = 0;
	while(luc>0)
	{
		luc *= 1.08;
		luc -= 10;
		yr++;
	}
	printf("after %d yrs take all the money %f\n", yr, yr*10+luc );
}

void ex18()
{
	int fri = 5;
	int wk = 0;
	while(fri <150)
	{
		wk++;
		fri -= wk;
		fri *= 2;
		printf("after %d weeks, with friends %d\n", wk, fri);
	}
}


int main(void)
{
	ex18();
	return 0;
}