#include "etudiant.h"

/**
 *  searchByName - Function that search for a student by his name.
 *  @file: file that contain the list of students.
 *  @name: the student name.
*/

void searchByName(FILE *file, char name[])
{
    Etudiant_t etud;
    int found = 0;

    printf("Result is:\n");
    rewind(file);
    while (fscanf(file, "%s %s %d %f\n", etud.nom, etud.prenom, &etud.groupe, 
    &etud.moyenne) != EOF)
    {
        if (strcmp(etud.prenom, name) == 0)
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