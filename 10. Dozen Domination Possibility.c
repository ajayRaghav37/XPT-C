#include <stdio.h>
#include <conio.h>

long binary[13];

void decToBin(long);
long getResult();

int main(int argc, char* argv[])
{
	long i = 0, j = 0, numResults = 0;
	for (i = 0; i<4096; i++)
	{
		decToBin(i);
		for (j = 0; j <= 2; j++)
		{
//			printf("first");
//			printf("%ld %ld %ld\t", i, j, numResults);
//			printf("%ld %ld %ld %ld\t", i, j, numResults, getResult());
			if (getResult() == 1)
			{
//				printf("second");
				numResults++;
				printf("%ld\t", i);
				break;
			}
//			else if (getResult() == 2)
//			{
//				printf("third");
//				break;
//			}
			else
				binary[12]++;
//			if (j == 2)
//			{
//			}
//			printf("fourth");
		}
	}
	printf("\nTotal number of unique results: %ld", numResults);
	return 0;
}

void decToBin(long num)
{
	long m = 0, n = 0;
	for (m = 0; m <= 12; m++)
		binary[m] = 0;
	for (n = 11; n >= 0; n--)
	{
		binary[n] = num % 2;
		num = num / 2;
		binary[12]++;
		if (num == 0)
			break;
	}
}

long getResult()
{
	long k = 1;
	long count[2] = { 0, 0 };
	long babyDom = 2;
	long doubDom = 2;
	long justDom = 2;
	long gameResult = 0;
	for (k = 1; k <= 12; k++)
	{
		gameResult = binary[11 - binary[12] + k];
		count[gameResult]++;
		if (justDom == gameResult || doubDom == gameResult)
		{
			if (k == binary[12])
				return 1;
			else
				return 0;
		}
		else if (babyDom == gameResult)
		{
			doubDom = gameResult;
		}
		else if (count[gameResult] - count[1 - gameResult] == 2)
		{
			babyDom = gameResult;
			justDom = gameResult;
			doubDom = 2;
		}
		else if (justDom != gameResult)
			justDom = 2;
		if (k == 12 || (k == 10 && babyDom == 2 && count[0] == count[1]) || (k == 11 && justDom == 2 && doubDom == 2))
		{
			if (k == binary[12])
				return 1;
			else
				return 0;
		}
	}
	return 0;
}
