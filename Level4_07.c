// Get a Three digit number from the user and print the reverse of it.
#include<stdio.h>
int main()
{
int x,y,f,t,h;
printf("Enter a THREE digit Number : ");
scanf("%d",&x);
f=x%10; //ones
t=(x/10)%10; //tens
h=x/100; //hundreds
y=f*100+t*10+h;

printf("The reverse of the entered number is %d\n",y);
}

