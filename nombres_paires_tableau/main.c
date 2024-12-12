#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int n;

    printf("donner svp le nombre pour afficher les paires entre lui et 0\n");
    scanf("%d",&n);

    for(i=0; i<= n ; i++){
        if(i%2==0)
                printf("%d \n",i);
    }
    return 0;
}
