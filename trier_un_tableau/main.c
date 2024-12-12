#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,aux ;
    int tableau[5];

    for(i=0; i<5 ; i++){

        printf("entrer svp un entier \n");
        scanf("%d",&tableau[i]);

    }

    for(i=0; i<4 ; i++){
        for(j=i+1; j<5 ; j++){

            if(tableau[j]>tableau[i]){
                aux = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = aux ;

            }
        }
    }

    for(i=0; i<5 ; i++){

        printf("%d \t",tableau[i]);
    }

        return 0;
}
