#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char* start, char* end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[1000];

    // Input a sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character if present
    size_t len = strlen(sentence);
    if (sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    // Tokenize the sentence using strtok
    char* token = strtok(sentence, " ");
    while (token != NULL) {
        // Reverse each word
        reverseString(token, token + strlen(token) - 1);
        printf("%s ", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
