#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    int number,count=0;
    scanf("%d", &number);
    while(number>0)
    {
        if((number & 1) == 1)
        count++;

        number=number>>1;
    }
    printf("%d \n", count);
    return count;
}