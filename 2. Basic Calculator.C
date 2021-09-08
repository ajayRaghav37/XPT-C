# include <stdio.h>
int main(void)
{
    float num1,num2,result;
    printf("*** (c) ANIco.in Calculator ***\n\nEnter the numbers : ");
    scanf("%d%d",&num1,&num2);
    result=num1+num2;
    printf("The numbers when added gives %f\n",result);
    result=num1-num2;
    printf("The numbers when subtracted gives %f\n",result);
    result=num1*num2;
    printf("The numbers when multiplied gives %f\n",result);
    result=num1/num2;
    printf("The numbers when divided gives %f\n",result);
    getch();
    return 0;
    }
