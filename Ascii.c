#include <stdio.h>

int Ascii() {
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    printf("ASCII values of each character:\n");

    for (int i = 0; word[i] != '\0'; i++) {
        printf("%c: %d\n", word[i], word[i]);
    }

    return 0;
}
