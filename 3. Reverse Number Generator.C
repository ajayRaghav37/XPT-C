# include <stdio.h>
int main(void)
{
    int num,d1,d2,d3,d4,numrev;
    printf("*** (c) ANIco.in Reverse number generator ***\n\nEnter a four digit number please : ");
    scanf("%d",&num);
    d1 = num/1000;
    d2 = (num/100)%10;
    d3 = (num/10)%10;
    d4 = num%10;
    numrev = d4*1000+d3*100+d2*10+d1;
    printf("The reverse of the number is %d",numrev);
    getch();
    return 0;
    }
