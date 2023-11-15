#include<stdio.h>
int main() {
    char ch;

    // Input character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        printf("The character is a lowercase letter.\n");
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("The character is an uppercase letter.\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("The character is a digit.\n");
    } else {
        printf("The character is not a lowercase letter, uppercase letter, or digit.\n");
    }

    return 0;
}