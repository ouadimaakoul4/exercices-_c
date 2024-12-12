#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0 ;
    int  n = 0 ;
    printf("entrer svp le nombre pour afficher sa table de multiplication \n");
    scanf("%d",&n);

    while(i <=10 ){
    printf("* %d x %d = %d \n",n,i, n*i );
    i++;
    }
    return 0;
}
