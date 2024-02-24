#include "etudiant.h"

/**
 *  ajouterEtudiant - Function that adds an Etudiant to a given file.
 *  @file: A given file to be add in.
*/

void ajouterEtudiant(FILE *file)
{
    Etudiant_t etudiant;

    printf("Nom: ");
    scanf("%s", etudiant.nom);
    printf("Prenom: ");
    scanf("%s", etudiant.prenom);
    printf("Groupe: ");
    scanf("%d", &etudiant.groupe);
    printf("Moyenne: ");
    scanf("%f", &etudiant.moyenne);

    fprintf(file, "%s %s %d %.2f\n", etudiant.nom, etudiant.prenom,
    etudiant.groupe, etudiant.moyenne);
}