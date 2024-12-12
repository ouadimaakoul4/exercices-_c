#include <stdio.h>

#define LIGNES 2 // Nombre de lignes
#define COLS 2 // Nombre de colonnes

int main()
{
    int A[LIGNES][COLS];
    int num, i, j;

    /* Saisir les éléments de la matrice A */
    printf("Saisir les elements de la matrice A de taille (%d,%d) \n",LIGNES, COLS);
    for(i=0; i<LIGNES; i++)
    {
        for(j=0; j<COLS; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    /* Saisir un scalaire */
    printf("Saisir un scalaire ");
    scanf("%d", &num);

    /* Effectuer la multiplication scalaire de la matrice */
    for(i=0; i<LIGNES; i++)
    {
        for(j=0; j<COLS; j++)
        {
            /* (cAij) = c . Aij */
            A[i][j] = num * A[i][j];
        }
    }

    /* Afficher le résultat */
    printf("\n le produit scalaire est : = \n");
    for(i=0; i<LIGNES; i++)
    {
        for(j=0; j<COLS; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
