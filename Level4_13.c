// Get a number from the user and print the sum of all digits.
#include<stdio.h>
int main()
{
int x,y,digitsum,sum=0,f;
printf("Enter a Number : ");
scanf("%d",&x);
while(x!=0)
{
sum=sum+x%10; 
x=x/10;

}
printf("The sum of digits  is %d\n",sum);
}
