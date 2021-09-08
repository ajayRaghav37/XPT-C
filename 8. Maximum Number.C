#include <stdio.h>
void main(void)
{
     int X[10],i=0,max=0;
     printf("Enter the numbers to be tested (and 0 when you are done)");
     do
     {
                   scanf("%d",&X[i]);
                   if (X[i] == 0)
                   break;
                   else
                   {
                       if (X[i] > max)
                       max = X[i];
                       }
                       i++;
                       } while (2<3);
                       printf("The maximum numer entered was %d",max);
		       getch();
		       }
