/* 課本習題 6.11: 改良版氣泡排序
   (a) 每一輪比較次數遞減
   (b) 若某一輪沒有發生交換，代表已排序完成，提前結束 */
#include <stdio.h>
#define SIZE 10

int main(void)
{
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int pass, i, hold, swapped;

    printf("Data items in original order\n");
    for (i = 0; i < SIZE; i++)
        printf("%4d", a[i]);

    for (pass = 0; pass < SIZE - 1; pass++)
    {
        swapped = 0;
        for (i = 0; i < SIZE - 1 - pass; i++)
        {
            if (a[i] > a[i + 1])
            {
                hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
                swapped = 1;
            }
        }
        if (!swapped)
            break;
    }

    printf("\nData items in ascending order\n");
    for (i = 0; i < SIZE; i++)
        printf("%4d", a[i]);
    printf("\n");

    return 0;
}
