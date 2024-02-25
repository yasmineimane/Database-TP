#include "etudiant.h"

/**
 *  suprimerEtudiant - Function that delete an etudiant.
 *  @file: file contain lsit of etudiant.
 *  @nom: Etudiant name.
 *  @prenom: Tdisint last name.
 *  @groupe: the groupe of the etudiant.
 *  @moyenne: moyenne d'etudiant.
*/

void supprimerEtudiant(FILE *file, char nom[], char prenom[], int groupe, float moyenne)
{
    FILE *tmp = fopen("tmp.txt", "w");
    Etudiant_t etudiant;
    int found = 0;

    if (tmp == 0)
    {
        printf("Error lors de la suppression.\n");
        return;
    }

    rewind(file);
    while (fscanf(file, "%s %s %d %f\n", etudiant.nom, etudiant.prenom, 
    &etudiant.groupe, &etudiant.moyenne) != EOF)
    {
        if (strcmp(etudiant.nom, nom) != 0 || strcmp(etudiant.prenom, prenom) != 0
        || etudiant.groupe != groupe || etudiant.moyenne != moyenne)
        {
            fprintf(tmp, "%s %s %d %.2f\n", etudiant.nom, etudiant.prenom, 
            etudiant.groupe, etudiant.moyenne);
        }
        else
        {
            found = 1;
        }
    }
    fclose(file);
    fclose(tmp);
    remove("etudiants.txt");
    rename("tmp.txt", "etudiants.txt");
    if (found)
        printf("Etudiant was deleted succesfuly.\n");
    else
        printf("Can't find this student.\n");

    file = fopen("etudiants.txt", "a+");
}