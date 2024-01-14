#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;

    printf("%d\n", p);
    printf("size of int is %d\n", sizeof(int));
    printf("%d\n", p + 2);
    
}