#include <stdio.h>

int main() {
    int num;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is odd or even using the ternary operator
    (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);

    return 0;
}

/*

    Input : 23
    Output: 23 is odd

    Input: 54
    Output: 54 is even
*/