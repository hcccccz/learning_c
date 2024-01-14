#include <stdio.h>

//pass array to function is passing pointer to function

void add_one(int *myarray);
// void add_one(int myarray[]); 

int main()
{
    int myarray[5] = {1, 2, 3, 4, 5};

    add_one(myarray);

    printf("%d",myarray[0]);
    return 0;
}

void add_one(int *myarray)
{
    myarray[0] = myarray[0] + 1;

}