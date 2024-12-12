#include <stdio.h>
int main(){
   float note;
   printf("entrer svp la note \n");
   scanf("%f",&note);

        if (note <0 || note > 20){
                printf("*********\n");
                printf("erreur!!!!\n");
                printf("*********\n");}
        if (note > 0 && note < 10){
                printf("************************\n");
                printf("vous n avez pas valider \n ");
                printf("************************\n");}

        if (note >= 10 && note <= 20){
                printf("*****************************\n");
                printf("vous avez valider votre module \n");
                printf("*****************************\n");}

        return 0;

            }
