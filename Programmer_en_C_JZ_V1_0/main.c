#include <stdio.h>//Biblioth�que
#include <stdlib.h>
#include <math.h>

#define NFOIS 5//Constantes

int main()
{
    int i;
    float x;
    float racx;

    printf("Bonjour\n");

    racx=sqrt(x);//Set la variable racine de x
    printf("Je vais calculer la racine carree de %lf", NFOIS);//printf vas identifier dans �a chaine si i trouve un format comen�ant par un %

    for (i=0; i<NFOIS;i++)
    {
        printf("Donnez un nombre");
        scanf("%f",&x);//r�cupration de la saisie d'un type
        if(x<0.0)
            printf("Le nombre %f ne possede pas de racine carree \n", x);
        else
        {
            racx=sqrt(x);
            printf("Le nombre %f � pour racine carree: %f\n",x, racx);
        }
    }

    printf("Travail termine - Au revoir"); // Attention pas d'accent sur la console

    return 0;
}
