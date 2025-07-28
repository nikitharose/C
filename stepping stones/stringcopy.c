#include<stdio.h>
#include<stdlib.h>

char* stringcopy(char* destination, char* st)
{
    
    char* result= destination;
    //int i=0;
    while(*st != '\0')
    {
        //printf("%c", *st);
        *(destination)=*(st);
        st++;
        destination++;
    }
    *(destination) = '\0';
    return result;
}

int main(int argc, char* argv[])
{
    char st[20];
    scanf("%s", st);
    char destination[20];
    char* result=stringcopy(destination,st);
    
    while(*(result) != '\0')
    {
        printf("%c", *result);
        result ++;
    }
   
    printf("\n");
    return 0;

}