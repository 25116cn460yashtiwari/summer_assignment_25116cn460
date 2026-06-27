#include <stdio.h>

int main() {
    int choice, score = 0;

    printf("Welcome to the Quiz Application!\n");
    printf("Answer the following questions:\n\n");

    // Question no. 1
    printf("1. What is the capital of India?\n");
    printf("   1. Mumbai\n   2. Delhi\n   3. Kolkata\n   4. Chennai\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Delhi.\n\n");
    }

    // Question no. 2
    printf("2. Who is known as the father of C language?\n");
    printf("   1. Dennis Ritchie\n   2. James Gosling\n   3. Bjarne Stroustrup\n   4. Guido van Rossum\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Dennis Ritchie.\n\n");
    }

    // Question no. 3
    printf("3. who is sashi tharoor ?\n");
    printf("   1. politician\n   2. doctor\n   3. professor\n   4. none of these\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is politician.\n\n");
    }
    // Question no. 4
    printf("4. Which is the largest HIGH COURT OF the Asia ?\n");
    printf("  1. Delhi High Court\n  2. Patna High Court\n  3. Allahabad High Court\n  4. Bombay High Court\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    if(choice == 3){
        printf("correct!\n\n");
        score++;
    }
    else{
        printf("Wrong! The correct answer is Allahabad High Court.\n\n");
    }
    // Question no. 5
    printf("5. Who is the current chief justice of Allahabad High Court ?\n");
    printf("  1. Hon. Arun Bhanshali\n  2. Hon. Rajesh Bindal\n  3. Hon. D Y Chandrachud\n  4. Hon. Govind Mathur\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    if(choice== 1){
        printf("correct!\n\n");
        score++;

    }
    else{
        printf("Wrong! The correct answer is Hon. Arun Bhanshali.\n\n");

    }


    // Final Score
    printf("Quiz Over! Your final score is: %d/5\n", score);

    return 0;
}
