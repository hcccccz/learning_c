#include <stdio.h>
/*

pointer - variable that stores address of another variable

int a; //declear variable a
int *p; //declear point variable
p = &a; //p store address of a


*/


int main()
{
    int a = 5;
    int *p = &a; //declear assign address to point variable
    printf("p:%p\n",p); // print pointer, print the address
    printf("*p: %d\n",*p); //pointer 's variable value
    printf("a: %d\n",a); //variable value
    printf("&a: %p\n",&a); //variable address

    return 0;

}