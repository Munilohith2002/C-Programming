// Get a Two digit number from the user and print the reverse of it.
#include<stdio.h>
int main()
{
int x,y,f,s;
printf("Enter a TWO digit Number : ");
scanf("%d",&x);
f=x%10; //ones
s=x/10;  //tens
y=f*10+s;
printf("The reverse of the entered number is %d\n",y);
}


