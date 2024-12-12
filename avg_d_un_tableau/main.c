#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i ;
  float tableau[5];
  float somme =0 ;

  for(i=0; i<5; i++){
        printf("remplisser le tableau avec  les 5 notes\n");
        scanf("%f",&tableau[i]);
  }
  for(i=0; i<5; i++){
        somme = somme + tableau[i];
            }
 for(i=0; i<5; i++){
        printf("la %d note est : %.2f \n",i+1,tableau[i]);
  }
    printf("la moyenne des notes est %.2f \n", somme/5);
    return 0;
}
