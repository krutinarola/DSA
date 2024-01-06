#include<stdio.h>

 int linear_search()
{
    int n[5],x,i,v,k;
    for( i=0; i<5; i++)
    {
        printf("Enter array :");
        scanf("%d",&n[i]);
    }
    printf("Enter the search number: ");
    scanf("%d",&x);

    for( i=0;i<=5;i++)
    {
        if(x==n[i])
        {
            printf("%d ",i);
        }
      /*  else{
            printf("Number is not   " );
        }*/
    }
}
int main()
{
    linear_search();
}
























/*#include<stdio.h>
#include<stdlib.h>
 int linear_serech()
{
    int i,a[10];
    for(i=0;i<10;i++)
    {
        a[i]=rand()/100;
    }
    for(i=0;i<10;i++)
    {
        printf("\n%d",a[i]);
    }
}
*/