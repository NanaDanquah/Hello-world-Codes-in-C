#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    
    //initialize the random number generator
    int randomNumber = rand() %21;
    
    //tell the player about what the program is about 
    printf("This is a guessing game\nI have chosen a number between 0 and 20 which you must guess\n");
    
    int numberOftries = 5;
    int guess;
    
    
    printf("You have %d tries\n", numberOftries);
    while (guess <21)
    {
     printf("Enter a guess: ");
     scanf("%d", &guess);
     if (guess > 20)
        {
            printf("Please enter a number from 0 to 20 please\n");
            scanf("%d", &guess);
        }
    }
    
    
    
    while (guess != randomNumber)
    {
       for(numberOftries = 5; numberOftries > 0; --numberOftries)
       
        {
            printf("you have %d tries left\n", --numberOftries);
        }
        if (guess < randomNumber)
        {
            printf("Sorry, %d is wrong. My number is more than that\n", guess);
        }
        else if (guess > randomNumber)
        {
            printf("Sorry, %d is wrong. My number is less than that\n", guess);
        }
        else if (guess == randomNumber)
        {
            printf("Congratulations. You guesses it!");
        }
        break;
    
    }
    
    return 0;
    
}