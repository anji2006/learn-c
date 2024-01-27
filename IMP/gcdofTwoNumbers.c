//Find GCD of Given Two numbers


#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int gcd = 0;
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        gcd = temp;
    }

    // Find and print the GCD
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}
