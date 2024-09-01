// Get a number from user, find the number of digits and print the same.
#include <stdio.h>

int NoDigits(int num)
{
    int count=0,rem;
    while(num!=0)
    {
     rem=num%10;
    num/=10;
    count=count+1;
    }
   return count;
 
}
int main() {
    int num,count;
    printf("Enter a number: ");
    scanf("%d", &num);

count=NoDigits(num);
       printf("No of Digits  :%d",count);
      
  }

   
