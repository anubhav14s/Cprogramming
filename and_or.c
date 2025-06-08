#include <stdio.h>

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    
    if (x > 0 && y > 0) {
        printf("Both numbers are positive (Logical AND is true).\n");
    } else {
        printf("At least one number is not positive (Logical AND is false).\n");
    }

    
    if (x > 0 || y > 0) {
        printf("At least one number is positive (Logical OR is true).\n");
    } else {
        printf("Both numbers are not positive (Logical OR is false).\n");
    }

    return 0;
}
