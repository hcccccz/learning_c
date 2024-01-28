#include <stdio.h>



void change_arr(int a[3][4])
{
    a[0][0] = 100;
}


int main()
{

    int a[3][4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            a[i][j] = -1;
        }
    }

    change_arr(a);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

