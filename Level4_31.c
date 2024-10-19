// Print the number of zeroes you encounter between the numbers 0 to 1000
#include <stdio.h>

int main() {
    int count=0;
    for(int i=0;i<=1000;i++)
    {
        int num=i;
        while(num!=0)
        {
            if(num%10==0)
            {
                count++;
            }
            num=num/10;
        }
    }
    // Write C code here
    printf("no.of zeroes between 0 to 1000 are :  %d",count);

    return 0;
}
