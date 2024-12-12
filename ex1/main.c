/*

�crire un programme  qui demande l'�ge d'un enfant et permet d'informer
de sa cat�gorie sachant que les cat�gories sont les suivantes:
"poussin de 6 a 7 ans"
"pupille de 8 a 9 ans "
"minime de 10 a 11 ans "
" cadet apr�s 12 ans ".
********************************  En Algorithme *************************************
                                                                                                                                                                                Algorithme
                    Variables age :r�el
                    Debut
                       Ecrire("Entrer votre age :")
                       Lire(age)

                        Si( age >= 5  et  age <= 7) alors
                          Ecrire(" Vous etes poussin ")
                        FinSi
                        Si( age >= 8  et  age <= 9 ) alors
                           Ecrire(" Vous etes pupille ")
                        FinSi
                        Si( age >= 10  et  age <= 11) alors
                           Ecrire(" Vous etes minime ")
                        FinSi
                        Si ( age >= 12 ) alors
                           Ecrire(" Vous etes Cadet ")
                        FinSi
                    Fin
**************************************************************************************
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float age;
        printf(" Entrer votre age :");
        scanf("%f",&age);

          if( age >= 6  &&  age <= 7)
          printf(" Vous etes poussin ");
          if( age >= 8  &&  age <= 9 )
          printf(" Vous etes pupille ");

          if( age >= 10  &&  age <= 11)
          printf(" Vous etes minime ");

          if( age >= 12 )
          printf(" Vous etes caddette ");



    return 0;
}
