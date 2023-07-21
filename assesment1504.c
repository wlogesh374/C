
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
    insert();

}

int insert()
{
    int choice=1,l=0,i,flag=1;
    while(choice==1)
    {
    newnode=malloc(sizeof(struct node));
        printf("Enter the data");
       scanf("%d",&newnode->data);
       newnode->next=0;
       newnode->prev=0;
       if(newnode->data>=0)
       {
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
       }
       else
        choice=0;

    }
    temp=head;
    int a[l],c1=0,c2=0,c3=0;
    for(i=0;i<l;i++)
    {
        a[i]=temp->data;
        temp=temp->next;
        if(a[i]==5)
        c1++;
        else if(a[i]==10)
            c2++;
        else
            c3++;

    }
      for(i=0;i<l;i++)
    {
       printf("\n%d\n",a[i]);
    }

   for(i=0;i<l;i++)
   {
       if(a[i]==5)
       {
           flag=1;
       }
      else if(a[i]==10)
       {
           c1--;
           if(c1<0)
            flag=0;
            else
                flag=1;
       }
       else if(a[i]==20)
       {
           c1--;
           c2--;
           if(c1<0||c2<0)
            flag=0;
            else
            flag=1;
       }
   }
   if(flag==1)
   {
       printf("True");

   }
   else
    {
        printf("False");
    }











}
