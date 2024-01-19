#include<stdio.h>
#define n 5
int a[n],top=-1,k=-1;

int display()
{
    for(int i=0; i<=top; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

}
//stack is full...

int insertend(int val)
{
    if(top>=n-1)
    {
        printf("stack is full.......\n");
    }
    else
    {
        //top++;
        a[++top] = val;
    }
}
/*
//stack is delete...
int deleteend()
{
    if(top < 0)
    {
        printf("stack is empty.....\n");
    }
    else{
        top--;
       // a[--top] =val;
       a[top];
        
    }
}
*/
int insertfrist(int val)
{ 
    for( int i=top;i>=0;i--)
    {
    if(k<=n-1)
    {
        printf("stack is full......\n");
    }
    else{
        k--;
        a[k]=val;
        //a[k];
    
    }
    }
}
int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);

    /*deleteend();
    deleteend();
    deleteend();
    deleteend();
    //deleteend();*/

    insertfrist(10);
    insertfrist(20);
    


    display();
}
  



















































































