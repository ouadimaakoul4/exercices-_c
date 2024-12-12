#include <stdio.h>
// declaration de la procedure
void modifyValue(int num);
int main() {
    int a = 10;
    printf("avant: %d\n", a);
    modifyValue(a);  // Passage par valeur
    printf("apres: %d\n", a);  // la valeur de a ne change pa
    return 0;
}
// Defintion de la procedure
void modifyValue(int num) {
    num = 20;  // modifie la  variable locle , non pas la variable du prgramme
}
