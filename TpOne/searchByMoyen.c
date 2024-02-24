#include "etudiant.h"

/**
 *  searchByMoyen - Function that search for a student by his moyen.
 *  @file: file contains list of studens.
 *  @m: The student moyen.
*/

void searchByMoyen(FILE *file, float m)
{
    Etudiant_t etud;
    int found = 0;

    printf("Result is:\n");
    rewind(file);
    while (fscanf(file, "%s %s %d %f\n", etud.nom, etud.prenom, &etud.groupe, 
    &etud.moyenne) != EOF)
    {
        if (etud.moyenne == m)
        {
            printf("\t%s %s Groupe %d Moyenne %.2f\n", etud.nom, etud.prenom, 
            etud.groupe, etud.moyenne);
            found = 1;
        }
    }

    if (!found)
    {
        printf("\tAucun etudiant.\n");
    }
}