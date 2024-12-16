#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  int random, guess;
  int no_of_guess = 0;
  srand(time(NULL));
  printf("welcome to the word of guessing number\n");
  random = rand() % 100 + 1;
  do
  {
    printf("enter the guess the number(1 to 100)");
    scanf("%d", &guess);
    no_of_guess++;
    if (guess < random)
    {
      printf("guess a larger number\n");
    }
    else if (guess > random)
    {
      printf("guess a smaller number\n");
    }
    else
    {
      printf("you have succesfully guess the number in %d attempt", no_of_guess);
    }
  } while (guess != random);
  printf("\n bye bye, thank for playing");
  printf("\n developed by pintu kumar");
}