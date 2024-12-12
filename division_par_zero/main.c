#include <stdio.h>
int divide(int a, int b) {
    if (b == 0) {
        return -1;  // Error: Division by zero
    }
    return a / b;
}

int main() {
    int result = divide(10, 2);  // Edge case: division by zero
    if (result == -1) {
        printf("Error: Division by zero.\n");
    } else {
        printf("Result: %d\n", result);
    }
    return 0;
}
