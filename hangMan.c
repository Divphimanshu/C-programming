#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TRIES 6

int main() {
    char word[] = "computer";  // The word to guess
    int length = strlen(word);
    char guess[100];
    char display[100];
    int tries = 0;
    int correct = 0;
    int i, won = 0;

    // Initialize the display with underscores
    for (i = 0; i < length; i++) {
        display[i] = '_';
    }
    display[length] = '\0';

    printf("🎮 Welcome to Hangman!\n");
    printf("Guess the word letter by letter. You have %d chances.\n", MAX_TRIES);

    // Game loop
    while (tries < MAX_TRIES && !won) {
        printf("\nWord: ");
        for (i = 0; i < length; i++) {
            printf("%c ", display[i]);
        }

        printf("\nGuess a letter: ");
        scanf(" %c", &guess[0]);
        guess[0] = tolower(guess[0]);

        int found = 0;
        for (i = 0; i < length; i++) {
            if (word[i] == guess[0] && display[i] == '_') {
                display[i] = guess[0];
                correct++;
                found = 1;
            }
        }

        if (!found) {
            tries++;
            printf("❌ Wrong guess. Tries left: %d\n", MAX_TRIES - tries);
        } else {
            printf("✅ Good guess!\n");
        }

        if (correct == length) {
            won = 1;
        }
    }

    // Final result
    if (won) {
        printf("\n🎉 Congratulations! You guessed the word: %s\n", word);
    } else {
        printf("\n💀 Game Over! The correct word was: %s\n", word);
    }

    return 0;
}
