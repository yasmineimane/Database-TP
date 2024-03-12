#include "etudiant.h"

/**
 *  rechercherEtudiant - Function that search for an etudiant.
 *  @file: a file cotain etudints.
 *  
*/

void rechercherEtudiant(FILE *file, int choice)
{
    Etudiant_t etud;
    int i = 0;

    switch (choice)
    {
    case 1:
        printf("Enter the name of the student: ");
        scanf("%s", &etud.nom);
        searchByName(file, etud.nom);
        break;

    case 2:
        printf("Enter the last name of tha student: ");
        scanf("%s", &etud.prenom);
        searchByL_Name(file, etud.prenom);
        break;

    case 3:
        printf("Enter the group of the student: ");
        scanf("%d", &etud.groupe);
        searchByGrp(file, etud.groupe);
        break;

    case 4:
        printf("Enter the moyenne of the student: ");
        scanf("%f", &etud.moyenne);
        searchByMoyen(file, etud.moyenne);
        break;
    
    default:
        printf("Choice invalid.\n");
        break;
    }
}