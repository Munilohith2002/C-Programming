// Write a program get number from user print the total number of two-digit

// perfect square numbers in the number.
#include<stdio.h>
int main()
{
    int num,count=0;
    printf("enter a num ");
    scanf("%d",&num);
    while(num!=0)
    {
        int digit=num%100;
        if(digit==16 || digit==25 || digit==36|| digit==49|| digit==64|| digit==81)
        {
            count++;
        }
        num=num/10;
    }
    printf("two digit perfect squares :%d",count);
    
}
