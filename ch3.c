#include "stdio.h"

void example_1()
{
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;
	printf("un = %u and not %d\n", un, un);  // unsigned int, int
	printf("end = %hd and %d\n", end, end);  // short, int
	printf("big = %ld and not %hd\n", big, big); // long, short
	printf("verybig = %lld and not %ld\n", verybig, verybig); // long long int, long int
	return ;
}

void example_2()
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;
	printf("%f can be written %e\n", aboat, aboat);	// float, exponential
	
	printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat); // hex exponential
	printf("%f can be written %e\n", abet, abet);
	printf("%Lf can be written %Le\n", dip, dip); // long double, long exponential
	return ;
}
void example_3() // float err
{
	
	float toobig = 3.4E38 * 100.0f;
	printf("%e\n", toobig);	// overflow to inf
	
	float a,b;
	b = 2.0e20 + 1.0;
	a = b - 2.0e20;
	printf("%f\n", a); // subnormal
	return ;
}

void example_4()
{
	printf("Type int has a size of %zd bytes.\n", sizeof(int)); // %zd bytes size 4
	printf("Type char has a size of %zd bytes.\n", sizeof(char)); // 1
	printf("Type float has a size of %zd bytes.\n", sizeof(float)); // 4
	printf("Type long has a size of %zd bytes.\n", sizeof(long)); // 4
	printf("Type long long has a size of %zd bytes.\n", sizeof(long long)); // 8
	printf("Type double has a size of %zd bytes.\n", sizeof(double)); // 8
	printf("Type long double has a size of %zd bytes.\n", sizeof(long double)); // 16
}


void ex1()
{
	float toobig = 999999e100*100.0f;
	float temp = 0.1234e-37 / 10;
	float toosmall = 0.1234e-38/10;
	printf("%e\n", toobig); // overflow
	printf("%e\n", temp);   // normal
	printf("%e\n", toosmall); // subnormal
	
	double a = asin(1.5);  // abnormal
	printf("%lf\n", a); // double
	
	char c = 128;
	printf("%d\n", c); // char overflow
	c = -129;
	printf("%d\n", c); // char subflow
	c = 256;
	printf("%d\n", c); // char subflow
	return ;
}

void ex2_3()
{
	char a = 66;
	printf("%c\n", a);
	
	printf("\b");
	printf("Startled by the sudden sound, Sally shouted,\n");
	printf("\"By the Great Pumpkin, what was that!\"");
}

void ex4()
{
	printf("Enter a floating-point value:");
	float f;
	scanf("%f", &f)	;
	printf("fixed-point notation: %f\n", f);
	printf("exponential notation: %e\n", f);
	printf("p notation: %a\n", f);
	
}

void ex5()
{
	printf("Enter your age:\n");
	int age;
	scanf("%d", &age);
	printf("you had passed by %e\n", age * 3.156e7);
}

void ex6()
{
	printf("Enter quad num:\n")	;
	float quad;
	scanf("%f", &quad);
	printf("water nums: %f\n", quad * 950 / (3.0e-23));
}

void ex7()
{
	printf("Enter your height(inch):\n");
	double height;
	scanf("%lf", &height);
	printf("your height(in cm): %lf\n", height * 2.54);
}

void ex8()
{
	printf("Enter cup numbers:\n");
	double cup;
	scanf("%lf", &cup);
	printf("With pins: %lf\n", cup / 2);
	printf("With Ounces: %lf\n", cup * 8);
	printf("With big spoons: %lf\n", cup * 8 * 2);
	printf("With tea spoons: %lf\n", cup * 8 * 2 * 3);
	
}
int main(void)
{
	ex8();

	
}