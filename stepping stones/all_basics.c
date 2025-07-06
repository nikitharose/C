#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    int elements[5]={2,3,6,3,1};
    int freq[1000];
    int flag=0;
    for(int i=0;i<5;i++)
    {
        if(freq[elements[i]]==1)
        {
            printf("first repeating element is %d \n",elements[i]);
            flag=1;
            break;
        }
        else
        freq[elements[i]]=1;
    }
    if(flag==0)
    printf("no repeating element found \n");
    return 0;
}