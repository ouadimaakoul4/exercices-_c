/*
Écrire un programme  permettant de  calculer
la somme   S=1+2+3+...+ N,  où N saisi par l’utilisateur.
  Utilisant la  boucle while.

Algorithme Somme_de_1_jusqu'au_N

Variables i,S,N: entiers
Debut
     i  ← 1     S  ← 0
  Ecrire("Donner un entier:")
  Lire (N)
   TantQue ( i <= N  ) faire
      S ← S + i
	  i ← i + 1
   FinTantQue
   Ecrire("La somme de 1 à N est:",S)
fin
*/


#include <stdio.h>
#include <stdlib.h>

        int main(){
            int i=1 , S=0 ,N;
               printf("donner un entier :");
               scanf ("%d",&N);
               while ( i <= N  ) {
                    S = S+i;
                    i++ ;
               }
            printf("la somme de 1 a %d est: %d\n",N,S);


    return 0;
}
