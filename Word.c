#include <stdio.h>

void printNumberInWords(int num);

int Word() {
    int number;

    printf("Enter a number (up to 999): ");
    scanf("%d", &number);

    if (number < 0 || number > 999) {
        printf("Number out of range.");
        return 0;
    }

    printNumberInWords(number);

    return 0;
}

void printNumberInWords(int num) {
    const char *ones[] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    const char *teens[] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    const char *tens[] = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };

    if (num == 0) {
        printf("zero");
    }
    else if (num < 10) {
        printf("%s", ones[num]);
    }
    else if (num < 20) {
        printf("%s", teens[num - 10]);
    }
    else if (num < 100) {
        printf("%s", tens[num / 10]);
        if (num % 10 != 0) {
            printf(" %s", ones[num % 10]);
        }
    }
    else if (num < 1000) {
        printf("%s hundred", ones[num / 100]);
        if (num % 100 != 0) {
            printf(" and ");
            printNumberInWords(num % 100);
        }
    }
}
