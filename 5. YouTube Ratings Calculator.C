// See what I created youtubers... :)
#include <stdio.h>
int main(void)
{
int Ratingint;
float Likes,Dislikes,Rating,RatingDecimal;
printf("Enter the number of Likes and Dislikes\n");
scanf("%d%d",&Likes,&Dislikes);
Rating = Likes * 5 / (Likes + Dislikes);
Ratingint = Rating;
RatingDecimal = Rating - Ratingint;
if (RatingDecimal >= 0.5)
Ratingint++;
if ((Likes == 0) && (Dislikes == 0))
Ratingint = 0;
printf("The video is rated %d/5. Hmmm... ",Ratingint);
switch (Ratingint)
{
case 0:
     if (Dislikes == 0)
     printf("unrated");
     else
     printf("let us kill the uploader");
     break;
case 1:
     printf("not worth watching!");
     break;
case 2:
     printf("boring!!");
     break;
case 3:
     printf("good enough");
     break;
case 4:
     printf("nice video!");
     break;
case 5:
     printf("love it! <3");
     break;
}
getch();
return 0;
}
