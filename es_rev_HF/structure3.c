#include <stdio.h> 
#include <string.h> 
// Structure représentant un contact 
struct Contact { 
        char nom[50]; 
        char prenom[50]; 
        char numero[20]; 
        char email[50]; 
}; 
// Fonction pour ajouter un contact à l'annuaire 
void ajouterContact(struct Contact *annuaire, int index) { 
        printf("Nom : "); 
        scanf("%s", annuaire[index].nom); 
        printf("prenom : "); 
        scanf("%s", annuaire[index].prenom);
        printf("numero : "); 
        scanf("%s", annuaire[index].numero);
        printf("email : "); 
        scanf("%s", annuaire[index].email);
 
} 
// Fonction pour afficher un contact 
void afficherContact(struct Contact contact) { 

        printf("Nom : %s\n", contact.nom); 
        printf("prenom : %s\n", contact.prenom); 
        printf("numero : %s\n", contact.numero); 
        printf("email : %s\n", contact.email); 

} 
int main() { 

struct Contact annuaire[100]; 
int nbContacts = 0; 


ajouterContact(annuaire, nbContacts); 
nbContacts++; 

ajouterContact(annuaire, nbContacts); 
nbContacts++; 

 
for (int i = 0; i < nbContacts; i++) { 
    afficherContact(annuaire[i]); 
} 
return 0; 
} 