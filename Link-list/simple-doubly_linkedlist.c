#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head;
void display()
{
    struct node *ptr;
    if (head== NULL)
    printf("\n LIST IS EMPTY");
    while (ptr != NULL)
    {
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }
}
void insert_first(int val) // insert node first
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    if (head == NULL)
    {
        ptr->prev = NULL;
        ptr->next = NULL;
        head = ptr;
    }
    else
    {
        ptr->prev = NULL;
        ptr->next = head;
        head->prev = ptr;
        head = ptr;
    }
}
void insert_mid(int val, int pos) // insert node any position
{
    struct node *ptr, *temp, *prev;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    temp = head;
    if (head == NULL)
    {
        ptr->prev = NULL;
        ptr->next = NULL;
        head = ptr;
    }
    else
    {
        while (temp->data != pos)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = ptr;
        ptr->prev = prev;
        ptr->next = temp;
    }
}
void insert_end(int val) // insert node end
{
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    if (head == NULL)
    {
        ptr->prev = NULL;
        ptr->next = NULL;
        head = ptr;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = ptr;
        ptr->prev = temp;
        ptr->next = NULL;
    }
}
void delete_first() // delete node first
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
        printf("\nUnerflow...");
    else
    {
        temp = head;
        head = temp->next;
        free(temp);
        printf("Node Deleted.....");
    }
}
void delete_mid(int pos) // delete node any position
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    temp = head;
    while(temp->data != pos)
        temp = temp->next;
    if(temp->next == NULL)
        printf("Underflow.....");
    else if(temp->next->next == NULL)
    {  
        temp ->next = NULL;  
        printf("Node Deleted.....");  
    }  
    else
    {
        ptr = temp -> next;  
        temp -> next = ptr -> next;  
        ptr -> next -> prev = temp;  
        free(ptr);  
        printf("Node Deleted.....");
    }
}
void delete_end()   //delete node end
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp = head;
    if(head == NULL)
        printf("Underflow.....");
    else if(head->next == NULL)
    {
        head = NULL;
        free(head); 
        printf("Head is Deleted.....");
    }
    else
    {
        while(temp->next != NULL)
            temp = temp->next;
        temp->prev->next = NULL;
        free(temp);
        printf("Node Deleted.....");
    }
}
int main()
{
    insert_first(10);
    insert_first(20);

display();
}