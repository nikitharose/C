#include<stdio.h>
#include<stdlib.h>

struct add
{
    int lengthFeet;
    float inch;
};

int main()
{
    int nums;
    printf("enter the number of elements \n");
    scanf("%d", &nums);
    struct add value[nums];
    printf("%d \n",nums);
    int i=0;
    while(i<nums)
    {
        scanf("%d %f", &value[i].lengthFeet,&value[i].inch);
        i++;

    }
    /*for(i=0;i<nums;i++)
    {
        printf("%d %f \n", value[i].lengthFeet,value[i].inch);
    }*/
    int sumfeet;
    float suminch;
    for(i=0;i<nums;i++)
    {
        sumfeet=sumfeet+value[i].lengthFeet;
        suminch=suminch+value[i].inch;
    }
    printf("%d %0.3f \n", sumfeet,suminch);
    return 0;
}
