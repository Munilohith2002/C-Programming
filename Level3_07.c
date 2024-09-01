// Get two numbers from user and compare the numbers. If same print
// “Same” otherwise print “Not Same”. Write your code inside the function.
// Do not Change the format.
#include <stdio.h>

int checkNum(int num1,int num2)
{
  if(num1==num2)
  {
      return 1;
  }
  else
  {
       return 0;
  }
  //  return check; 
}
int main() {
    int num1,num2,check;
    printf("Enter a number1: ");
    scanf("%d", &num1);
      printf("Enter a number2: ");
    scanf("%d", &num2);
check=checkNum(num1,num2);
 if(check==1)
  {
      printf("same");
  }
  else
  {
       printf("Not same");
      
  }

    return 0;
    }
