#include <stdio.h>
#include <string.h>

#define NB_ETUDIANTS 5
#define TAILLE_MAX 50

int main() {
   
    char noms[NB_ETUDIANTS][TAILLE_MAX] = {"Dupont", "Martin", "Nguyen", "Durand", "Kouassi"};
    char prenoms[NB_ETUDIANTS][TAILLE_MAX] = {"Alice", "Jean", "Linh", "Claire", "Amadou"};
    char adresses[NB_ETUDIANTS][TAILLE_MAX] = {
        "10 rue des Lilas",
        "25 avenue de Paris",
        "3 boulevard Haussmann",
        "12 rue Victor Hugo",
        "7 place de la République"
    };

   
    float notes_prog[NB_ETUDIANTS] = {14.5, 12.0, 17.0, 13.5, 15.0};
    float notes_sys[NB_ETUDIANTS]  = {13.0, 11.5, 16.5, 14.0, 15.5};


    printf("===== Informations des Étudiant.e.s =====\n\n");

    for (int i = 0; i < NB_ETUDIANTS; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note en Programmation C : %.2f\n", notes_prog[i]);
        printf("Note en Système d'exploitation : %.2f\n", notes_sys[i]);
        printf("----------------------------------------\n");
    }

    return 0;
}
