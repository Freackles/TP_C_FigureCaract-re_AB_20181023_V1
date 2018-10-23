#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taille=0;
    char car='a';
    char car2='b';
    int i=0;
    int j=0;

    //demande de saisit

    printf("Saisir la taille de la figure\n");
    printf("Puis saisir le caractère dont sera fait le contour de la figure\n");
    printf("Enfin, saisir le caractère qui remplira le carré\n");
    scanf("%d %c %c", &taille, &car, &car2);
    /*printf("Saisir le caractère de croix\n");
    scanf("%c", &car);*/

    //debut du carré
    for(i=1;i<=taille;i++)
    {
        for(j=1;j<=taille;j++)
        {
            if ((i==1)|(i==taille))
            {
                printf("%c", car);
            }
            else if ((j==1)|(j==taille))
            {
                printf("%c", car);
            }
            else
            {
                printf("%c", car2);
            }
        }
        printf(" \n");
    }

    return 0;
}

