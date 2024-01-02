
#include<stdio.h>
int main()
{
    int i,j,v=0,a1[10],a2[10];

    for(i=0;i<5;i++)
    {
        printf("Enter %d :",i+1);
        scanf("%d",&a1[i]);
        v++;
    }
         v--;
         
    for(i=0;i<=v;i++)
    {
        if(i==0)
        {
            printf("%d ",a1[v]);
        }
        else if(i==v)
        {
            printf("%d ",a1[0]);
        }
        else{
            printf("%d ",a1[i]);
}
 }
}

/*#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Swapping the first and last elements
    swap(&numbers[0], &numbers[size - 1]);

    // Printing the modified sequence
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Swapping the first and last elements
    int temp = numbers[0];
    numbers[0] = numbers[size - 1];
    numbers[size - 1] = temp;

    // Printing the modified sequence
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
*/
