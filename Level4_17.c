// Write a program to print the sum of all single digit odd numbers
#include <stdio.h>

int main() {
   int sum=0;
   for(int i=0;i<10;i++)
   {
       if(i % 2 !=0)
       {
           sum=sum+i;
       }
   }
   printf("sum of all single digit odd numbers :%d \n",sum);
   return 0;
}
