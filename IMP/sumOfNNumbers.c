// Print Sum of N numbers 

#include<stdio.h>

int main(){
    int n, Sum= 0;
    printf("Enter a Number:-");
    scanf("%d", &n);

    for (int i =1 ; i <= n; i++){
        Sum += i;
    }

    printf("Sum of %d Numbers = %d \n", n, Sum);

    return 0;
}

/*
    Input 5
    Output 15 (1 + 2 + 3 + 4 + 5 = 15)
*/