#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int tableau[10];

    for(i=0 ; i< 10 ; i++){

        printf("entrer svp un nobre pour le stoker\n");
        scanf("%d",&tableau[i]);
    }

    for(i=0 ; i< 10; i++){
        printf(" la %d valeure est : %d \n",i+1, tableau[i]);
    }

    return 0;
}
