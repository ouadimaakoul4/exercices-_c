#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mois = 0;
    printf("entrer un numero qui correspond a un mois \n");
    scanf("%d",&mois);

        switch(mois){
            case 1 :  printf("le 1 corespond au mois  : janvier"); break ;
            case 2 :  printf("le 2 corespond au mois :fevrier"); break ;
            case 3 :  printf("le 3 corespond au mois  :Mars"); break ;
            case 4 :  printf("le 4 corespond au mois  :avril"); break ;
            case 5 :  printf("le 5 corespond au mois  :mai"); break ;
            case 6 :  printf("le 6 corespond au mois  :juin"); break ;
            case 7 :  printf("le 7 corespond au mois  :juillet"); break ;
            case 8 :  printf("le 8 corespond au mois  :aout"); break ;
            case 9 :  printf("le 9 corespond au mois  :septembre"); break ;
            case 10 :  printf("le 10 corespond au mois  :octobre"); break ;
            case 11 :  printf("le 11 corespond au mois  :novembre"); break ;
            case 12 :  printf("le 12 corespond au mois  :decembre"); break ;

            default :   printf("le numero ne correspond a aucun mois \n"); break ;
        }
    return 0;
}
