#include <stdio.h>

struct node
{
    int value;
    struct node *next //指向下一个node的指针， 指针有类型
};

typedef struct node node;


void printlist(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d- ", temp)
    }
}



int main() 
{

    node n1, n2, n3;
    node *head;

    n1.value = 45;
    n2.value = 8;
    n3.value = 32;
    
    head = &n3;
    n3.next = &n2;
    n2.next = &n1;
    n1.next = NULL;


    return 0;

}