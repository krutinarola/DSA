#include<stdio.h>
#define n 10
int a[n],f=-1,r=-1;


int insertfirst(int val)
{
    if(r<0)
    {
         f = r = 0;
        a[r]=val;
    }
    else if((r+1)%n == f)
    {
        printf("Queue is full...");   
    }
   else
    {
        r=(r+1)%n;
        a[r] = val;
    }   
}
int deletefrist()
{
    if(f<0)
    {
         printf("Queue is empty....");
    }
    else if(f==r)
    {
       f=r=-1;
    }
    else
    {
         f=(f+1)%n;
    }
}
int display()
{
    int 
}
int main()
{
     insertfirst(10);
     insertfirst(20);
     insertfirst(30);
     insertfirst(40);
    

     //deletefrist();
     //deletefrist();
     //deletefrist();
     //deletefrist();
     //deletefrist();
    // deletefrist();

     display();
}
