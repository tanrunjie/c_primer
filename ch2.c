#include "stdio.h"

void ex1();
void ex2();
void ex3();
void jolly()
{
	printf("For he's a jolly good fellow!\n");
}
void deny()
{
	printf("Which nobody can deny!\n");
}
void ex4(){
	jolly();
	jolly();
	jolly();
	deny();
}

void br(){printf("Brazil, Russia");
}
void ic(){printf("India, China");
}
void ex5(){
	br();
	printf(", ");
	ic();
	printf("\n");
	ic();
	printf(", \n");
	br();
}

void ex6()
{
	int toes = 10;
	printf("toes: %d\n", toes);
	printf("toes double: %d\n", toes *2);
	printf("toes square: %d\n", toes * toes);
}
void smile(){printf("Smile!");
}
void ex7(){
	smile();
	smile();
	smile();
	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();
}
void two(){printf("two");
}
void three(){
	printf("\nthree");
}
void one_three(){
	printf("one\n");
	two();
	three();
	
}
void ex8(){
	printf("start now:\n");
	one_three();
	printf("\ndone!");
}

int main()
{
	ex8();
	return 0;
}


void ex1()
{
	printf("tan runjie\n");
	printf("tan\n");
	printf("runjie\n");
	printf("tan runjie\n");
}

void ex2()
{
	printf("tan runjie\n");
	printf("my addr\n");
}

void ex3(int age)
{
	int age_d = age*365;
	printf("age_day: %d\n", age_d);
}