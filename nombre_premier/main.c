#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=2;
    int N;
        printf("entrer un entier :");
        scanf("%d",&N);

        while(N%i != 0 && i< N){
            i++;
        }

        if(i==N){
            printf("%d est premier",N);
        }else{
            printf("%d n'est pas premier",N);

            }
    return 0;
}
