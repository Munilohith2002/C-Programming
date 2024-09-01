// Get a number from user and reverse that number and print. Write your

// code inside the function. Do not Change the format.
#include <stdio.h>

int reverseNum(int num) {
   int reverse=0,rem;
   while(num!=0)
   {
       rem=num%10;
      reverse=reverse*10+rem;
      num=num/10;
   }
   
    return reverse; // Prime
}
int main() {
    int num,reverse;
    printf("Enter a number: ");
    scanf("%d", &num);
reverse=reverseNum(num);
printf("reversed num:%d  ",reverse);
    return 0;
    }
