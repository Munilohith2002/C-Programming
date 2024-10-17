// write a program to print the total number of THREE digit odd numbers
#include <stdio.h>

int main() {
   int count=0;
   for(int i=100;i<1000;i++)
   {
       if(i % 2 !=0)
       {
           count=count+1;
       }
   }
   printf("the total number of THREE digit odd numbers :%d \n",count);
   return 0;
}
