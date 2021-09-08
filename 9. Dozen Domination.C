#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
//#include<graphics.h>
int main(int argc, char* argv[])
{
	long gamesPlayed=0;
	long seriesPlayed=0;
	long seriesDrawn=0;
	long winCount[3]={0,0,0};
	long i,j;
	long count[3];
	long babyDom;
	long doubDom;
	long justDom;
	long gameResult;
	long percentTie;
	sscanf (argv[1],"%ld",&percentTie);
	float avgGames;
//	int gdriver=DETECT,gmode,x1=0,y1=0,x2,y2;
//	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
//	printf("%ld",percentTie);
	srand(time(0));
//	for (percentTie=0;percentTie<=100;percentTie+=10)
//	{
	seriesDrawn=0;
	for (j=1;j<=100000;j++)
	{
		seriesPlayed++;
		count[0] = 0;
		count[1] = 0;
		count[2] = 0;
		babyDom = 3;
		doubDom = 3;
		justDom = 3;
		for (i=1;i<=12;i++)
		{
			gamesPlayed++;
			gameResult = rand()%2;
			if (rand()%100<percentTie)
			{
				gameResult = 2;
				printf(".");
			}
			else
				printf("%ld",gameResult);
			count[gameResult]++;
			if(justDom==gameResult || doubDom==gameResult)
			{
				printf("# %ld-%ld",count[gameResult],count[1-gameResult]);
				winCount[gameResult]++;
				break;
			}
			else if(babyDom==gameResult)
			{
				printf("^^");
				doubDom=gameResult;
			}
			else if(gameResult!=2 && count[gameResult]-count[1-gameResult]==2)
			{
				printf("^");
				babyDom=gameResult;
				justDom=gameResult;
				doubDom=3;
			}
			else if(justDom!=gameResult)
				justDom=3;
			if(i==12 || (i==10 && babyDom==3 && count[0]==count[1]) || (i==11 && justDom==3 && doubDom==3))
			{
				printf("= %ld-%ld",count[0],count[1]);
				seriesDrawn++;
				break;
			}
		}
		printf("\n");
	}
//	printf("%ld - %ld\n",percentTie,seriesDrawn);
//	x2=6*percentTie;
//	y2=400*(100000-seriesDrawn)/100000;
//	line(x1,y1,x2,y2);
//	x1=x2;
//	y1=y2;
//	}
	printf("\n\nTotal series played: %ld",seriesPlayed);
	printf("\nTotal games played: %ld",gamesPlayed);
	avgGames = (float)gamesPlayed/seriesPlayed;
	printf("\nAverage games per series: %f",avgGames);
	printf("\nSeries won by 0: %ld",winCount[0]);
	printf("\nSeries won by 1: %ld",winCount[1]);
	printf("\nSeries drawn: %ld\n",seriesDrawn);
	return 0;
}