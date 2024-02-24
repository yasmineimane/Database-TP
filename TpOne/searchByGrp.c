#include "etudiant.h"

/**
 * searchByGrp - Function that search for a student by his group.
 *  @file: file contains list of students.
 *  @grp: The student group.
*/

void searchByGrp(FILE *file, int grp)
{
    Etudiant_t etud;
    int found = 0;

    printf("Result is:\n");
    rewind(file);
    while (fscanf(file, "%s %s %d %f\n", etud.nom, etud.prenom, &etud.groupe, 
    &etud.moyenne) != EOF)
    {
        if (etud.groupe == grp)
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