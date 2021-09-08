#include <stdio.h>
#include <conio.h>
int main(void)
{
    int i,ibeginner,istopper;
    char brekk;
    printf("*** ANIco.in Prime Printer ***\n\nDo you want me to prompt after every print? Write 'y' for Yes - ");
    scanf("%c",&brekk);
    printf("Enter the numbers between which you want me to print : ");
    scanf("%d%d",&ibeginner,&istopper);
    for (ibeginner=ibeginner;ibeginner<istopper;ibeginner++)
    {
        for(i=2;i<ibeginner;i++)
        {
          if (ibeginner%i == 0)
          break;
        }
        if (i==ibeginner)
        {
           printf("%d\n",ibeginner);
           if (brekk == 'y' || brekk == 'Y')
              getch();
        }
    }
    getch();
    return 0;
}
