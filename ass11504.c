
#include<stdio.h>
#include <stdlib.h>
int insert();
void insertAtBeginning();
void insertAtMid();
void insertAtEnd();
void display();
void deleteAtFront();
void deleteAtMid();
void deleteAtEnd();
void search();
void count();



struct node{
int data;
struct node *next;
struct node *prev;
}*newnode,*head=0,*tail,*temp1,*temp;

int main()
{
    int c,l;
    while(1)
    {


    printf("\n1.Create\n2.insertAtBeginning\n3.insertAtMid\n4.insertAtEnd\n5.deleteAtFront\n6.deleteAtMid\n7.deleteAtEnd\n8.count\n9.search\n10.display\n11.exit\n\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
          l=insert();
          display();
          break;
        case 2:
          insertAtBeginning();
          display();
          break;
         case 3:
          insertAtMid();
          display();
          break;
          case 4:
          insertAtEnd();
          display();
          break;
          case 5:
          deleteAtFront();
          display();
          break;
          case 6:
          deleteAtMid();
          display();
          break;
          case 7:
          deleteAtEnd();
          display();
          break;
          case 8:
           display();
          count(l);
          break;
          case 9:

         display();
          search();
          break;
          case 10:
          display();
          break;
        case 11:
         exit(0);
         break;
    }

    }
}

int insert()
{
    int choice=1,l=0;
    while(choice==1)
    {
    newnode=malloc(sizeof(struct node));
        printf("Enter the data");
       scanf("%d",&newnode->data);
       newnode->next=0;
       newnode->prev=0;
       if(head==0)
       {
           head=tail=newnode;
           head->prev=0;

       }
       else
       {
           temp=tail;
           while(temp->next!=0)
           {
               temp=temp->next;

           }
           temp->next=newnode;
           newnode->prev=temp;
           tail=newnode;

       }
       l++;
       printf("enter the choice 0 or 1: ");
        scanf("%d",&choice);

    }
return l;
}
