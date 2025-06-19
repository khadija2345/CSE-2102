#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *display(int array[],int size)
    {
        struct Node *head=NULL, *temp=NULL, *current=NULL;
        int i;
        for(i=0;i<size;i++)
        {
            temp=(struct Node*)malloc(sizeof(struct Node));
            temp->data=array[i];
            temp->next=NULL;
            if(head==NULL)
            {
                head=temp;
                current=temp;
            }
            else
            {
                current->next=temp;
                current=current->next;
            }
        }
    return head;
    }
int search(struct Node *head,int val)
{
    int index=1;
    while(head!=NULL)
    {
        if(head->data==val)
        {
            return index;
        }
        else
        {
            index++;
            head=head->next;
        }
    }
    return -1;
}

int main()
{
   int Arr[]={10,20,30,50,60};
   struct Node *head=NULL;
   head=display(Arr,5);
   printf("\nIndex: %d",search(head,60));
   getch();
}

