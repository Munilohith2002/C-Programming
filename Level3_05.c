// Get a number from user and count the number of zeros in that number
// and print. Write your code inside the function. Do not Change the
// format.
#include <stdio.h>
int zeros(int num) {
   int count=0,num1;
   while(num!=0)
   {
       num1=num%10;
       num=num/10;
       if(num1==0)
       {
          count= count+1;
       }
   }
   
    return count; // Prime
}
int main() {
    int num1,count,num,totalcount;
    printf("Enter a number: ");
    scanf("%d", &num);
totalcount=zeros(num);
printf("zeros:%d  ",totalcount);
    return 0;
    }
