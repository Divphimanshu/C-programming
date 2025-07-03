#include <stdio.h>

// Structure to store quiz questions
struct Question {
    char question[200];
    char optionA[100];
    char optionB[100];
    char optionC[100];
    char optionD[100];
    char correctOption;
};

int main() {
    int score = 0;
    char answer;

    // Array of questions
    struct Question quiz[] = {
        {
            "What is the capital of India?",
            "A. Mumbai", "B. Delhi", "C. Kolkata", "D. Chennai",
            'B'
        },
        {
            "Which planet is known as the Red Planet?",
            "A. Earth", "B. Venus", "C. Mars", "D. Jupiter",
            'C'
        },
        {
            "Who is the founder of C language?",
            "A. Dennis Ritchie", "B. Bjarne Stroustrup", "C. James Gosling", "D. Elon Musk",
            'A'
        },
        {
            "Which data type is used to store decimal values in C?",
            "A. int", "B. float", "C. char", "D. long",
            'B'
        },
        {
            "Which year did India get independence?",
            "A. 1945", "B. 1946", "C. 1947", "D. 1950",
            'C'
        }
    };

    int totalQuestions = sizeof(quiz) / sizeof(quiz[0]);

    printf("🎮 Welcome to the Quiz Game!\n");
    printf("-----------------------------\n");

    // Loop through each question
    for (int i = 0; i < totalQuestions; i++) {
        printf("\nQ%d: %s\n", i + 1, quiz[i].question);
        printf("%s\n", quiz[i].optionA);
        printf("%s\n", quiz[i].optionB);
        printf("%s\n", quiz[i].optionC);
        printf("%s\n", quiz[i].optionD);
        printf("Your answer (A/B/C/D): ");
        scanf(" %c", &answer);

        if (answer == quiz[i].correctOption || answer == quiz[i].correctOption + 32) {
            printf("✅ Correct!\n");
            score++;
        } else {
            printf("❌ Wrong! Correct answer: %c\n", quiz[i].correctOption);
        }
    }

    // Final result
    printf("\n🏁 Quiz Completed!\n");
    printf("Your Score: %d out of %d\n", score, totalQuestions);

    if (score == totalQuestions) {
        printf("🎉 Excellent!\n");
    } else if (score >= totalQuestions / 2) {
        printf("🙂 Good job!\n");
    } else {
        printf("😅 Better luck next time.\n");
    }

    return 0;
}
