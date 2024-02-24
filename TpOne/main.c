#include "etudiant.h"

/**
 *  main - main function.
*/

int main()
{
    FILE *file;
    int choice, choix;
    Etudiant_t etud;

    file = fopen("etudiants.txt", "a+");
    if (file == NULL)
    {
        printf("Erreur l'ors de l'ouverture du fichier.\n");
        return 1;
    }

    do
    {
        printf("\n\t\t**** Menu ****\n");
        printf("\t1.Ajouter un etudiant\n");
        printf("\t2.Afficher tous les etudiants\n");
        printf("\t3.Rechercher un etudiant\n");
        printf("\t4.Trier les etudiants par leur moyenne\n");
        printf("\t5.Supprimer un etudiant\n");
        printf("\t0.Quitter\n");
        printf("\tChoice>>  ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            ajouterEtudiant(file);
            break;
        
        case 2:
            afficherEtudiant(file);
            break;

        case 3:
            printf("\n\t\t**** Search Menu ****\n");
            printf("\t1.Search by name\n");
            printf("\t2.Search by last name\n");
            printf("\t3.Search by group\n");
            printf("\t4.Search by moyenne\n");
            printf("\tChoice>>  ");
            scanf("%d", &choix);
            rechercherEtudiant(file, choix);
            break;

        case 4:
            trierEtudiant(file);
            break;
        
        case 5:
            printf("Entrer les informations de l'etudiant a suprimer:\n");
            printf("Nom: ");
            scanf("%s", etud.nom);
            printf("Prenom: ");
            scanf("%s", etud.prenom);
            printf("Groupe: ");
            scanf("%d", &etud.groupe);
            printf("Moyenne: ");
            scanf("%f", &etud.moyenne);
            supprimerEtudiant(file, etud.nom, etud.prenom, etud.groupe, etud.moyenne);
            break;
        
        case 0:
            printf("Programme termine.\n");
            break;

        default:
            printf("Choice invalide.\n");
            break;
        }
    } while (choice != 0);
    fclose(file);

    return 0;
}