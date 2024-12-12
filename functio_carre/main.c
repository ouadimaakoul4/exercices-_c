#include <stdio.h>
#include <stdlib.h>

int carre(int a) {
 return (a*a);
}
int main()
{
 int n, x=0;

 printf("n ? ");
 scanf("%d", &n);

 x = carre(n); // appel

 printf("carre = %d\n", x);

 return 0;
}
