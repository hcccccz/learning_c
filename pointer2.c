#include <stdio.h>



void swap(int x, int y);
void swap2(int *x, int *y);

int main()
{
    int x = 5;
    int y = 10;
    printf("x = %d, y = %d\n", x, y);
    // swap(x, y);
    // printf("x = %d, y = %d\n", x, y); //doesn't work
    swap2(&x, &y); //passing pointer to function
    printf("x = %d, y = %d\n", x, y);
}

void swap(int x, int y)
{
    // swap value of x and y
    // doesn't work since function is pass by value
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swap2(int *x, int *y)
{
    int temp = *x; //get value of x since x is a pointer
    *x = *y;
    *y = temp;

}