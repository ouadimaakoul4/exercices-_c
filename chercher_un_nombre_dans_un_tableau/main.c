#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tableau[5];
    int i;
    float numero_cherche;
    int indice_numero;

    for(i=0 ; i<5 ; i++){
        printf("entrer svp les 5 nombres du tableau");
        scanf("%f",&tableau[i]);
    }

     printf("entrer svp le nombre a chercher \n");
     scanf("%f",&numero_cherche);

     for(i=0; i<5 ; i++){
        if(tableau[i] == numero_cherche ){
            indice_numero = i+1 ;
            break;
        }
     }
    printf("le nombre a chercher %f se trouve en %d place!\n",numero_cherche,indice_numero);
    return 0;
}
