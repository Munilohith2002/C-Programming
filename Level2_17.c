//Write a program to get a number from user, print whether that number is
//prime, and sum of digit is equal to 14.

#include <stdio.h>
int main() {
    int number, i, is_prime = 1, digit, sum = 0,digitsum;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number <= 1) {
        is_prime = 0;
    } else 
    {
        for (i = 2; i * i <= number; i++) 
        {
            if (number % i == 0) 
            {
                is_prime = 0;
                break;
            }
        }
    }
 digitsum=(number%10)+(number/10) ;
    Print results
    if (is_prime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    if (digitsum== 14){
        printf("The sum of digits of %d is 14.\n", number);
    } else {
        printf("The sum of digits of %d is not equal to 14.\n", number);
    }

    return 0;
}
