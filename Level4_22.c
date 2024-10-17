// Write a program to print the total number of three digit Prime numbers Assume 0 & 1 are not Prime.
#include <stdio.h>
int isPrime(int n){
    if(n<=1) return 0;
    
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1; //false
}
int main() {
   int count=0;
   for(int i=100;i<1000;i++)
   {
       if(isPrime(i))
       {
          count++;
       }
   }
   printf("total number of three digit Prime numbers :%d \n",count);
   return 0;
}
