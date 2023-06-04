#include <stdio.h>

int Auto() {
    int n, square, temp;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    square = n * n; // calculate the square of the number
    
    temp = n; // make a copy of the original number
    
    while(temp > 0) {
        if(temp % 10 != square % 10) { // compare the last digits of both numbers
            printf("%d is not an automorphic number\n", n);
            return 0;
        }
        temp /= 10;
        square /= 10;
    }
    
    printf("%d is an automorphic number\n", n);
    
    return 0;
}
