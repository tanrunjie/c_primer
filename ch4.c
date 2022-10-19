#include "stdio.h"
#include "limits.h"
#include "float.h"
#include "string.h"
#define PRAISE "you are so cool!"
#define PAGES 959
#define BLURB "Auhtentic imitation!"
void example1()
{

	printf("Some number limits for this system:\n");
	printf("Biggest int: %d\n", INT_MAX);
	printf("Smallest long long: %lld\n", LLONG_MIN);
	printf("One byte = %d bits on this system.\n", CHAR_BIT);
	printf("Largest double: %e\n", DBL_MAX);
	printf("Smallest normal float: %e\n", FLT_MIN);
	printf("float precision = %d digits\n", FLT_DIG);
	printf("float epsilon = %e\n", FLT_EPSILON);
}

void example2()
{
	printf("*%d*\n", PAGES);
	printf("*%2d*\n", PAGES);
	printf("*%10d*\n", PAGES);
	printf("*%-10d*\n", PAGES);
	
	printf("\n\n\n");
	
	const double RENT = 3852.99;
	printf("*%f*\n", RENT);
	printf("*%e*\n", RENT);
	printf("*%4.2f*\n", RENT);
	printf("*%3.1f*\n", RENT);
	printf("*%10.3f*\n", RENT);
	printf("*%10.3E*\n", RENT);
	printf("*%+4.2f*\n", RENT);
	printf("*%010.2f*\n", RENT);
	
}

void example3()
{
	printf("%x %X %#x\n", 31, 31, 31);
	printf("**%d**%d**%d**\n", 42, 42, -42);
	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6,6,6,6);
	
	printf("[%2s]\n", BLURB);
	printf("[%24s]\n", BLURB);
	printf("[%24.5s]\n", BLURB);
	printf("[%-24.5s]\n", BLURB);
	
	printf("The %s family just may be $%.2f richer!\n", "tan", 20.1);
}

void example4()
{
	float n1 = 3.0;
	double n2 = 3.0;
	long n3 = 2000000000;
	long n4 = 1234567890;
	printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
	printf("%ld %ld\n", n3, n4);
	printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
	char s[10] = "nihao";
	printf("%s\n", s);
}

void example5()
{
	unsigned width, precision;
	int number = 256;
	double weight = 242.5;
	printf("Enter a field width:\n");
	scanf("%d", &width);
	printf("The number is :%*d:\n", width, number);
	printf("Now enter a width and a precision:\n");
	scanf("%d %d", &width, &precision);
	printf("Weight = %*.*f\n", width, precision, weight);
	printf("Done!\n");
}

void example6()
{
	int n;
	printf("Please enter three integers:\n");
	scanf("%*d %*d %d", &n); // skip first and second
	printf("The last integer was %d\n", n);
	return ;
}

void example7()
{
	printf("He sold the painting for $%2.2f.\n", 2.345e2);
	printf("%c%c%c\n", 'H', 105, '\41');
	#define Q "\"His Hamlet was funny without being vulgar.\""
	printf("%s\n has %d characters.\n", Q, strlen(Q));
	printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);

	#define BOOK "\"War and Peace\""
	float cost = 12.99;
	float percent = 80.0;
	printf("This copy of %s sells for $%.2f.\n", BOOK, cost);
	printf("That is %2.0f%% of list\n", percent);  // 80%
}

void example8()
{
	printf("%d\n",12345);
	printf("%4X\n", 138);
	printf("%10.3f\n", 232.346);
	printf("%12.2e\n", 233.0);
	printf("%-30s\n","hello world");
	printf("\n\n");
	
	printf("%15lu\n", 12345678L);
	printf("%#4x\n", 138);
	float a = 233;
	printf("%-12.2E\n", a);
	printf("%+10.3f\n", 232.346);
	printf("\n\n");
	
	printf("%6.4d\n", 12345);
	printf("%*o\n", 16, 20);
	printf("%2c\n", 'A');
	printf("%+.2f\n", 3.13);
	printf("%-7.5s\n", "hello world");

	printf("The double type is %zd bytes..\n", sizeof(double));
}

void ex1()
{   
	printf("Enter your name:\n");
	char firstN[256], lastN[256];
	scanf("%s", lastN);
	scanf("%s", firstN);
	printf("\"%-*s,%-*s\"\n", strlen(lastN)+3, lastN, strlen(lastN)+3, firstN);	
}


void ex3()
{
	float f;
	scanf("%f", &f);
	printf("%2.1f\n", f);
	printf("%2.1e\n", f);
}

void ex4()
{
	float height;
	char name[256];
	printf("Enter your height and name\n");
	scanf("%f %s", &height, name);
	printf("%s, you are %f feet tall\n", name, height);
}

void ex5()
{
	printf("At %2.2f megabits per second, a file of "
	"%1.2f megabytes\n", 18.12, 2.20);
	printf("downloads in %0.2f seconds.\n", 0.97);
	
}

void ex7()
{
	double d = 1.0/3.0;
	float f = 1.0/3.0;
	printf("%.6lf %.6f\n", d, f);
	printf("%.12lf %.12f\n", d, f);
	printf("%.16lf %.16f\n", d, f);
	printf("%.16lf %.16qqqf\n", DBL_DIG, FLT_DIG);
}

#define L_PER_GALLON 3.785
#define KM_PER_MILS 1.609


void ex8()
{
	float m, g;
	printf("Enter travel miles and gas:\n");
	scanf("%f %f", &m, &g);
	printf("L per 100km: %.1f\n", (g*L_PER_GALLON )/ (m*KM_PER_MILS) );
}


int main()
{
	ex8();
	return 0;
}