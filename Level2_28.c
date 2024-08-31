// Write a program to get two numbers from user and print the LCM of

// those numbers.
#include <stdio.h>

int main() {
    int num1, num2, max, gcd,lcm;
printf("enter two numbers:\n");
scanf("%d%d",&num1,&num2);

for(int i=1;i<=num1 && i<=num2 ;i++)
{
    if(num1%i==0 && num2%i==0)
    {
        gcd=i;
    }
    lcm=(num1*num2)/gcd;
}
printf("lcm of two no's is:%d",lcm);
    return 0;
}

