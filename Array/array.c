
// C Program To Merge Two Arrays 
#include <stdio.h>
int main()
{
	int arr1 = 5, arr2 = 5, arrsize, i, j,x[5],y[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter value of x: ");
        scanf("%d",&x[i]);  
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Enter value of y: ");
        scanf("%d",&y[i]);  
    }
    
	//  Array Size Declaration
	arrsize = arr1 + arr2;
	int c[arrsize];

	// copying array 1 elements into an array
	for (i = 0; i < arr1; i++) 
    {
		c[i] = x[i];
	}

	// copying array 2 elements into an array
	for (i = 0, j = arr1;j < arrsize && i < arr2; i++, j++) 
    {
		c[j] = y[i];
	}

	// Array Elements After Merging
	for (i = 0; i < arrsize; i++) 
    {
		printf("%d ", c[i]);
	}
	return 0;
}
