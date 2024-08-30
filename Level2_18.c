Write a program to get number from user, print whether that number’s

first two digits (ten’s digits and one’s digit) is prime.
#include <stdio.h>
int main() {
    int number, first_two_digits, i, is_prime = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number >= 100) {
        number /= 10;
    }
    if (number <= 1) {
        is_prime = 0;
    } else {
        for (i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }
    if (is_prime) {
        printf("The first two digits (%d) are prime.\n", number);
    } else {
        printf("The first two digits (%d) are not prime.\n", number);
    }

    return 0;
}
