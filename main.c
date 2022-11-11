#include <stdio.h>

int main() {

    int secretNumber = 23;
    int guess;
    int guessCount = 0;
    int guessLimit = 10;
    int outOfGuesses = 0;

    printf("Welcome to my guessing game!\n");
    printf("You have 10 times to guess the secret number\n");
    printf("The number is between 0 and 100\n");

    while(guess != secretNumber && outOfGuesses == 0){
        if(guessCount < guessLimit){
            printf("Enter a number:");
            scanf("%d", &guess);
            if(guess > secretNumber){
                printf("The secret number is lower than you guessed\n");
                guessCount++;
            }
            if(guess < secretNumber){
                printf("The secret number is higher than you guessed\n");
                guessCount++;
            }
        } else {
            outOfGuesses = 1;
        }
    }
    if(outOfGuesses == 1){
        printf("You are out of guesses");
    }else {
        printf("Hey, you did it!");
    }

    return 0;
}
