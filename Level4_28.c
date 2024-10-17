//Print the smallest Three digit prime number
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
   int n=1000;
   while(1)
   {
       n++;
       if(isPrime(n))
       {
            printf(" the smallest Three digit prime number:%d \n",n);
            break;
       }
   }
   return 0;
}
