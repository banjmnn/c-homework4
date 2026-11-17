/* P25: Call by reference (只有 C++ 支援，所以副檔名是 .cpp) */
#include <stdio.h>

int addbyone(int &xref);

int main()
{
    int x = 100;
    int y = addbyone(x);
    printf("x=%d\n", x);
    (void)y;
    return 0;
}

int addbyone(int &xref)
{
    xref++;
    printf("xref=%d\n", xref);
    return xref;
}
