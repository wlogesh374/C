#include<stdio.h>
#include<stdlib.h>
int insert();
void display();
struct node
{
    int data;
    struct node*next;

}*newnode,*temp,*head,*tail;


void main()
    {
        int a;
       a= insert();
        display(a);

    }
    int insert()
    {
        int count=0,choice=1;
        while(choice==1)
    {
        newnode=malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(newnode->data >=0)
        {
        if(head==0&&tail==0)
        {
          tail=head=newnode;

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

        count++;
        }
        else
            choice=0;
    }
    return count;
    }

    void display(int n)
        {
            if(n%2==0)
            n=(n/2)-0.5;
            else
                n=(n/2)+0.5;
            temp=head;

         for(int i=1;i<=n;i++)
             temp=temp->next;

         printf("%d ",temp->data);


        }
