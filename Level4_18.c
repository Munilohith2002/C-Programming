// Write a program to print the sum of all TWO digit odd numbers
#include <stdio.h>

int main() {
   int sum=0;
   for(int i=10;i<010;i++)
   {
       if(i % 2 !=0)
       {
           sum=sum+i;
       }
   }
   printf("sum of all TWO digit odd numbers :%d \n",sum);
   return 0;
}
