#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaration des variables
    int i = 1;
    int somme = 0;
    int n = 0;

    // ecriture et lecture du clavier
    printf("donner un entier n en nombre svp!\n");
    scanf("%d",&n);

    // boucle qui calcule la somme des nombres de 1 à n
        while(i<=n){
            somme = somme + i;
            i++;
                    }
    // affichge du résultat
        printf("la somme de 1 a %d est %d : \n",n,somme);

    return 0;
}
