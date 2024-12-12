
/*
Écrire un programme en C pour afficher une forme de triangle
droit à l'aide des étoiles. En utilisant la boucle 'for'.

Exemple de sortie:

Entrer le nombre de lignes: 4

*
**
***
****
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, j, n;
    printf("Entrer le nombre de lignes:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }    return 0;
}
