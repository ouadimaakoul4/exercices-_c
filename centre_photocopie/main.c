#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
int nbr_papier;
float prix;


printf("entrer svp le nombre de photocopies :\n");
scanf("%d",&nbr_papier);
return NewFunction(nbr_papier);
                  
            prix = nbr_papier*0.10 ;

    printf("le prix total est : %.2f  DH",prix);
   return 0;
}

int NewFunction(int nbr_papier)
{
    if(nbr_papier<= 10)
}
