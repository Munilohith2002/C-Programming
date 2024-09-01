// Get a number from user and check whether the digits are in
// ascending order.
#include <stdio.h>

int checkNum(int num)
{
    int previous=10,current;
    while(num!=0)
    {
     current=num%10;
    if(current>previous){
        return 0;
    }
    previous=current;
    num/=10;
    }
   return 1;
 
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

 if(checkNum(num))
  {
      printf("accending");
  }
  else
  {
       printf("descending");
      
  }

    return 0;
    }
