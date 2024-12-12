#include <stdio.h>
int main() {
float Prix_HT , Prix_TTC ;
printf(" Entrer le montant HT:");
scanf("%f", &Prix_HT);
Prix_TTC = Prix_HT + Prix_HT*0.2 ;
  if ( Prix_TTC > 200 ) {
     Prix_TTC = Prix_TTC - Prix_TTC*0.15;
     printf("le montant TTC est: %f ",Prix_TTC);
  }else{
    printf("le montant TTC est: %f ", Prix_TTC);
  }
return 0;
}
