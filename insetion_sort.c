#include <stdio.h>

void insertion_sort(int [], int length);

int main()
{
    int a[] = {8,4,9,5,7,6,3,2};
    size_t length = sizeof(a)/sizeof(int);

    for (int i = 0; i < length; i++)
    {
        printf("%d ",a[i]);
    }   
    printf("\n");

    insertion_sort(a, length);
    for (int i = 0; i < length; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

void insertion_sort(int a[], int length)
{
    for (int i = 1; i < length; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) ////向后移 
        {
            a[j+1] = a[j]; 
            j = j - 1;

        }
        a[j+1] = key;
    }
}