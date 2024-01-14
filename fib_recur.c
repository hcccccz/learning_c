#include <stdio.h>


/*
Computing the Fibonacci Sequence recursive mehod
*/



int fib(int n);



int main()
{
    
    int term1 = 0;
    int term2 = 1;
    int fibn = 0;
    int length = 0;
    do {
        printf("please enter the length of sequence: ");
        scanf("%d",&length);
        if (length < 3) 
            printf("please enter the length > 3");

    } while(length < 3);

    for (int i = 0; i < length; i++)
    {
       printf("%d",fib(i))  ;
       if (i != length -1) printf(",");
       else printf("\n");
    }
    
    return 0;

}

int fib(int n)
{
    if (n > 1 ) return fib(n-1) + fib(n-2);
    else if (n == 1) return 1;
    else if (n == 0) return 0;
    else 
    {
        printf("n must be greater than 1");
        return -1;

    }
}