// Get a number from user and Check Prime or Not and print the result.
// Write your code inside the function. Do not Change the format.
#include <stdio.h>
int prime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
 for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
if (prime(num)) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
    return 0;
    
}
