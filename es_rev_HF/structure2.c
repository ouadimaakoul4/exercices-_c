#include <stdio.h> 
#include <string.h> 

struct Livre { 
        char titre[100]; 
        char auteur[50]; 
        int anneePublication; 
        int nbPages; 
}; 
void afficherLivre(struct Livre livre) { 
        printf("Titre : %s\n", livre.titre); 
        printf("Auteur : %s\n", livre.auteur); 
        printf("Année de publication : %d\n", livre.anneePublication); 
        printf("Nombre de pages : %d\n\n", livre.nbPages); 
} 
int main() { 

struct Livre livre1 = {"livre1", "Auteur1", 2000, 96}; 
struct Livre livre2 = {"1984", "nassiri", 1949, 328}; 

afficherLivre(livre1); 
afficherLivre(livre2); 

return 0; 
} 