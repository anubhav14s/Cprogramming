#include <stdio.h>

int main() {
    int x1, x2, i;
    printf("Enter the range: ");
    scanf("%d %d",  x1,  x2);  

    printf("EVEN numbers between %d and %d are:\n", x1, x2);

    i = x1;  
    do {
        if (i % 2 == 0) {
            printf("%d\t", i);
        }
        i++;
    } while (i <= x2);

    return 0;
}
