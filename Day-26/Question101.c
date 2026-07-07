#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
    int maxAttempts = 5;
    int lowerBound = 1, upperBound = 100;

    srand(time(0));
    secretNumber = rand() % (upperBound - lowerBound + 1) + lowerBound;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between %d and %d.\n", lowerBound, upperBound);
    printf("You have %d attempts to guess it.\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("\nAttempt %d: Enter your guess: ", attempts + 1);
        scanf("%d", &guess);

        if (guess == secretNumber) {
            printf("Congratulations! You guessed the number correctly in %d attempts.\n", attempts + 1);
            break;
        } else if (guess < secretNumber) {
            printf("Too low! Try a higher number.\n");
        } else {
            printf("Too high! Try a lower number.\n");
        }

        attempts++;
    }

    if (attempts >= maxAttempts) {
        printf("\nSorry, you've used all your attempts. The correct number was %d.\n", secretNumber);
    }

    return 0;
}