// Recursive function to return nth Fibonacci number
int fibonacci(int n) {
    // Base cases: fibonacci(0) is 0, fibonacci(1) is 1
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    // Recursive case: sum of the two previous Fibonacci numbers
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
/*
En mathématiques, la suite de Fibonacci est une suite de nombres entiers dont
 chaque terme successif représente la somme des deux termes précédents,
 et qui commence par 0 puis 1. Ainsi, les dix neufs termes qui
 la composent sont 0, 1, 1, 2, 3, 5, 8, 13, 21 ,34 est 55

 F n =  F n-1  +  F  n-2    pour n >= 2

*/
int main() {
    int n = 10; // Example to find the 10th Fibonacci number
    printf("Fibonacci number at position %d is %d\n", n, fibonacci(n));
    return 0;
}
