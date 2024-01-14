#include <stdio.h>


int main()
{
    int myarray[] = {1,2,3,4,5,6,7,8,9};

    size_t length = sizeof(myarray)/sizeof(int); //get length of array
    int temp;

    for (int i = 0; i < length/2; i++)
    {
        temp = myarray[i];
        myarray[i] = myarray[length-1-i];
        myarray[length-1-i] = temp;

    }

    for (int i = 0; i < length; i++)
        printf()
    
    return 0;
}