
#include<stdio.h>
#include<stdlib.h>
int insert();
void display();
void delete();
void delete1(int l);

void display1();
void sort();
    void ss();

struct node
{
    int data;

    struct node *next;
        struct node *prev;

}
*newnode,*head,*temp,*tail,*c;
int main()
{
    int a;
    a=insert();
    display();

    delete();
display();
    sort();
    printf("The sorted list is \n");
   display();


}
int insert()
{
    int l=0;
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
l++;
    printf("Enter your choice 0 or 1\n");
    scanf("%d",&choice);
    }
        printf("The length of node is %d\n",l);
return l;
}


void display()
{
    temp=head;
        printf("the values are\n ");

    while(temp->next!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;

    }
    printf("%d\n",temp->data);

}
void sort() {
        temp = head, c = NULL;
        int t;


            while(temp != 0) {
                c = temp->next;

                while(c != 0) {
                    if(temp->data > c->data) {
                        t= temp->data;
                        temp->data =c->data;
                        c->data = t;
                    }
                    c = c->next;
                }
                temp = temp->next;
            }

    }



    void delete()
    {
        temp=head;
        head=head->next;
        printf("the removed element is %d\n",temp->data);
        free(temp);
    }



