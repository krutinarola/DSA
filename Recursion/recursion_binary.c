// shorting array and find digit. present in array or not.

#include <stdio.h>

int a[20] = {1,5,3,4,6,9,2,5,8,12}, a = 0, k = 0;

int binary_search(int n, int min, int max)
{
    int mid;
    mid = (max + min) / 2;

    if (mid >= 0 && mid < 12)
    {

        if (a == mid)
        {
            k++;
            if (k > 3)
            {
                return -1;
            }
        }

        if (n == a[mid])
        {
            return 1;
        }
        else if (n > a[mid])
        {
            min = mid + 1;

            a = mid;
            mid = (max + min) / 2;
            return binary_search(n, min, max);
        }
        else if (n < a[mid])
        {
            max = mid - 1;

            a = mid;
            mid = (max + min) / 2;
            return binary_search(n, min, max);
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    int i, k, j, mid, min, max, x, result;

    printf("Enter array...... ");
    scanf("%d", &x);

    for (i = 0; i <= 9; i++)
    {
        for (j = 9; j >= i + 1; j--)
        {
            if (a[i] > a[j])
            {
                a[j] = a[i] + a[j]; // b = a + b
                a[i] = a[j] - a[i]; // a = b - a
                a[j] = a[j] - a[i]; // b = b - a
            }
        }
    }
    for (i = 0; i <= 9; i++)
    {
        printf("%d ", a[i]);
    }
    min = 0;
    max = 9;

    result = binary_search(x, min, max);

    if (result == 1)
    {
        printf(" \n%d is present in an Array", x);
    }
    else if (result == -1)
    {
        printf(" \n%d is not present in Array", x);
    }
    return 0;
}
