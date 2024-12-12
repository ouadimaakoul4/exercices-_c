#include <stdio.h>
// Function declarations
void printMessage(char* message);

int main() {
    // Declare a function pointer
    void (*funcPtr)(char*);

    // Point it to printMessage function
    funcPtr = &printMessage;

    // Call the function via pointer
    funcPtr("Hello, Function Pointers!");

    return 0;
}

// Function definition
void printMessage(char* message) {
    printf("%s\n", message);
}
