#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ;
    float max ;
    float tableau[5];

    for(i=0 ; i<5 ; i++){
        printf("entrer svp les 5 valeurs a stocker :\n");
        scanf("%f",&tableau[i]);
    }
      max = tableau[0] ;
    for(i=0 ; i<5 ; i++){
        if(tableau[i]>max)
            max = tableau[i];
    }
    printf("le maximum est : %.2f",max);
    return 0;
}
