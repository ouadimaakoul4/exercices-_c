/*
Ecrivez un programme C pour créer une pyramide avec des étoiles.
En utilisant la boucle 'for'.

Exemple de sortie:

Entrer le nombre de lignes: 4
   *
  * *
 * * *
* * * *
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
       int i, j, espace, n, k, t = 1;
   printf("Entrer le nombre de lignes:");
   scanf("%d", &n);
   espace = n ; // Calculer le nombre initial d'espaces
   for (i = 1; i <= n; i++) {
      for (k = espace; k >= 1; k--) {
         printf(" ");
      }
      for (j = 1; j <= i; j++) {
         printf("* ");
      }
      printf("\n");
      espace--;
   }
    return 0;
}
