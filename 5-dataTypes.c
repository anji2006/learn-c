/*
    INT ==>(2 or 4 bytes) It Stores whole numbers, without decimals. Ex:-- 92, 02 , -932 ...etc

    FLOAT ==>(4 bytes) Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
                Ex:-- 0.002 , 0.2323 ..etc

    DOUBLE ==>(8 bytes) Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits.

    CHAR ==>(1 byte) Stores a single character/letter/number, or ASCII values
*/

/*  

    Format Specifiers are used to 

    Format Specifier                Data Type
        %d or %i                      int
        %f                            float
        %lf                           double
        %c                            char
        %s                            used for strings (sequence of charaters)

*/


#include <stdio.h>

int main(){
    int age = 18;
    float time = 10.12;
    double discount = 12;
    char firstLetter = 'T';  // we should use single quotes to declare char ('')
    printf("%d \n", age);
    printf("%f \n", time);
    printf("%lf \n", discount);
    printf("%c \n", firstLetter);
    return 0;
}