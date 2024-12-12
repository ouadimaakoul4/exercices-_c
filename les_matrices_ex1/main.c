#include <stdio.h>

#define LIGNES 2 // Nombre de lignes
#define COLS 2 // Nombre de colonnes

int main()
{
    int A[LIGNES][COLS]; // Matrice 1
    int B[LIGNES][COLS]; // Matrice 2
    int C[LIGNES][COLS]; // R�sultat

    int i, j;

    /* Saisir les �l�ments de la matrice A */
    printf("Saisir les elements de la matrice A de taille (%d,%d) \n",LIGNES, COLS);
    for(i=0; i<LIGNES; i++)
    {
        for(j=0; j<COLS; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    /* Saisir les �l�ments de la matrice B */
    printf("Saisir les elements de la matrice B de taille (%d,%d) \n",LIGNES, COLS);
    for(i=0; i<LIGNES; i++)
    {
        for(j=0; j<COLS; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    /*
     * Ajoutez les deux matrices A et B par �l�ment et stockez
      le r�sultat dans la matrice C
     */
    for(i=0; i<LIGNES; i++)
    {
        for(j=0; j<COLS; j++)
        {
            /* Cij = Aij + Bij */
            C[i][j] = A[i][j] + B[i][j];
        }
    }
   /* Afficher le r�sultat */
    printf("\n Affichage de la matrice A \n");
    for(i=0; i<LIGNES; i++)
    {
        for(j=0; j<COLS; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }   /* Afficher le r�sultat */
    printf("\n Affichage de la matrice B \n");
    for(i=0; i<LIGNES; i++)
    {
        for(j=0; j<COLS; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    /* Afficher le r�sultat */
    printf("\nLa somme de A+B = \n");
    for(i=0; i<LIGNES; i++)
    {
        for(j=0; j<COLS; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
