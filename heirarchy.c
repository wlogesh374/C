
#include<stdio.h>
#include<stdlib.h>
int insert();
void display();
struct node
{
    int data;

    struct node *next,*prev,*child;
}*newnode,*head,*head1,*head2,*head3,*temp,*tail,*curr,*nextnode,*tailc;





int main()
{
    int a[6]={1,2,3,4,5,6};
        int b[4]={7,8,9,10};
    int c[2]={11,12};

    head1=insert(a,6);
    head2=insert(b,4);
    head3=insert(c,2);

//printf("%d %d %d \n",head1->data,head2->data,head3->data);
head1->next->next->child=head2;
head2->next->child=head3;
    /*display(head1);
    display(head2);
    display(head3);*/
    struct node *flaten(head1);
    display1(head1);

}
int insert(int a[],int n)
{ int i;
struct node *head=0,*temp=0,*tail=0;

   for( i=0;i<n;i++)
   {
    newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=a[i];

    newnode->next=0;
    newnode->prev=0;


if(tail==0&&head==0)
{

    temp=head=tail=newnode;
}
else
{

    temp->next=newnode;
    newnode->prev=temp;

    temp=newnode;
    tail=newnode;

}

    }
    return head;
}
struct node *flaten(struct node *head)
{
    struct node *curr = head;
    struct node *tail = head;
    while (curr != NULL)
    {
        struct node *child_node = curr->child;
        struct node *next_node = curr->next;
        if (child_node != NULL)
        {
            tail = flaten(child_node);
            curr->next = child_node;
            child_node->prev = curr;
            tail->next = next_node;
            if (next_node)
                next_node->prev = tail;
            curr = tail;
        }
        else
        {
            curr = curr->next;
            if (curr)
                tail = curr;
        }
    }
    return tail;
}




void display(struct node *head)
{
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;

    }

}


void display1(struct node *head)

{
    while(head!=0)
    {
        printf("%d\n",head->data);
        head=head->next;
    }

}
