#include <stdio.h>
#include <stdlib.h>

int main()
{
    float age;

    printf("entrer votre age");
    scanf("%f",&age);

    if(age>= 6 && age <= 7)
            printf("vous etes poussin");
    if(age>=8 && age <= 9)
            printf("vous etes pupile");
    if(age>=10 && age <= 11)
            printf("vous etes minime");
    if(age>= 12)
            printf("vous etes cadet");
    return 0;
}
