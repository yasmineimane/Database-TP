#include "etudiant.h"

/**
 *  searchByL_Name - Funtion that search search for a student by his last name.
 *  @file: file contain list of students.
 *  @l_name: The student last name.
*/

void searchByL_Name(FILE *file, char l_name[])
{
    Etudiant_t etud;
    int found = 0;

    printf("Result is:\n");
    rewind(file);
    while (fscanf(file, "%s %s %d %f\n", etud.nom, etud.prenom, &etud.groupe, 
    &etud.moyenne) != EOF)
    {
        if (strcmp(etud.nom, l_name) == 0)
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