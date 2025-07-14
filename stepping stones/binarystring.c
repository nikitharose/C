#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

int main()
{
    char s1[100];
    char s2[100];
    scanf("%s %s", s1,s2);
    int i;
    int n=strlen(s1);
    int m=strlen(s2);
    int c=0;
    int temp;
    int t=MAX(n,m);
    //printf("%d \n",t );
    char sum[t+2];
    sum[t+1]='\0';
    int k=t;
    if(t==n)
    {
        while(m>0)
    {
        temp=s1[n-1]-'0'+s2[m-1]-'0'+c;
        if(temp>=2)
        {
            c=1;
            sum[k]=(temp%2)+'0';
        }
        
        else
        {
            c=0;
            sum[k]=0;
        }
       //printf("%c \n", sum[t-1]);
        n--;
        m--;
        k--;
    }
    while(n>=0)
    {
        temp=s1[n-1]-'0'+c;
        if(temp>=2)
        {
            c=1;
            sum[k-1]=(temp%2)+'0';
        }
        
        else
        {
            c=0;
            sum[k-1]='0';
        }
        n--;
        k--;
    }
    }

    if(c==1)
    sum[k-1]='1';
    else 
    {
        for(int i=0;i<strlen(sum);i++)
        sum[i]=sum[i+1];

    }
    //sum[strlen(sum)+1]='\0';
    printf("%s \n", &sum);
    return 0;

}