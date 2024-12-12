#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i =1;
    int somme = 0;
    while(i<=10){
        somme = somme + i;
        i++;
    }
    printf("la somme de 1 a 10 est : %d \n", somme);
    return 0;
}
