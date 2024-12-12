/*
Écrire un programme en C pour calculer la factorielle d'un nombre
entier saisi par l'utilisateur.
(Remarque: le factoriel de 5, qui s'écrit 5! = 5 × 4 × 3 × 2 × 1).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  long int  nbr,f=1,i;

  printf("Saisir un nombre:");
  scanf("%ld",&nbr);

  for(i=1; i<=nbr; i++){
    f = f * i;
  }

  printf("Le factoriel de %ld est: %ld ",nbr,f);

   return 0;
}
