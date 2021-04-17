#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{
    int nombreMystere = 41 , nombreEntre = 0, coup = 0, continuerPartie = 1, choixMenu = 0, choixNiveau = 0;
    int nombreMaximum;
    const int MIN = 1;
 
 
printf("\n\n -- JEUX DU PLUS OU MOINS --\n\n");
 
 
printf("\n\n -- NIVEAU DE DIFFICULTE --\n\n");
printf("1. Entre 1 et 100\n");
printf("2. Entre 1 et 1000\n");
printf("3. entre 1 et 10000\n");
scanf("%d", &choixNiveau);
 
if(choixNiveau == 1)
{
    printf("\nBienvenue au niveau 1\n");
    nombreMaximum = 100;
}
 
if(choixNiveau == 2)
{
    printf("\nBienvenue au niveau 2\n");
    nombreMaximum = 1000;
}
if(choixNiveau == 3)
{
    printf("\nBienvenue au niveau 3\n");
    nombreMaximum = 10000;
}
 
 
printf(" -- CHOIX MENU --\n\n");
printf("\n1. Mode 1 joueur\n");
printf("\n2. Mode 2 joueur\n");
scanf("%d", &choixMenu);
 
for(int i = 0; continuerPartie ==1; i++)
{
 
if(choixMenu == 1)
{
 
 
    srand(time(NULL));
    nombreMystere = (rand() % (nombreMaximum - MIN + 1)) + MIN;
 
}
 
if(choixMenu == 2)
{
 
    printf("Joueur 1, entre le nombre mystere\n");
    scanf("%d", &nombreMystere);
    printf("Joueur 2, ");
 
 
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
            printf("C'est MOINS !\n");
        }
        else
        {
            printf("Bien joue vous avez trouve le nombre mystere en %d coups\n", coup);
        }
    }
    printf("Une autre partie ?\n");
    printf("1. Oui\n");
    printf("ou\n");
    printf("Appuyer sur tout autre chiffre pour quitter\n");
    scanf("%d", &continuerPartie);
 
}
 
 
 
    return 0;
}
