//Create a "Guess the Number" program
//Your program will generate a random numbe
//between 0 to 20.
//
//You will then ask the user to enter a number form 0-20
//Will need input validation (user can only enter numbers in 
//range of (0 - 20)
//
//The program will indicate if the guess is too high or too low
//
//The player wins the game if they can guess the number within five tries
//
//STEPS
//
//1. Generate a random number between 0 - 20
//2. Prompt the user for a guess (ensure guess is between 0 and 20)
//3. Tell the player whether guess is too high, or too low, or correct
//4. Repeat based on how many guesses are left

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int randomNumber = (rand() % (20 - 0 + 1));
    int guesses = 5;
    int guess = -1;

    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20 which you must guess.\n");
    
    while(guesses != 0){
        printf("You have %d tries left.\n",guesses);
        
        while((guess < 0) || (guess > 20)){
            printf("Enter a guess: ");
            scanf("%d",&guess);
        }
        
        if(guess < randomNumber){
            printf("Sorry, %d is wrong. My number is greater than that.\n\n",guess);
        }
        if(guess > randomNumber){
            printf("Sorry, %d is wrong. My number is less than that.\n\n",guess);
        }
        if(guess == randomNumber){
            printf("Congratulations. You guessed it!\n\n");
            break;
        }
        --guesses;
        guess = -1;
    }
    return 0;
}
