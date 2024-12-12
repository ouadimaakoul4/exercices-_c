#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, r = 0;
    printf("entrer un entier");
    scanf("%d",&n);

    while(n>0){
        r = r * 10;
        r = r + n% 10 ;
        n = n/10 ;
    }
    printf("%d",r);
    return 0;
}
