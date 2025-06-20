#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *display(int Arr[],int size)
{
    struct Node *head=NULL,*temp=NULL, *current=NULL;
    int i=0;
    for(i=0;i<size;i++)
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=Arr[i];
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
void revers(struct Node *head)
{
    struct Node *prev=NULL, *current=head,*next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    printf("\n\n");
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}
int main()
{
    int Arr[]={10,20,30,40,50,60};
    struct Node *head=NULL;
    head=display(Arr,6);
    struct Node *newhead=head;
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    revers(newhead);
    getch();
}
