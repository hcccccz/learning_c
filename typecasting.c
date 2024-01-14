#include <stdio.h>

/*
typecasting is a process convert onem datatype to another datatype
*/
int main()
{
    int x = 10;
    float y;
    y = (float) x;
    printf("%f\n",y);

    x = (int) y;
    printf("%d",x);    

    return 0;
}