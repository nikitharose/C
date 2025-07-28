#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    int num;
    scanf("%d", &num);
    int i,j,k=1;
    for(i=0;i<num;i++)
    {
        for(j=0;j<num-i-1;j++)
        {
           printf(" "); 
        }
        for(j=0;j<2*i+1;j++)
        {
            printf("%d",j+1 );
            //k--;
        }
        printf("\n");
        //k=k+2;
    }
    return 0;
}