/*
Écrire un programme  qui permet d'afficher
la table de multiplication de 5. Utilisant la boucle For.

/////////////////////////
algo
////////////////////////

Algorithme Table_Multiplication_de_5
Variables i:entier
Debut
   pour i de 0 jusqu'à 10 faire
      Ecrire("5*",i,"=",i*5)
   FinPour
Fin
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

   for (i=0; i<=10 ; i++){
     printf ("5 x %d = %d \n",i,i*5);
   }
    return 0;
}
