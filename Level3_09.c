// Get a two-digit number from user swap the digits.
#include <stdio.h>

int swapNum(int num)
{
    int swap=0,rem;
    while(num!=0)
    {
     rem=num%10;
     swap=swap*10+rem;
    num/=10;
    }
   return swap;
 
}
int main() {
    int num,swap;
    printf("Enter a number: ");
    scanf("%d", &num);

swap=swapNum(num);
       printf("swaped num :%d",swap);
      
  }

   
