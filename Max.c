#include <stdio.h>

int Max() {
    int count, number, max;

    printf("Enter the count of numbers: ");
    scanf("%d", &count);

    // Assuming at least one number will be entered
    printf("Enter number 1: ");
    scanf("%d", &max);

    for (int i = 2; i <= count; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number > max) {
            max = number;
        }
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}
