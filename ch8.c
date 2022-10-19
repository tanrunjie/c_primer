#include <stdio.h>
#include <stdlib.h>

void FOPEN()
{
	int ch;
	FILE *fp;
	char fname[50];
	printf("Enter file name:");
	scanf("%s", fname);
	fp = fopen(fname, "r");
	if(fp==NULL)
	{
		printf("failed to open\n");
		exit(1);
	}
	while((ch=getc(fp))!=EOF)
		putchar(ch);
	fclose(fp);
}

void guess()
{
	int guess = 1;
	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with");
	
	printf("\nan n if it is wrong.\n");
	printf("Uh...is your number %d?\n", guess);
	while (getchar() != 'y') /* 获取响应， 与 y 做对比 */
	printf("Well, then, is it %d?\n", ++guess);
	printf("I knew I could do it!\n");
}

void redirect()
{
	char c;
	while((c=getchar())!= EOF && c!='\n')
		putchar(c);
}

void ex1()
{
	FILE *fp;
	fp = fopen("essay.txt", "r");
	if(fp==NULL)
	{
		printf("failed to open file\n");
		exit(1);
	}
	long num = 0;
	char ch;
	while((ch=getc(fp))!=EOF)
		num++;
	fclose(fp);
	printf("%ld", num);
}

void ex3()
{
	FILE* fp;
	fp = fopen("essay.txt", "r");
	char ch;
	int dn=0, un=0;
	while((ch = getc(fp))!=EOF)
	{
		if(isupper(ch))
			un++;
		else if(islower(ch))
			dn++;
	}
	fclose(fp);
	printf("%d %d\n", un, dn);
}

void ex5()
{
	char response;
	int u = 100, l = 1;
	int guess = 50;
	while((response=getchar())!='y')
	{
		while(getchar() != '\n')
			continue;
		if(response == 'u')
		{
			u = guess;
			printf("Well is it %d?\n", guess = (guess+1)/2);
		}
		else if(response == 'l')
		{
			l = guess;
			printf("Well is it %d?\n", guess = (guess+u)/2);
		}
		else
		{
			printf("sorry, i dont understand");
		}
	}
	printf("I knew!");
}



int checkinput()
{
    char mc;
    float n;
    while(scanf("%f", &n) != 1)
    {
        while((mc = getchar()) > ' ')
        {
            putchar(mc);
        }
        while((mc = getchar()) <= ' ')
            continue;
        printf(" is not a number\n");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3:");
    }
    return n;
}

void ex8()
{
	 char ch;
    int x = 1;
    printf("Enter the operation of your choice: \na. add            s. subtract\nm. multiply       d. divide \nq. quit\n");
    while(x)
    {
        ch = getchar();
        getchar();
        if(ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
        {
            printf("input a ,s, m, d or q:");
            continue;
        }
        else if(ch == 'q')
        {
            return 0;
        }
        else
        {
            x = 0;
        }
    }
    float fn, sn;
    printf("Enter first number:");
    fn = checkinput();
    printf("Enter second number:");
    sn = checkinput();
    if(ch == 'd')
    {
        while(sn == 0)
        {
            printf("The second number can't be 0,input it again:");
            sn = checkinput();
        }
    }
    switch(ch)
    {
        case 'a':
            printf("%.2f + %.2f = %.2f", fn, sn, fn + sn);
            break;
        case 's':
            printf("%.2f - %.2f = %.2f", fn, sn, fn - sn);
            break;
        case 'm':
            printf("%.2f * %.2f = %.2f", fn, sn, fn * sn);
            break;
        case 'd':
            printf("%.2f / %.2f = %.2f", fn, sn, fn / sn);
            break;
        default:
            break;
    }

}

int main()
{
	ex8();	
	
	return 0;
}