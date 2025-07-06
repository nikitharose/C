#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;

};

//typedef struct Node=Temp;
int main(int argc, char* argv[])
{
    int arr[8]={1,2,4,4,5,6,3,8};
    int loc1,loc2;
    scanf("%d %d", &loc1,&loc2);
    //printf("%d \n", sizeof(arr)/sizeof(arr[0]));
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* temp=head;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        temp->data=arr[i];
        if(i==sizeof(arr)/sizeof(arr[0])-1)
        {
            temp->next=NULL;
        }
        else
        {
        temp->next=(struct Node*)malloc(sizeof(struct Node));
        
        
        //printf("%d \n",temp->data);
        temp=temp->next;
        }

    
    }
    //temp=NULL;
    //head=head->next;
    //printf("%d \n",head->data);
    int count=0,flag=0;
    struct Node* result=head;
    struct Node* temp2;
    struct Node* temp3;
    while(head!=NULL)
    {
        count++;
        if(count==loc1)
        {
            temp2=head;
            flag++;
            //temp2=head;
            
        }
        if(count==loc2)
        {
            temp3=head;
            flag++;
            
        }
        if(flag==2)
        {
            int value=temp2->data;
            temp2->data=temp3->data;
            temp3->data=value;
            break;

        }
        head=head->next;
    }
    while(result!=NULL)
    {
        printf("%d \n", result->data);
        result=result->next;
    }


    return 0;
}