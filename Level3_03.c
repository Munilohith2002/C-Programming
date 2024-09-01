// Get a number from user and Check whether the sum of digits is 14 and
// print the result. Write your code inside the function. Do not Change the
// format.
#include <stdio.h>

int function(int num)
{
    int num1,digitsum=0;
    while(num!=0)
    {
       num1= num%10;
        digitsum=digitsum+num1;
     num=num/10;
  
    }
  
    return digitsum;
}

int main()
{
    int num, digitsum;
    printf("enter a number   ");
    scanf("%d", &num);
    digitsum = function(num);
    if(digitsum==14){
    printf("digit sum equal  %d  ", digitsum);
    }
    else
    {
         printf("digit sum not equal to 14 %d");
    }
    return 0;
}
