/* P04: 一維陣列基本練習 - 陣列不會自動初始化為零，需自行設定 */
#include <stdio.h>

int main(void)
{
    int n[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        n[i] = 0;
    }

    printf("%s%13s\n", "Element", "Value");

    for (i = 0; i < 10; i++)
    {
        printf("%7d%13d\n", i, n[i]);
    }

    return 0;
}
