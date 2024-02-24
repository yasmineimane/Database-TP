#include "etudiant.h"

/**
 *  afficherEtudiant - Function that display all the etudiants in a file.
 *  @file: The file.
*/

void afficherEtudiant(FILE *file)
{
    Etudiant_t etudiant;

    printf("Liste des etudiants:\n");
    rewind(file);
    while (fscanf(file, "%s %s %d %f\n", etudiant.nom, etudiant.prenom,
    &etudiant.groupe, &etudiant.moyenne) != EOF)
    {
        printf("\tNom: %s, Prenom: %s, Groupe: %d, Moyenne: %.2f\n", etudiant.nom,
        etudiant.prenom,etudiant.groupe, etudiant.moyenne);
    }
}