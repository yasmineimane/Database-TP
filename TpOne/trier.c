#include "etudiant.h"

/**
 *  trierEtudiant - Function that sort etudiants.
 *  @file: file contains etudiants.
*/

void trierEtudiant(FILE *file)
{
    Etudiant_t etudiant[MAX_ETUDIANT];
    int nb_etudiant = 0;
    Etudiant_t tmp;
    FILE *file2;

    file2 = fopen("file2.txt", "a+");
    if (file2 == NULL)
    {
        printf("Error.\n");
        return;
    }

    rewind(file);
    while (fscanf(file, "%s %s %d %f\n", etudiant[nb_etudiant].nom, etudiant[nb_etudiant].prenom,
    &etudiant[nb_etudiant].groupe, &etudiant[nb_etudiant].moyenne) != EOF)
    {
        nb_etudiant++;
    }
    for (int i = 0; i < nb_etudiant - 1; i++)
    {
        for (int j = 0; j < nb_etudiant - i - 1; j++)
        {
            if (etudiant[j].moyenne > etudiant[j + 1].moyenne)
            {
                tmp = etudiant[j];
                etudiant[j] = etudiant[j + 1];
                etudiant[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < nb_etudiant; i++)
    {
        fprintf(file2, "%s %s %d %.2f\n", etudiant[i].nom, etudiant[i].prenom,
        etudiant[i].groupe, etudiant[i].moyenne);
    }
    fclose(file);
    fclose(file2);
    remove("etudiants.txt");
    rename("file2.txt", "etudiants.txt");
    printf("Les etudiants ont ete tries par leur moyenne.\n");
}