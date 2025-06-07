#include <stdio.h>

int isVowel(char ch);

int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);

    if (isVowel(c))
        printf("'%c' is a vowel.\n", c);
    else
        printf("'%c' is not a vowel.\n", c);

    return 0;
}

int isVowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u' || ch == 'A' ||
        ch == 'E' || ch == 'I' || ch == 'O' ||
        ch == 'U') {
        return 1;
    } else {
        return 0;
    }
}
