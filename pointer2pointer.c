#include <stdio.h>
int main()
{
    int x = 10;
    int *p = &x;
    int **q = &p;
    printf("%d %d %d", x, *p, **q);
    return 0;
}
