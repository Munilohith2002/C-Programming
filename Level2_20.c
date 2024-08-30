//Write a program print total number of single digit Prime numbers
#include <stdio.h>
int isPrime(int n) {
    if (n <= 1) 
    return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int count = 0;

    for (int i = 2; i < 10; i++) {
        if (isPrime(i)) {
            count++;
        }
    }
 printf("Total number of single-digit prime numbers: %d", count);
    return 0;
}
