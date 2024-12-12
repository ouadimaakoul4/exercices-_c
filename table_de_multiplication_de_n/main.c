#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n ;
    printf("enter svp le nombre pour afficher sa table de multiplication\n");
    scanf("%d",&n);
    for(i=0 ; i<=10 ; i++){
        printf("%d * %d = %d \n", n, i , n*i);
    }
    return 0;
}
