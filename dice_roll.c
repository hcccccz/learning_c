#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); 
    //srand 设置随机数种子 time(NULL) 将种子设置为当前时间

    int dice = 5; //the number of dice 
    int roll = 0;

    for (int i = 1; i <= dice; i++)
    {
        roll = rand() % 6 + 1; //generate random number between 0 and
                            //     RAND_MAX then module by 6 which
                            //      generate a number between 0 and 5 then plus 1
        printf("Dice %d; %d\n", i, roll);
    }
}