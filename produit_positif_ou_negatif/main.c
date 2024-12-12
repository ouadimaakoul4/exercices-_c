#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m,n;

    printf("entrer svp le premier nombre \n"); scanf("%f",&m);
    printf("entrer svp le deuxieme nombre \n"); scanf("%f",&n);

            if(n== 0 || m == 0){printf("le produit est null !!!! /n");}
            if( n*m < 0 ){printf("le produit est negatif !!!! /n");}
            if(n * m > 0){printf("le produit est positif !!!! /n");}
    return 0;
}
