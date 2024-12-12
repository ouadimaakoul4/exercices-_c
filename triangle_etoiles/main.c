#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,tab[10],nb_pair=0 ,nb_impair = 0;


for(i=0; i< 10 ; i++){
    printf("donner un entier :");
    scanf("%d",&tab[i]);
}

for(i=0;i<10;i++){
    if(tab[i]%2==0)
        nb_pair++;
    else
        nb_impair++;
}
    printf("********************\n");
    printf("nombres de paires :%d\n",nb_pair);
    printf("********************\n");
    printf("nombres d'impaires :%d\n",nb_impair);
    printf("********************\n");

    return 0;
}
