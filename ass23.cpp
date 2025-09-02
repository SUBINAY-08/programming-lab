#include <stdio.h>
int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        
        if (ch == 'A' || ch == 'a') {
            printf("%c is a Vowel.\n", ch);
        }
        else if (ch == 'E' || ch == 'e') {
            printf("%c is a Vowel.\n", ch);
        }
        else if (ch == 'I' || ch == 'i') {
            printf("%c is a Vowel.\n", ch);
        }
        else if (ch == 'O' || ch == 'o') {
            printf("%c is a Vowel.\n", ch);
        }
        else if (ch == 'U' || ch == 'u') {
            printf("%c is a Vowel.\n", ch);
        }
        else {
            printf("%c is a Consonant.\n", ch);
        }
    }
    else {
        printf("Invalid input! Please enter an alphabet.\n");
    }

    return 0;
}