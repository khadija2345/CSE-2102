///Insert value in First position
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *display(int Arr[], int Size)
{
    struct Node *head=NULL, *temp=NULL, *current=NULL;
    int i;
    for(i=0;i<Size;i++)
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
void insert(struct Node *head,int data)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=head;
    struct Node *newhead=temp;
    print(newhead);
}
void print(struct Node *head)
{
    struct Node *current=head;
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");
}
int main()
{
    int Arr[]={20,30,40,50};
    struct Node *head=NULL;
    head=display(Arr,4);
    print(head);
    insert(head,10);
    getch();
}
