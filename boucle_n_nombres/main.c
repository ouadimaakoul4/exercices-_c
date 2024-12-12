/*
Écrire un programme en C pour afficher n éléments du nombre naturel et leur somme.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, s=0;
    printf("Entree le nombre des elements:");

    scanf("%d", &n);
    printf("\nLes %d premiers entiers naturels sont:\n", n);

    for (i = 1; i <= n; i++) {

        printf("%d ", i);
        s += i;
    }
    printf("\nLa somme des nombres naturels jusqu'a %d termes est %d.", n, s);
    return 0;
}
