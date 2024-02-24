#include "etudiant.h"

/**
 *  rechercherEtudiant - Function that search for an etudiant.
 *  @file: a file cotain etudints.
 *  
*/

void rechercherEtudiant(FILE *file, int choice)
{
    Etudiant_t etudiant;
    char name[MAX_NAME_SIZE]; 
    char prenom[MAX_NAME_SIZE];
    int groupe;
    float moyenne;
    int nbrStud;
    int i = 0;

    switch (choice)
    {
    case 1:
        printf("Enter the name of the student: ");
        scanf("%s", &name);
        searchByName(file, name);
        break;

    case 2:
        printf("Enter the last name of tha student: ");
        scanf("%s", &prenom);
        searchByL_Name(file, prenom);
        break;

    case 3:
        printf("Enter the group of the student: ");
        scanf("%d", &groupe);
        searchByGrp(file, groupe);
        break;

    case 4:
        printf("Enter the moyenne of the student: ");
        scanf("%f", &moyenne);
        searchByMoyen(file, moyenne);
        break;
    
    default:
        printf("Choice invalid.\n");
        break;
    }
}