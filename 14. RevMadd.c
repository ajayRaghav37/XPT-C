#include<stdio.h>
#include<conio.h>
#include<math.h>
int multipleOfDigits(int);
int main(int argc, char* argv[])
{
	int a, b, i;
	printf("Enter two random numbers: ");
	scanf("%d%d",&a,&b);
	for(i=0;i<20;i++)
	{
		a+=b;
		printf("Round %d: %d, ",i+1,a);
		b=multipleOfDigits(a);
		printf("%d\n",b);
	}
	getch();
	return 0;
}
int multipleOfDigits(int sourceNum)
{
	int result=1, skipPower=1;
	while(sourceNum>1)
	{
		if (sourceNum%(int)pow(10,skipPower)==0)
		{
			skipPower++;
			continue;
		}
		result*=sourceNum%(int)pow(10,skipPower);
		sourceNum/=(int)pow(10,skipPower);
		skipPower=1;
	}
	return result;
}