#include <stdio.h>
#include <stdlib.h>

int main()
{
    int somme = 0;
    int i;

    for(i=1; i<=10 ; i++){

        somme = somme + i ;
    }
    printf("la somme des nombres de 1 a 10 est : %d\n",somme);
    return 0;
}
