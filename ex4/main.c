/*
Écrire un programme en C permettant de saisir 10 entiers
 et qui affiche le maximum de ces entiers.

 Algorithme Max_Notes
Variables i,max,Tab[10]:réels
   Ecrire("Entrer un entier:")
   Lire(Tab[0])        Max ← Tab[0]

   pour i de 1 jusqu'à  10 faire
      Ecrire("Entrer un entier:")
	  Lire(Tab[i])
	    Si ( Tab[i] > Max ) alors
	      Max ← Tab[i]
		FinSi
   FinPour
   Ecrire("Le maximum est:%d",Max)
Fin

*/

#include <stdio.h>
#include <stdlib.h>
int main(){

        int Tab[10],Max,i;

           printf("Entrer un entier:");
           scanf("%d",&Tab[0]);   Max = Tab[0] ;

         for( i=1; i < 10; i++){
              printf("Entrer un entier:");
              scanf("%d",&Tab[i]);
              if ( Tab[i] > Max )
                  Max = Tab[i] ;
            }

          printf("Le maximum est:%d",Max);

    return 0;
}
