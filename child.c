#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int data;
    struct node *prev;
    struct node *child;
    struct node *next;
};
struct node *insert(struct node *head, int data)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    new_node->child = NULL;
    if (head == NULL)
    {
        head = new_node;
        return head;
    }
    else
    {
        struct node *tail = head;
        while (tail->next != NULL)
        {
            tail = tail->next;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return head;
    }
}
struct node *create_list(struct node *head, int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        head = insert(head, arr[i]);
    }
    return head;
}

void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void print_all(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        if (temp->child != NULL)
            print_all(temp->child);
        temp = temp->next;
    }
}
struct node *flat_list(struct node *head)
{
    struct node *curr = head;
    struct node *tail = head;
    while (curr != NULL)
    {
        struct node *child_node = curr->child;
        struct node *next_node = curr->next;
        if (child_node != NULL)
        {
            tail = flat_list(child_node);
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
void main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {7, 8, 9, 10};
    int arr3[] = {11, 12};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    struct node *head1 = NULL;
    struct node *head2 = NULL;
    struct node *head3 = NULL;
    head1 = create_list(head1, arr1, size1);
    head2 = create_list(head2, arr2, size2);
    head3 = create_list(head3, arr3, size3);
    // display(head1);
    // display(head2);
    // display(head3);
    head1->next->next->child = head2;
    head2->next->child = head3;
    // print_all(head1);
    flat_list(head1);
    display(head1);
}
