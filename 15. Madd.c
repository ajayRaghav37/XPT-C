#include<stdio.h>
#include<conio.h>
#include<math.h>
int sumOfDigits(int);
int main(int argc, char* argv[])
{
	int a, b, i;
	printf("Enter two random numbers: ");
	scanf("%d%d",&a,&b);
	for(i=0;i<20;i++)
	{
		a*=b;
		printf("Round %d: %d, ",i+1,a);
		b=sumOfDigits(a);
		printf("%d\n",b);
	}
	getch();
	return 0;
}
int sumOfDigits(int sourceNum)
{
	int result=0;
	while(sourceNum>0)
	{
		result+=sourceNum%10;
		sourceNum/=10;
	}
	return result;
}