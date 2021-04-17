#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{
    int nombreMystere = 41 , nombreEntre = 0, coup = 0, continuerPartie = 1, choixMenu = 0, choixNiveau = 0;
    int nombreMaximum;
    const int MIN = 1;
 
 
    printf("\n\n -- JEUX DU PLUS OU MOINS --\n\n");

   // choix du niveau de difficulté
        printf("\n\n -- NIVEAU DE DIFFICULTE --\n\n");
        printf("1. Entre 1 et 100\n");
        printf("2. Entre 1 et 1000\n");
        printf("3. entre 1 et 10000\n");

    do
    {   
        scanf("%d", &choixNiveau);
    
 
         // la condition du choix de niveau
        if(choixNiveau == 1)
        {
            printf("\nBienvenue au niveau 1\n");
            nombreMaximum = 100;
        }
 
        else if(choixNiveau == 2)
        {
            printf("\nBienvenue au niveau 2\n");
            nombreMaximum = 1000;
        }

        else if(choixNiveau == 3)
        {
            printf("\nBienvenue au niveau 3\n");
            nombreMaximum = 10000;
        }

        else 
        {
            printf("je n'ai pas compris, recommence\n");
        }
    }while(choixNiveau > 3);

 
   printf("-- CHOIX MENU --\n\n");
    printf("1. Mode 1 joueur\n");
    printf("2. Mode 2 joueur\n");
    scanf("%d", &choixMenu);
 
    for(int i = 0; continuerPartie ==1; i++)
    {
 
        if(choixMenu == 1)
        {
            // nombre mystere choisi par l'ordi aleatoirement
            srand(time(NULL));
            nombreMystere = (rand() % (nombreMaximum - MIN + 1)) + MIN;
    }
 
    if(choixMenu == 2)
    {
        printf("Joueur 1 , entre le nombre mystere\n");
        scanf("%d", &nombreMystere);
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nJoueur 2, ");
    /* comme je ne sais pas encore cacher ce que l'utlisateur ecrit ou faire comme sur un terminale un test&clear, je met
    plein de retour a la ligne pour pas que le joeur 2 voit ce que joeur un a ecrit. */
    }
 
    while(nombreMystere != nombreEntre)
    {
        printf("Entrez le nombre mystere\n");
        scanf("%d", &nombreEntre);
        coup++;
        printf("%d coup\n", coup);
 
 
        if(nombreMystere > nombreEntre)
        {
            printf("c'est PLUS !\n");
        }
        else if(nombreMystere < nombreEntre)
        {
            printf("c'est MOINS !\n");
        }
        else
        {
            printf("\n\n\nBravo vous avez trouve le nombre mystere en %d coups\n", coup);
        }
    }
    printf("une autre partie ?\n");
    printf("1. Oui\n");
    printf("ou\n");
    printf("Appuyer sur tout autre chiffre pour quitter\n");
    scanf("%d", &continuerPartie);
 
    }
 
 
 
    return 0;
}
