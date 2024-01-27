/*
    If the number is same when it reversed then it is called palindrome

        example 121 , reversed number is also 121 so it is palindrome
        example 112, reversed number is 211 so both are not same so not a palindrome
*/ 



#include <stdio.h>

int main() {
    int num, reversedNum = 0, originalNum, remainder;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number
    originalNum = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the original number is equal to the reversed number
    if (originalNum == reversedNum)
        printf("%d is a palindrome.\n", originalNum);
    else
        printf("%d is not a palindrome.\n", originalNum);

    return 0;
}

/*
    Input : 12321
    Output: 12321 is a palindrome

    Input: 1998
    Ouput: 8991 is not a palindrome
*/