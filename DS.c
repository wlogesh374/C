
#include<stdio.h>
#include<stdlib.h>
int insert();
void display();
struct node
{
    int data;

    struct node *next
}*newnode,*head,*temp,*tail;
int main()
{
    insert();
    display();

}
int insert()
{
    int choice=1;
    while(choice==1)
    {


    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
if(tail==0&&head==0)
{

    head=tail=newnode;
}
else
{

    temp=tail;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    tail=newnode;
}
    printf("Enter ypur choice 0 or 1\n");
    scanf("%d",&choice);
    }
}


void display()
{
    temp=head;
    while(temp->next!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;

    }
    //printf("%d\n",temp->data);
    printf("%d\n",tail->data);

}
