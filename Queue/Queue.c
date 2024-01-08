#include<stdio.h>
#define n 5
int a[n],f=-1,r=-1;

int display()
{
     for(int i=f; i<=r; i++)
    {
        printf("%d ",a[i]);
    }
}
int insertend(int val)
{
    if(r>=n-1)
    {
        printf("Queue is full...");   
    }
    else if(f<0)
    {
        f=r=0;
        a[r]=val;
    }
   else
    {
        a[++r] = val;
    }   
}
int deletefrist()
{
    if(f==r)
    {
        a[r];
    }
    else if(f==r==-1)
    {
        printf("Queue is empty....");
    }
    else
    {
        a[f++];
    }
}
int main()
{
     insertend(10);
     insertend(20);
     insertend(30);
     insertend(40);
     insertend(50);

     //deletefrist();
     //deletefrist();
    // deletefrist();
    // deletefrist();
    // deletefrist();
    // deletefrist();

     display();
}

/*
INSERT ->REAR
DELET ->FRONT
INSERT ->FRONT 
DELET ->REAR 

#include<stdio.h>
int front = -1;
int rear = -1;
int queue[10];
int i,n=10;
void insert(int val)
{
    if(rear>n-1)
    {
        printf("QUEUE IS FULL");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=val;
    }
    else
    {
        queue[++rear]=val;
    }
}
int delet()
{
    int x;
    if(front==rear==-1)
    {
        printf("QUEUE IS EMPTY");
    }
    else if(front==rear)
    {
        x=queue[rear];
    }
    else
    {
        x=queue[front++];
        return x;
    }
}
void jinsert(int val)
{
    if(front>n-1)
    {
        printf("\n QUEUE IS FULL");
    }
    else
    {
        int x=rear;
        while(x>=0)
        {
            queue[x+1]=queue[x];
            x--;
        }
        front=0;
        queue[front]=val;
        rear++;
    }
}
int jdelet()
{ 
    rear--;
}
void print()
{
    for(i=front;i<=rear;i++)
    {
        printf("%d \t",queue[i]);
    }
}
int main()
{
    int a,b;
    while(a!=0)
    {
        printf("\n 1.INSERT REAR ");
        printf("\n 2.DELETE FRONT");
        printf("\n 3.INSERT FRONT ");
        printf("\n 4.DELETE T");
        printf("\n ENREAR ");
        printf("\n 5.PRINTER YOUR CHOICE :");
        scanf("%d",&a);

        switch(a)
        {
            case 1:
            scanf("%d",&b);
            insert(b);
            break;
            case 2:
            delet();
            break;
            case 3:
            scanf("%d",&b);
            jinsert(b);
            break;
            case 4:
            jdelet();
            break;
            case 5:
            print();
            break;
            default :
            printf("\n WRONG CHOICE ");
            break;
            

        }
    }
}
*/