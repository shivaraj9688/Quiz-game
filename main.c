#include <stdio.h>

int main() {
    int score = 0;

    // Questions
    char questions[][100] = {
        "1. What is the capital of India?",
        "2. Which language is used in C programming?",
        "3. What is 2 + 2?",
        "4. Who is known as the father of C?"
    };

    // Options
    char options[][4][100] = {
        {"A. Mumbai", "B. Delhi", "C. Chennai", "D. Kolkata"},
        {"A. English", "B. Hindi", "C. Machine Language", "D. C Language"},
        {"A. 3", "B. 4", "C. 5", "D. 6"},
        {"A. Dennis Ritchie", "B. Bjarne Stroustrup", "C. James Gosling", "D. Elon Musk"}
    };

    // Correct answers
    char answers[] = {'B', 'D', 'B', 'A'};

    int total = 4;
    char userAnswer;

    printf("📚 Quiz Game\n\n");

    for (int i = 0; i < total; i++) {
        printf("%s\n", questions[i]);

        for (int j = 0; j < 4; j++) {
            printf("%s\n", options[i][j]);
        }

        printf("Enter your answer (A/B/C/D): ");
        scanf(" %c", &userAnswer);

        if (userAnswer == answers[i]) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Wrong! Correct answer is %c\n\n", answers[i]);
        }
    }

    printf("🎯 Your Score: %d/%d\n", score, total);

    return 0;
}