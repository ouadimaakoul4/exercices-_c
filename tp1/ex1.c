#include <stdio.h>
int main(){
    int tableau [5];
    for(int i=0;i<5;i++){
        printf("donnez la valeur de la case %d :",i+1);
        scanf("%d",&tableau[i]);
    }
    printf("les valeur du tableau sont: \n");
    for(int i=0;i<5;i++){
        printf("%d\n",tableau[i]);
    }
    return 0;
}