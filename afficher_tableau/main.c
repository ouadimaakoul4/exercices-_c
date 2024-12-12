#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j=0;
    int k=0;
    int t[10] , t1[10] ,t2[10];

    for(i=0; i<10;i++){
        printf("entrer un entier");
        scanf("%d", &t[i]);
    }
    for(i=0; i<10;i++){
        if(t[i]%2==0){
            t1[j]= t[i];
            j++;
        }else{
            t2[k] =t[i];
            k++;
            }
                    }
        printf("les elements pairs du tableau T1[..] sont : ");

      for(i=0; i<j;i++){
        printf("[");
        printf("%d",t1[i]);
        printf("]");
        printf(" ");
                        }

        printf("\n");
        printf("les elements impairs du tableau T2[..] sont: ");

      for(i=0; i<k;i++){
        printf("[");
        printf("%d",t2[i]);
        printf("]");
        printf(" ");
                        }

    return 0;
}
