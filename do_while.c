#include <stdio.h>

int main() {
    int n1, n2, i;
    printf("Enter the range: ");
    scanf("%d %d", &n1, &n2);  

    printf("EVEN numbers between %d and %d are:\n", n1, n2);

    i = n1;  
    do {
        if (i % 2 == 0) {
            printf("%d\t", i);
        }
        i++;
    } while (i <= n2);

    return 0;
}
