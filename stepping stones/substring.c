#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node
{
    int data;
    struct Node* next;
};

int main(int argc, char* argv)
{
   int ins=0,value;
   char function[10]; 
   struct Node* head=(struct Node*)malloc(sizeof(struct Node));
   struct Node* temp=head;
    while(ins<10000)
    {

        scanf("%d, %s", &value,&function);
        //printf("the values is %d and operation is %s",value,function);
        if(strcmp(function,"insert")==0)
        {
           temp->next=(struct Node*)malloc(sizeof(struct Node));
           temp->data=value;
           temp=temp->next;
           temp->next=NULL;
        }
        
        else if(strcmp(function,"release")==0)
        {

            if(head->next!=NULL)
            {
            int output=head->data;
            head=head->next;
            printf("%d \n",output);
            }
            else
            {
                printf("queue is empty \n");
            }
        }
        

    }
    
   return 0; 
}