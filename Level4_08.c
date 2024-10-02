// Get a four digit number from the user and print the reverse of it.
#include<stdio.h>
int main()
{
int x,y,f,t,h,th;
printf("Enter a THREE digit Number : ");
scanf("%d",&x);
f=x%10; //ones
t=(x/10)%10; //tens
h=(x/100)%10; //hundreds
th=x/1000;
y=f*1000+t*100+h*10+th;

printf("The reverse of the entered number is %d\n",y);
}
