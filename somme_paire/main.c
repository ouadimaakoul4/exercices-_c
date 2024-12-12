#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("entrer svp un entier :");
    scanf("%d",&n);

    for(i=0; i<= n ; i++){
        if(i%2==0){
            printf("%d est un nombre paire .\n",i);
        }

    }

    return 0;
}
