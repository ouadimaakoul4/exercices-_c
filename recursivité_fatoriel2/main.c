#include <stdio.h>

// Recursive function to calculate the factorial of a number
int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1)
        return 1;
    // Recursive case: n * factorial of (n - 1)
    else
        return n * factorial(n - 1);
}
int main() {
    int num = 12; // Example number to calculate factorial
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
