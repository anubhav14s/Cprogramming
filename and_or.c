#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    
    if (a > 0 && b > 0) {
        printf("Both numbers are positive (Logical AND is true).\n");
    } else {
        printf("At least one number is not positive (Logical AND is false).\n");
    }

    
    if (a > 0 || b > 0) {
        printf("At least one number is positive (Logical OR is true).\n");
    } else {
        printf("Both numbers are not positive (Logical OR is false).\n");
    }

    return 0;
}
