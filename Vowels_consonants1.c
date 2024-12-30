#include <stdio.h>

int main() {
    char ch;

    // Input alphabet from the user
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    // Check if the entered character is an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Check if the alphabet is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("Invalid input. Please enter an alphabet.\n");
    }

    return 0;
}
