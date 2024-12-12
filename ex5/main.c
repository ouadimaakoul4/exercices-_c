
/*
Écrivez un programme C qui accepte le nombre total d'heures
travaillées au cours d'un mois et le montant que l'employé a reçu par heure.
 Affichez le salaire (avec deux décimales) de l'employé pour un mois donné.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int heures;
    double sph, salaire;

    printf("Saisir les heures de travail: ");
    scanf("%d", &heures);

    printf("Montant du salaire/heure: ");
    scanf("%lf", &sph);

    salaire = sph * heures;
    printf("Salaire = %.2lf DH\n", salaire);

    return 0;
}
