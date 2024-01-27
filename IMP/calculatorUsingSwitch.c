#include <stdio.h>

int main() {
    char operation;
    float num1, num2, result;

    // Input operation from the user
    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &operation);

    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform the operation based on the user's choice
    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            result = num1 / num2;
            printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
        
            break;
        default:
            printf("Invalid operation!\n");
    }

    return 0;
}


/*
    Input :-
        Operator +
        num1, mum2 12 13
    Output 25
*/