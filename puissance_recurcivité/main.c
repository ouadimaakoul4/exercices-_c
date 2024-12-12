#include <stdio.h>
// Recursive function to calculate power (base^exp)
int power(int base, int exp) {
    // Base case: any number raised to 0 is 1
    if (exp == 0)
        return 1;
    // Recursive case: base * base^(exp - 1)
    else
        return base * power(base, exp - 1);
}
int main() {
    int base = 2, exp = 4; // Example to calculate 2^4
    printf("%d to the power of %d is %d\n", base, exp, power(base, exp));
    return 0;
}
