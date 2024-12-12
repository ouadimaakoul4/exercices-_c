#include <stdio.h>
// Function declaration
void modifyValue(int *num);  // le parametre est de type pointeur
int main() {
    int a = 10;
    printf("Before: %d\n", a);
    modifyValue(&a);  // passage par reference , on envoi l adresse &a
    printf("After: %d\n", a);  // Value is changed
    return 0;
}
// Function definition
void modifyValue(int *num) {
    *num = 20;  // Modifies the original variable through the pointer
}
