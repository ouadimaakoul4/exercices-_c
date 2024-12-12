#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k =0;

    printf("donner un entier de 4 a 20");
    scanf("%d",&k);
    for(i=1; i<= k ; i++){
        for(j=1; j<= i; j++){
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}
