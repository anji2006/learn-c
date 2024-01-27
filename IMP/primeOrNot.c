// Find GIven Number is prime or Not
// If Num is only divisible by 1 and itself only the it is called a PRIME other wise Not Prime


#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is less than 2
    if (num < 2) {
        isPrime = 0;
    } else {
        // Check for factors from 2 to num/2
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Print the result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

/*  
    Input : 11
    Output : 11 is a prime number (it is divisible by 1 and 11 only)

    Input : 12
    Output: 12 is not a prime number (it is divisitle by 1, 2, 3, ,4 ,6 ,12 )

*/