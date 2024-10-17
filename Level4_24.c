//Write a program to print the sum of two digit Prime numbers
#include <stdio.h>
int isPrime(int n){

    
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
   int sum=0;
   for(int i=10;i<100;i++)
   {
       if(isPrime(i))
       {
          sum=sum+i;
       }
   }
   printf("sum of two digit Prime numbers:%d \n",sum);
   return 0;
}
