#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(void)
{
    int RandomNumber;
    int x;
    srand(time(0));
    RandomNumber = (1 + rand()%10);
    printf("*** ANIco.in Guess Game ***\n\nGuess a number between 1 and 10 : ");
    scanf("%d", &x);
    if (x <= 10 && x > 0)
    {
     if (x == RandomNumber)
         printf("You got it! Can you see through walls?\n\n\n");
     else
         printf("Try again! The number behind the curtain was %d and you said its %d \n\n\n", RandomNumber, x);
    }
    else
        printf("You entered a wrong number kid!\n\n\n");
    main();
}
