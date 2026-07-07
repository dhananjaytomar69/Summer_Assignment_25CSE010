//Write a program to Create quiz application.
#include <stdio.h>
int main() {
    int score = 0;
    int answer;

    printf("Welcome to the Quiz Application!\n");
    printf("You will be asked 3 questions. Please enter the number corresponding to your answer.\n\n");

    // Question 1
    printf("Question 1: What is the capital of France?\n");
    printf("1. Berlin\n2. Madrid\n3. Paris\n4. Rome\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is Paris.\n");
    }

    // Question 2
    printf("\nQuestion 2: What is 5 + 7?\n");
    printf("1. 10\n2. 11\n3. 12\n4. 13\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is 12.\n");
    }

    // Question 3
    printf("\nQuestion 3: Which planet is known as the Red Planet?\n");
    printf("1. Earth\n2. Mars\n3. Jupiter\n4. Venus\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect. The correct answer is Mars.\n");
    }

    // Final Score
    printf("\nQuiz Completed! Your final score is: %d out of 3.\n", score);

    return 0;
}