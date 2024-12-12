#include <stdio.h>
#include <stdlib.h>
int add(int a,int b );
int mins(int a , int b);
int mult(int a , int b) ;
float divis( float a , float b);
int main()
{
int a,b ;
printf("entrer svp le premier nombre :");
scanf("%d",&a);

printf("entrer svp le deuxieme nombre :");
scanf("%d",&b);

printf("la valeur de a + b est : %d \n", add(a,b));
printf("la valeur de a - b est : %d \n", mins(a,b));
printf("la valeur de a * b est : %d \n", mult(a,b));
printf("la valeur de a / b est : %.2f \n", divis(a,b));

    return 0;
}
int add(int a,int b ){
   return a+b ;
}
int mins(int a , int b){
    return a-b;
}
int mult(int a , int b){
    return a* b ;
}
float divis( float a , float b){
    return a/b ;
}
