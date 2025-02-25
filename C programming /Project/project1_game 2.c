#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand() % 100; // generates a random number between 1 to 100;
    printf("The random number is %d\n", number);
    printf("\n");
    printf("****************      Guess the Random number        ****************\n");
    // keep the loop running until the number is guessed;

    // printf("The random number is %d\n",number);
    do
    {
        printf("\n");
        printf("Guess the Random number between 1 to 1000\n");
        scanf("%d", &guess);
        printf("something\n");

        if (guess > number)
        {
            printf("Lower the number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher the number please!\n");
        }
        else
        {
            printf("You Guessed the number in %d attempt\n", nguess);
        }
        nguess++;
    } while (guess != number);
    return 0;
}