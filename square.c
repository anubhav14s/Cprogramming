#include <stdio.h>
#include <math.h>

int main() {
    double n1, square;

    
    printf("Enter a number: ");
    scanf("%lf", &n1);  

    square = pow(n1, 2);  

    
    printf("The square of %.2lf is %.2lf\n", n1, square);

    return 0;
}
