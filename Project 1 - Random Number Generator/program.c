#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guesses = 0;
    int randomNumber;
    srand(time(NULL));
    while(1){
        randomNumber = (rand() % 100) + 1;
        printf("Random number between 1 and 100: %d\n", randomNumber);
        int userInput;
        printf("Guess a number between 1 and 100: ");
        scanf("%d", &userInput);
        if (userInput == 8858){
            printf("Quit Code Accepted. Thanks for playing\n");
            printf("Total guesses: %d\n", guesses);
            break;
        }
        if (randomNumber == userInput) {
            printf("Congratulations! You guessed the number %d correctly.\n", randomNumber);
            guesses++;
            printf("Total guesses: %d\n", guesses);
            break;
        } 
        else if (userInput < randomNumber) {
            printf("Too low! The correct number was %d.\n", randomNumber);
            guesses++;
            printf("Total guesses: %d\n", guesses);
        } 
        else if (userInput > randomNumber) {
            printf("Too high! The correct number was %d.\n", randomNumber);
            guesses++;
            printf("Total guesses: %d\n", guesses);
        }
        else {
            printf("Sorry, the correct number was %d. Better luck next time!\n", randomNumber);
            guesses++;
            printf("Total guesses: %d\n", guesses);
        }
    }
    return 0;
}
