#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LEN 30
#define MAX_TRIES 6

// Function prototypes
void playGame();
int checkGuess(char guess, char word[], char display[]);
void displayWord(char display[]);

int main() {
    printf("===== Word Guessing Game =====\n");
    playGame();
    return 0;
}

void playGame() {
    char word[MAX_WORD_LEN] = "programming"; // secret word
    char display[MAX_WORD_LEN];
    int wordLen = strlen(word);
    int triesLeft = MAX_TRIES;
    char guess;
    int correctGuesses = 0;

    // Initialize display with underscores
    for(int i = 0; i < wordLen; i++) {
        display[i] = '_';
    }
    display[wordLen] = '\0';

    while(triesLeft > 0 && correctGuesses < wordLen) {
        printf("\nWord: ");
        displayWord(display);
        printf("\nTries left: %d\n", triesLeft);
        printf("Enter a letter: ");
        scanf(" %c", &guess);
        guess = tolower(guess);

        if(checkGuess(guess, word, display)) {
            printf("Good guess!\n");
            correctGuesses = 0;
            for(int i = 0; i < wordLen; i++) {
                if(display[i] != '_') correctGuesses++;
            }
        } else {
            printf("Wrong guess!\n");
            triesLeft--;
        }
    }

    if(correctGuesses == wordLen) {
        printf("\nCongratulations! You guessed the word: %s\n", word);
    } else {
        printf("\nOut of tries! The word was: %s\n", word);
    }
}

// Function to check if guess is in word
int checkGuess(char guess, char word[], char display[]) {
    int found = 0;
    for(int i = 0; word[i] != '\0'; i++) {
        if(word[i] == guess && display[i] == '_') {
            display[i] = guess;
            found = 1;
        }
    }
    return found;
}

// Function to display current progress
void displayWord(char display[]) {
    for(int i = 0; display[i] != '\0'; i++) {
        printf("%c ", display[i]);
    }
    printf("\n");
}
