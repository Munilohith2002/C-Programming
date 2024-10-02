// Get a number from the user and print the reverse of it.
#include<stdio.h>
int main()
{
int x,y,digitsum,sum=0,f;
printf("Enter a Number : ");
scanf("%d",&x);
while(x!=0)
{
sum=sum*10+x%10; 
x=x/10;

}
printf("The reveres num is %d\n",sum);
}
