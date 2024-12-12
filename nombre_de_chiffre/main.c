#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    int n;
    int Nombre ;

    printf("entrer svp le nombre\n");
    scanf("%d",&Nombre);
    n= Nombre;

    while(n/10 != 0){
        n = n/10;
        ++i;
    }
    printf("le nombre de chiffres est %d",i);
    return 0;
}
