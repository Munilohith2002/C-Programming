// Write a program to print the total count of numbers which are less than

// 100000 and whose sum of digits is 14.
#include <stdio.h>

int main() {
    int num, count = 0;

    for (num = 1; num < 100000; num++) {
        int digitsum = 0, temp = num;

        while (temp != 0) {
            digitsum += temp % 10;
            temp /= 10;
        }

        if (digitsum == 14) {
            count++;
        }
    }

    printf("Total count of numbers whose sum of digits is 14: %d\n", count);

    return 0;
}
