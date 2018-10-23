#include <stdio.h>
#include <stdlib.h>

#define VIDE ' '

int main()
{
    int taille=0;
    char car='a';
    int i=0;
    int j=0;

    //demande de saisit
    printf("Saisir la taille de la figure\n");
    printf("Puis saisir la caractère dont sera fait la figure\n");
    scanf("%d %c", &taille, &car);
    /*printf("Saisir le caractère de croix\n");
    scanf("%c", &car);*/

    //debut du croix
    for(i=1;i<=taille;i++)
    {
        for(j=1;j<=taille;j++)
        {
            if ((i==j)|(j==taille-i+1))
            {
                printf("%c", car);
            }
            else
            {
                printf("%c", VIDE);
            }

        }
        printf(" \n");
    }

    return 0;
}
