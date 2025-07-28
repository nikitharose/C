#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    int Id;
    char name[20];
    int age;
};
int compare(const void* name1,const void* name2)
{
    return !strcmp(((const struct student*)name1)->name,((const struct student*)name2)->name);

}
int main()
{
    int num;
   
    printf("enter the number of students\n");
    scanf("%d", &num);
    struct student record[num];
    int i=0;
    printf("%d \n", num);
    while(i<num)
    {
        printf("enter the student details\n");
        scanf("%d %s %d", &record[i].Id,record[i].name,&record[i].age);
        i++;
    }
    /*for(i=0;i<num;i++)
    {
        printf("%d %s %d \n", record[i].Id,record[i].name,record[i].age);
    }*/
    qsort(&record,num,sizeof(struct student),compare);
    for(i=0;i<num;i++)
    {
        printf("%d %s %d \n", record[i].Id,record[i].name,record[i].age);
    }
    return 0;

}