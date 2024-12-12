#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, N ;

    do{

        printf("entrer un entier");
        scanf("%d",&N);

        if(N==5)
            i = i +1 ;

    }while(N != 0);

    if(i != 0)
        printf("5 existe %d fois",i);
    else
        printf("5 n existe pas ");
    return 0;
}
