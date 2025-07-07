#include<stdio.h>
#include<stdlib.h>

struct classs
{
    int student;
    int mark[100];
    int average;
};
int main(int argc,char* argv[])
{
    int noofstudent,noOfClass,averages,index,marks;
    int count=0;
    printf("enter the no of classes \n");
    scanf("%d", &noOfClass);
    struct classs class1[noOfClass];
    while(count< noOfClass)
    {
       
        scanf("%d", &noofstudent);
        class1[count].student=noofstudent;
        for(int j=0;j<noofstudent;j++)
        {
            scanf("%d",&marks);
            class1[count].mark[j]=marks;
        }
        scanf("%d",&averages);
        class1[count].average=averages;
        //scanf("%d",&index);

        printf("%d \n",class1[count].student);
        for(int i=0;i<class1[count].student;i++)
        {
            printf("%d ",class1[count].mark[i]);
        }
        count++;
      

    }
    count=0;
        for(int i=0;i<class1[count].student;i++)
        {
            for(int j=i+1;j<class1[count].student;j++)
            {
                if(class1[count].mark[j]>class1[count].mark[i])
                {
                    int temp=class1[count].mark[i];
                    class1[count].mark[i]=class1[count].mark[j];
                    class1[count].mark[j]=temp;
                }
            }
            
        }
return 0;



        


    }



//}