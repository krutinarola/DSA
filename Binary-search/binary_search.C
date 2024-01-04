#include<stdio.h>
int binary_search(int n,int min,int max)
{
    //int mid;
    int a;
    // mid=min+(max-min)/2;

        if(n==a)
        {
            return 1;
        }
        else if(n>a)
        {
            min=a;
            binary_search(n,min,max);
        }
         else if(n>a)
        {
            max=a;
            binary_search(n,min,max);
        }
        else{
            return -1;
        }
}
int main()
{
    int arr[10]={1,2,3,4,1,8,2,3,5,1},i,j,min,max,mid,a,x=8,result;

        for(i=0;i<9;i++)
        {
           for(j=9;j>=i+1;j--)
            {
                if(arr[i]>arr[j])
                {
                    arr[j]=arr[i]+arr[j];   //b=a-b
                    arr[i]=arr[j]-arr[i];   //a=b-a
                    arr[j]=arr[j]-arr[i];   // b=b-a 
                }
            }
        }
        for( i=0;i<10;i++)
        {
            printf(" %d" ,arr[i]);
        }
       // min=arr[0];
       // max=arr[9];

        result=binary_search(x,min,max);

        if(result==1)
        {
            printf("x is presrnt in an array");
        }
        else
        {
            printf("x is not presrnt in an array");
        }
       
    
return 0;

}
