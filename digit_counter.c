#include <stdio.h>
int count(int a);
int main()
{
    int num;
    printf("Enter the number \n");
    scanf("%d", &num);
    int c = count(num);
    printf("the number entered has %d digits\n", c);
    return 0;
}
int count(int a)
{
    int c = 0;
    if (a == 0)
        return 1;
    if (a < 0)
        a = -a;
    while (a != 0)
    {
        c++;
        a = a / 10;
    }
    return c;
}