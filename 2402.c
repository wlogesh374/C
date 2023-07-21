
#include<stdio.h>
#include<stdlib.h>
int insert();
int insert1();

void display();
void display1();
int sum();
int sum1();


struct node
{
    int data;

    struct node *next
}*newnode,*head,*temp,*tail;

struct node1
{
    int data1;

    struct node *next;
}*newnode1,*head1,*temp1,*tail1;

int main()
{
    int a,b;
    insert();
    insert1();

    display();
    display1();
    a=sum();
    b=sum1();
    if(a>b)
    {
        printf("the ans is %d",a-b);
    }
    else{
                printf("the ans is %d",b-a);
    }

}
int insert()
{
    printf("Linked List 1\n");
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

int insert1()
{

        printf("Linked List 2\n");

    int choice=1;
    while(choice==1)
    {


    newnode1=(struct node*)malloc(sizeof(struct node1));
    printf("Enter the data\n");
    scanf("%d",&newnode1->data1);
    newnode1->next=0;
if(tail1==0&&head1==0)
{

    head1=tail1=newnode1;
}
else
{

    temp1=tail1;
    while(temp1->next!=0)
    {
        temp1=temp1->next;
    }
    temp1->next=newnode1;
    tail1=newnode1;
}
    printf("Enter ypur choice 0 or 1\n");
    scanf("%d",&choice);
    }
}









void display()
{
            printf("Linked List 1\n");

    temp=head;
    while(temp->next!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;

    }
    //printf("%d\n",temp->data);
    printf("%d ",tail->data);

}








int sum()
{
    int c=0;
    temp=head;
    while(temp!=0)
    {
                c=(c*10)+temp->data;

        temp=temp->next;

    }
    return c;

}



int sum1()
{
    int c1=0;
    temp1=head1;
    while(temp1!=0)
    {
            c1=(c1*10)+temp1->data1;

        temp1=temp1->next;

    }
    return c1;

}







void display1()
{
            printf("Linked List 2\n");

    temp1=head1;
    while(temp1->next!=0)
    {
        printf("%d ",temp1->data1);
        temp1=temp1->next;

    }
    //printf("%d\n",temp->data);
    printf("%d ",tail1->data1);

}
