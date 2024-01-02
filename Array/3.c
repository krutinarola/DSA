/*#include<stdio.h>
void main()
{
    int i,j,k=0,a[5],b[5];

    for(i=0;i<5;i++)
    {
        printf("Enter %d A :",i+1);
        scanf("%d",&a[i]);
        k++;
    }

        k--;
    for(i=0;i<=k;i++)
    {  
        if(i==0)
        {
            printf("%d ",a[k]);
        }
        else if(i==k)
        {
            printf("%d ",a[0]);
        }
        else{
            printf("%d ",a[i]);
       }
    }
}

#include<stdio.h>
void main()
{
    int m=0,i,j,l=0,a[5],b[5],c[15],k;

    for(i=0;i<5;i++)
    {
        printf("Enter %d A value :",i+1);
        scanf("%d",&a[i]);
        l++;
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("Enter %d B value :",i+1);
        scanf("%d",&b[i]);
        m++;
    }

    j=0;
    for(i=0;i<l;i++)
    {
        c[i]=a[i];
        j++;
    }
     
    k=0;
    for(i=j;k<m;i++)
    {
        c[i]=b[k++];
        j++;
    }
   printf("\n %d \n",k);
    
    for(i=0;i<j;i++)
    {
        printf("%d ",c[i]);
    }

}

#include<stdio.h>
void main()
{
    int i,j,k,l,a[5];
    j=0;
    for(i=0;i<5;i++)
    {
        printf("Enter %d A :",i+1);
        scanf("%d",&a[i]);
        j++;
    }
    j--;

    for(i=0;i<=j;i++)
    {
        for(k=0;k<5;k++)
        {
            if(i==k)
            {
                continue;
            }
            else{
                printf("%d ",a[k]);
            }
        }
        printf("%d\n",a[i]);
    }
}
*/

#include<stdio.h>
void main()
{
    int i,j,a[5],k=0;

    for(i=0;i<5;i++)
    {
        printf("Enter %d A :",i+1);
        scanf("%d",&a[i]);
        k++;
    }
    k--;

    for(i=0;i<=k;i++)
    {
        if(i==0)
        {
            continue;
        }
        else{
            printf("%d ",a[i]);
        }
    }
    printf("%d ",a[0]);
}

