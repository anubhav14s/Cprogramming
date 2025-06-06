#include <stdio.h>
int isprime(int a)
{

    if (a <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
int main()
{
    int n1, n2, i;
    printf("Enter the lower and upper limit: ");
    scanf("%d %d", &n1, &n2);
    i = n1;
    printf("The prime numbers between %d and %d are:\n",n1,n2);
    while (i <= n2)
    {

        if (isprime(i))
        {
            printf("%d\t", i);
        }
        i++;
    }
}