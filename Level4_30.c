//Print the largest 8 digit prime number
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
   int n=99999999;
   while(1)
   {
       n--;
       if(isPrime(n))
       {
            printf(" the largest 8  digit prime number:%d \n",n);
            break;
       }
   }
   return 0;
}
