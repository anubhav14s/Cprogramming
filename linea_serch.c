#include <stdio.h>

int main() {
    int a[7] = {2, 5, 98, 6, 93, 1, 34};
    int n, found = 0;

    printf("Enter the element to find:\n");
    scanf("%d", &n);

    for (int i = 0; i < 7; i++) {
        if (n == a[i]) {
            printf("Element is at index %d\n", i);
            found = 1; 
            break;   
        }
    }

    if (!found) {
        printf("Element not found.\n");
    }

    return 0;
}
