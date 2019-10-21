#include <stdio.h>//Bibliothèque
#include <stdlib.h>/*#include sont des macros utiliser pendant la compilation par le pré processeur, ces directives signifies qu'a chaque appel
de celle-ci il devra faire référence au fichier ou à la donner décrite dans cette map. La compilation consiste à traduire le programme source
en langage machine en faisant appel à un programme nommer compilateur*/

/*En C, compte tenu de l'existance d'un pré processeur, la compilation comporte 2 étapes. 1e est le traitement par le pré processeur,
il eecute les directives qui le concerne. On les reconnais par le cractère "#". Il produit en résultat un programme source en C pur.

La traduction du langage texte est fournit par le pré processeur en langage machine Le résultat de la compilation est un module ".o" ou obj (objet).
L'édition de lien: le module objet créer par le compilateur n'est pas directement executable. Il lui manque au moins les différentss modules
correspondant aux fonctions prédefinit utiliser par votre programme.
C'est le rôle de l'éditeur de lien de chercher dans la biblio les modules objets nécessaires.
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
    printf("Je vais calculer la racine carree de %lf", NFOIS);//printf vas identifier dans ça chaine si i trouve un format començant par un %

    for (i=0; i<NFOIS;i++)
    {
        printf("Donnez un nombre");
        scanf("%f",&x);//récupration de la saisie d'un type
        if(x<0.0)
            printf("Le nombre %f ne possede pas de racine carree \n", x);
        else
        {
            racx=sqrt(x);
            printf("Le nombre %f à pour racine carree: %f\n",x, racx);
        }
    }

    printf("Travail termine - Au revoir"); // Attention pas d'accent sur la console

    return 0;
}*/

/* Les types de base en C:*/
//Integer:
    short int nA;// Définit le taille en octet de l'encodage choisis. Langage signé = signes des valeure existant. Non signé = négatif non pris en compte.
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

//Caractères
    char cCaractere;
    printf("Taille de a:%d\n", sizeof(cCaractere));



void main()
{
  int i;
    float x;
    float racx;

    printf("Bonjour\n");

    racx=sqrt(x);//Set la variable racine de x
    printf("Je vais calculer la racine carree de %lf", NFOIS);//printf vas identifier dans ça chaine si i trouve un format començant par un %

    for (i=0; i<NFOIS;i++)
    {
        printf("Donnez un nombre");
        scanf("%f",&x);//récupration de la saisie d'un type
        if(x<0.0)
            printf("Le nombre %f ne possede pas de racine carree \n", x);
        else
        {
            racx=sqrt(x);
            printf("Le nombre %f à pour racine carree: %f\n",x, racx);
        }
    }

    printf("Travail termine - Au revoir"); // Attention pas d'accent sur la console
    printf("Nom: %s\n", Nom);
    printf("PI: %f\n", PI);
    printf("CAR: %c\n", CAR);

    //Opérateur
    int nI=0;
    ++nI;
    nI++;
    //%
    // /div
    long double ldblLongDouble=105.8933259635;
    printf ("Val de ldblLongDouble: %", (double)ldblLongDouble);

    //Opérateurs relationnel
       // >, <, <=, >=, != (not égale), == (égale)

    //Opérateur logique
       /* & : ET(test toute les expressions)
         && : ET (test une expression si la 1e est fausse)
         | : OU (test toute les expressions)
         || :  OU(test une espression si la 1e est vraie)
         !: PAS égale

        //Factorisation
        += ajoute une variable à une autre
        -= soustraire à l’expression
        /=
        *= multiplie une variable à gauche par une expression à droite*/

        …
    //Structure Conditions et boucles

        int a=0,b=0, c=0, d=0;
        //Condition
        if(a==b)
    {
        printf("Ils sont égaux\n");
    }
       else
        {
        printf("Ils sont différents\n");
       }

       //Condition avec des opérateurs logiques

       if((a==b) && (a==c))
       {
           printf("ils sont tous égaux\n");
       }
       else
        {
        printf("ils sont différents\n");
       }

       if ((a==b) || (a==c))
       {
           printf("Ils sont égaux\n");
       }
       else
       {
           printf("Ils sont diff\n");
       }

       if ((a==b) || (a==c))
       {
           printf("Ils sont égaux\n");
       }
       else if((a==c) && (a!=d))
       {
           printf("Tout ça...\n");
       }

       //Boucles
#define TAILLE 10
       int i=0;

       const int t=10;

       for(i=0; i<t;i++)
       {
           printf("Bonjour le monde\n");
       }

       //TQ
       i=0;
       while (i<TAILLE)
       {
           printf("Coucou\n");
           i++;
       }

       //FAIRE TQ

       i=0;
       do{
        printf("Eh salut\n");
        i++;
       }
       while(i<TAILLE);

       //Cas alternatif de condition
       int choix=-1;

       printf("Veuillez entrer votre choix\n")
       scanff("%d",&choix);
       switch case(choix)
       {

           0: printf("Quitter\n"); break;
           1:printf("calculer\n"); break;
           2: printf("Jouer\n"); break;
           default: printf("Default\n"); break;
       }

       //test a?b instruction1 : instruction2
       a==b? printf("Egaux"): printf("Diff");


       //Instruction break;
       for(i=0;i<TAILLE;i++)
       {
           printf("Hello world\n");

           if(i==3)
           {
               break;
           }
       }


       //Instruction continue;
       for(i=0;i<TAILLE;i++)
       {
           printf("Hello world\n");

           if(i<3)
           {
               printf("continue\n");
               continue;
           }
       }



}
