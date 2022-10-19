#include <stdio.h>
#include "stdbool.h"

void ex1()
{
	char ch;
	int space=0, line=0;
	int lc = 0, uc = 0, oc=0;
	while((ch=getchar())!='#')
	{
		if(ch==' ')
			space++;
		else if(ch=='\n')
			line++;
		else if('a'<= ch && ch <='z')
			lc++;
		else if('A'<=ch && ch <='Z' )
			uc++;
		else
			oc++;
	}
	printf("%d space, %d lines, %d lowercase, %d uppercase, %d other",space, line, lc, uc, oc);
}

void ex2()
{
	char ch;
	int cnt=0;
	while((ch=getchar())!='#')	
	{
		cnt++;
		printf("%c %d ", ch, ch);
		if(cnt%8==0){
			printf("\n");
		}
	}
}

void ex3()
{
	int num;
	int even=0, odd=0, e_sum=0, o_sum=0;
	while(scanf("%d",&num) && num!=0)
	{
		if(num%2==0)
		{
			even++;
			e_sum += num;
		} else
		{
			odd++;
			o_sum += num;
		}
	}
	printf("%d evens in avg %f\n", even, e_sum/(float)even);
	printf("%d odds in avg %f\n", odd, o_sum/(float)odd);
}

void ex6()
{
	char ch, last='a';
	int cnt=0;
	while((ch=getchar())!='#')
	{
		if(last=='e' && ch=='i')
			cnt++;
		last = ch;
	}
	printf("\'ei\' occures %d times\n", cnt);
	
}

#define D_PER_HRS 1000
#define OVERTIME 1.5
#define TAX1 0.15
#define TAX2 0.2
#define TAX3 0.25

void ex7()
{
	printf("Enter work hours in a week:\n");
	float hrs;
	scanf("%f", &hrs);
	float total, tax, income;
	if(hrs<=40)
		total = hrs * D_PER_HRS;
	else
		total = ((hrs-40) * OVERTIME + 40) * D_PER_HRS;
	
	if(total < 300)
		tax = total * TAX1;
	else if(total <450)
		tax = 300*TAX1 + (total-300)*TAX2;
	else
		tax = 300*TAX1 + 150 * TAX2 + (total-450)*TAX3;
	
	income = total - tax;
	
	printf("total: %f, tax: %f, income: %f\n", total, tax, income);
}

bool ifPrime(int n)
{
	if(n==1)
		return false;
	if(n==2)
		return true;
		
	for(int div=2; (div*div)<=n; div++)	
	{
		if(n%div==0)
			return false;
	}
	return true;
}

void ex9()
{
	int n;
	while(scanf("%d",&n) && (n>0))
	{
		
		for(int i=1; i<=n; i++)
		{
			if(ifPrime(i))
				printf("%d\n", i);
		}
	}
}

void ex10()
{
	int c;
	while(1)
	{
		printf("Switch tax tpyes(type 5 to quit):\n");
		printf("1:single\t2:house\n");
		printf("3:married,shared\t4:married,divorce\n");
		scanf("%d", &c);
		if(c==5)
			break;
		printf("Enter your income:\n");
		float income,tax;
		scanf("%f", &income);
		
		switch (c){
			case 1:
				if(income<17850)
					tax = income * 0.15;
				else
					tax = 17850*0.15 + (income-17850) *0.28;
				break;
			case 2:
				if(income<23900)
					tax = income * 0.15;
				else
					tax = 23900*0.15 + (income-23900) *0.28;
				break;
			case 3:
				if(income<29750)
					tax = income * 0.15;
				else
					tax = 29750*0.15 + (income-29750) *0.28;
				break;
			case 4:
				if(income<14875)
					tax = income * 0.15;
				else
					tax = 14875*0.15 + (income-14875) *0.28;
				break;
			default:
				break;
		}
		printf("tax:%f\n", tax);
	}
}

int main(void)
{
	ex10();
	return 0;
	
}