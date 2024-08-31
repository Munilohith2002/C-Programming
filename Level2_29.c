// Write a program to get three numbers from user and print the LCM of

// those numbers.
#include <stdio.h>

int find_lcm(int a, int b) {
    int max = (a > b) ? a : b;
    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max++;
    }
}

int main() {
    int num1, num2, num3;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    int lcm12 = find_lcm(num1, num2);
    int lcm = find_lcm(lcm12, num3);

    printf("LCM of %d, %d and %d is %d\n", num1, num2, num3, lcm);

    return 0;
}

