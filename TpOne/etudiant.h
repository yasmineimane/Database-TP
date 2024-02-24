#ifndef ETUDIANT_H
#define ETUDIANT_H

#define MAX_NAME_SIZE   50
#define MAX_ETUDIANT    100

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *  struct Etudiant_s - Etudiant data structure.
 *  @nom: Etudiant first name.
 *  @prenom: Etudiant last name.
 *  @groupe: Etudiant groupe.
 *  @moyenne: Etudiant moyenne.
*/

typedef struct Etudiant_s
{
    char nom[MAX_NAME_SIZE];
    char prenom[MAX_NAME_SIZE];
    int groupe;
    float moyenne;
} Etudiant_t;

void ajouterEtudiant(FILE *file);
void afficherEtudiant(FILE *file);
void rechercherEtudiant(FILE *file, int choice);
void searchByName(FILE *file, char name[]);
void searchByL_Name(FILE *file, char l_name[]);
void searchByGrp(FILE *file, int grp);
void searchByMoyen(FILE *file, float m);
void trierEtudiant(FILE *file);
void supprimerEtudiant(FILE *file, char nom[], char prenom[], int groupe, float moyenne);

#endif