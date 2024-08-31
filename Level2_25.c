// Write a program get number from user print the total number of single-
// digit prime numbers in the number.
#include<stdio.h>
int main()
{
    int num,count=0;
    printf("enter a num ");
    scanf("%d",&num);
    while(num!=0)
    {
        int digit=num%10;
        if(digit==2 || digit==3 || digit==5|| digit==7)
        {
            count++;
        }
        num=num/10;
    }
    printf("total single digit prime no,s are :%d" ,count);
    
}
