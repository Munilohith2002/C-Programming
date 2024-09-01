// Get a number from user and add 2 to that number and print the result.
// Write your code inside the function. Do not Change the Code.

// Example: Input :45 Output 47. Input:56789 Output:56791// Online C compiler to run C program online
#include <stdio.h>
void add()
{
    int num,sum;
  printf("enter a num  ");
  scanf("%d",&num);
  sum=num+2;
    printf("result:%d",sum);
}
int main() {
    add();

    return 0;
}
