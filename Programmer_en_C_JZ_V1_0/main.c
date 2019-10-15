#include <stdio.h>//Biblioth�que
#include <stdlib.h>/*#include sont des macros utiliser pendant la compilation par le pr� processeur, ces directives signifies qu'a chaque appel
de celle-ci il devra faire r�f�rence au fichier ou � la donner d�crite dans cette map. La compilation consiste � traduire le programme source
en langage machine en faisant appel � un programme nommer compilateur*/

/*En C, compte tenu de l'existance d'un pr� processeur, la compilation comporte 2 �tapes. 1e est le traitement par le pr� processeur,
il eecute les directives qui le concerne. On les reconnais par le cract�re "#". Il produit en r�sultat un programme source en C pur.

La traduction du langage texte est fournit par le pr� processeur en langage machine Le r�sultat de la compilation est un module ".o" ou obj (objet).
L'�dition de lien: le module objet cr�er par le compilateur n'est pas directement executable. Il lui manque au moins les diff�rentss modules
correspondant aux fonctions pr�definit utiliser par votre programme.
C'est le r�le de l'�diteur de lien de chercher dans la biblio les modules objets n�cessaires.
Le programme executable est un ensemble autonome d'instructions en langage machine*/
#include <math.h>

#define NFOIS 5//Constantes
#define PI 3.14
#define Nom "Jojo"
#define CAR 'x'

//Commentaires ligne
/* comment aire paragraphes*/

/*int main()
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
}*/

/* Les types de base en C:*/
//Integer:
    short int nA;// D�finit le taille en octet de l'encodage choisis. Langage sign� = signes des valeure existant. Non sign� = n�gatif non pris en compte.
    int nB;
    long int nC;

    const int cnT=10;

    volatile int nVolB;

    static int nStatB;

    printf("Taille de a: %d\n", sizeof(nA));
    printf("Taille de a: %d\n", sizeof(nB));
    printf("Taille de a: %d\n", sizeof(nC));


//Real
    float fltReelSimple;
    double dblReelDouble;

    printf("Taille de a:%d\n", sizeof(fltReelSimple));
    printf("Taille de a:%d\n", sizeof(fltReelDouble));

//Caract�res
    char cCaractere;
    printf("Taille de a:%d\n", sizeof(cCaractere));



void main()
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
    printf("Nom: %s\n", Nom);
    printf("PI: %f\n", PI);
    printf("CAR: %c\n", CAR);

    //Op�rateur
    int nI=0;
    ++nI;
    nI++;
    //%
    // /div
    long double ldblLongDouble=105.8933259635;
    printf ("Val de ldblLongDouble: %", (double)ldblLongDouble);

    //Op�rateurs relationnel
       // >, <, <=, >=, != (not �gale), == (�gale)

    //Op�rateur logique
       /* & : ET(test toute les expressions)
         && : ET (test une expression si la 1e est fausse)
         | : OU (test toute les expressions)
         || :  OU(test une espression si la 1e est vraie)
         !:

        //Factorisation
        += ajoute une variable � une autre
        -= soustraire � l�expression
        /=
        *= multiplie une variable � gauche par une expression � droite*/
        �


}
