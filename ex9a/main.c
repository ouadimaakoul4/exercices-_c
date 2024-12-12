/*
Écrire un programme en C pour afficher une forme de
triangle droit avec un nombre qui s'incrémente de 1.
En utilisant la boucle 'for'.

Exemple de sortie:

Entrer le nombre de lignes: 4
1
2 3
4 5 6
7 8 9 10
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, j, n, k = 1;
    printf("Entrer le nombre de lignes:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++){
            printf("%d ", k++);
        }
        printf("\n");
    }    return 0;
}
