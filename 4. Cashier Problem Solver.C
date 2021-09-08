#include <stdio.h>
int main(void)
{
    float Amount;
    int THnotes,FHnotes,Hnotes,Fnotes,Tnotes,Fcoins,Tcoins,Ocoins;
    printf("*** (c) ANIco.in Cashier problem solver ***\n\n\nNow we will calculate the exact number of different currency units required\nby the cashier to handover to the customer.\n\n");
    while (Amount)
    {
    printf("Enter the amount to be handover : ");
    scanf("%f",&Amount);
    printf("\nGive the following dominations to the customer\n");
    printf("------------------------------------------------\n\n");
    THnotes = Amount/1000;
    if (THnotes > 0)
    printf("Thousand notes \t\t %d\n",THnotes);
    FHnotes = (Amount - THnotes*1000)/500;
    if (FHnotes > 0)
    printf("Five Hundred notes \t %d\n",FHnotes);
    Hnotes = (Amount - THnotes*1000 - FHnotes*500)/100;
    if (Hnotes > 0)
    printf("Hundred notes \t\t %d\n",Hnotes);
    Fnotes = (Amount - THnotes*1000 - FHnotes*500 - Hnotes*100)/50;
    if (Fnotes > 0)
    printf("Fifty notes \t\t %d\n",Fnotes);
    Tnotes = (Amount - THnotes*1000 - FHnotes*500 - Hnotes*100 - Fnotes*50)/10;
    if (Tnotes > 0)
    printf("Ten notes/coins \t %d\n",Tnotes);
    Fcoins = (Amount - THnotes*1000 - FHnotes*500 - Hnotes*100 - Fnotes*50 - Tnotes*10)/5;
    if (Fcoins > 0)
    printf("Five notes/coins \t %d\n",Fcoins);
    Tcoins = (Amount - THnotes*1000 - FHnotes*500 - Hnotes*100 - Fnotes*50 - Tnotes*10 - Fcoins*5)/2;
    if (Tcoins > 0)
    printf("Two notes/coins \t %d\n",Tcoins);
    Ocoins = Amount - THnotes*1000 - FHnotes*500 - Hnotes*100 - Fnotes*50 - Tnotes*10 - Fcoins*5 - Tcoins*2;
    if (Ocoins > 0)
    printf("One notes/coins \t %d\n",Ocoins);
    printf("\n\n");
}
    getch();
    return 0;
}
