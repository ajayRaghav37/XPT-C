#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	int i;
	srand(time(0));
	while (!0)
	{
		for (i=1;i<=15;i++)
		{
			printf("%d",rand()+10000);
		}
		printf("\n");
	}
	return 0;
	getch();
}