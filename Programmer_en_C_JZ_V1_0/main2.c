#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAILLE 10
#define MOT "Coucou"

int main()
{
  //Affichage
    printf("%d\n", TAILLE);
     printf("%s\n", MOT);

    //SAISIE
   /* int val;
    scanf("%d",&val);
    fflush(stdin);// vide le buffer de la saisie
    char car;
    scanf("%c", &car);
    fflush(stdin);*/
   /* char tabCar[TAILLE];//d�claration de tableau de 0 � TAILLE-1
    scanf("%s",&tabCar);/*Quand on fait une saisie en chaine de caract�re en C, il y aura
    toujours un caract�re de fin de chaine "\0" et qui ce rejoutera toujours apr�s la saisie*/

    /*gets(tabCar);
    fgets(tabCar,TAILLE,stdin);
    printf("%s",tabCar);*/


    char car
    printf("Veuillez saisir un caract�re\n");
    car=getchar();

    while ((car>='a' && car<='z') || (car>='A' && car<='Z'))
    {
        printf("%c\n",car);
        fflush(stdin);
        car=getchar();
    }




    return 0;

}


