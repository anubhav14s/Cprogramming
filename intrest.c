#include <stdio.h>

// Function to calculate Simple Interest
float calculateSimpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

int main() {
    float principal, rate, time, interest;

    // Taking input
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculating Simple Interest
    interest = calculateSimpleInterest(principal, rate, time);

    // Display result
    printf("Simple Interest = %.2f\n", interest);

    return 0;
}
