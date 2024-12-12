#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,n,m,div_commun;

    printf("donner le premier  entier :");
    scanf("%d",&n) ;

    printf("donner le deuxieme  entier :");
    scanf("%d",&m) ;

    while( i<= n && i<= m){
        if( n%i == 0 && m%i == 0){
            div_commun = i ;
        }
      i++;
    }
    printf("PGCD(%d,%d) = %d",m,n,div_commun);

    return 0;
}
