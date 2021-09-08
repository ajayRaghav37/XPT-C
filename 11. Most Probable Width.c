#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	int minVal, maxVal, nTimes, randNum, i, j, lineChar;
	long nTests;
	long cCount[150]={0};
	printf("Enter the minimum random value: ");
	scanf("%d",&minVal);
	printf("Enter the maximum random value: ");
	scanf("%d",&maxVal);
	printf("Enter the number of times it has to be in a line: ");
	scanf("%d",&nTimes);
	printf("Enter number of tests that should be done: ");
	scanf("%ld",&nTests);
	srand(time(0));
	for (j=1;j<=nTests;j++)
	{
		lineChar = 0;
		for (i=1;i<=nTimes;i++)
		{
			randNum = minVal + (rand() % (maxVal - minVal + 1));
			lineChar += printf("%d",randNum);
		}
		cCount[lineChar]++;
		printf("\n");
	}
	for (i=0;i<150;i++)
		if (cCount[i]>0)
			printf("\nLines with %3d characters = %7ld \ti.e. %5.2f%%",i,cCount[i],((float)cCount[i]*100)/nTests);
	return 0;
	getch();
}