/* P26: 用 %p 印出位址，驗證陣列名稱就是第一個元素的位址 */
#include <stdio.h>

int main(void)
{
    char array[5];

    printf("    array = %p\n&array[0] = %p\n   &array = %p\n",
           (void *)array, (void *)&array[0], (void *)&array);

    return 0;
}
