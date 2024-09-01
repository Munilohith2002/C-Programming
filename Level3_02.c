//Get a number from user and subtract 5 to that number and print the
result. Write your code inside the function. Do not Change the format.
#include <stdio.h>

int function(int num1)
{
    // Subtract 5 from the input number
    int num2 = num1 - 5;
    return num2;
}

int main()
{
    int num1, num2;
    printf("enter a number   ");
    scanf("%d", &num1);
    num2 = function(num1);
    printf("%d", num2);
    return 0;
}
