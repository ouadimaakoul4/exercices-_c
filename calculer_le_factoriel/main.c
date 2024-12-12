#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int n;
    int f = 1;


    printf("enter a number please\n");
    scanf("%d",&n);

    for(i=1 ; i<=n ; i++){
        f = f*i ;
    }

    printf("the factorial of %d is : %d \n",n,f);

    return 0;
}
