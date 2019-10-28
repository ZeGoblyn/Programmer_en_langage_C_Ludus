#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Exercice 1
    int i, n, som;
    som=0;
    i=0;

    while (i<4)
    {
        printf("Donner un entier\n");
        scanf("%d", &n);
        som +=n;
        i++;
    }
    printf("Somme: %d\n", som);

    som=0;
    i=0;

    do
    {
       printf("Donner un entier\n");
        scanf("%d", &n);
        som +=n;
        i++;
    }
    while (i<4);

     printf("Somme: %d\n", som);



    //Exercice2
    int compt;
    float nt, moy;
    moy=0;
    compt=0;
    nt=0;

    while (nt>=0)
    {
      printf("Rentrez une note. Si vous souhaitez terminer, rentrez une note négative\n");
        scanf("%f",&nt);
        moy=moy+nt;
        compt++;
    }


    moy-=nt;//On soustrait la note négative de sortit de boucle
    compt=compt-1;//On supprime la dernière note compter qui est la note négative de sortit de boucle
    moy=moy/compt;

    printf("La moyenne est%f\n", moy);


    //Exercice3

    int e, j, eto;

    printf("Donnez le nomre d'etoiles\n");
    scanf("%f",&e);

    for (e=1, e<=eto, e++)
        for (j=0; j<=e, j++)
        {
            printf("*");
        }
        printf("\n");
    }


    //Exercice 4 CORRECTION

    int nD, nN;

    do
    {
        printf("Donnez un entier superieur a 2\n");
        scanf("%d",&nN);
    }while(nN<=2);

    nD=2;
    while ((nN%nD)&&(nD<=sqrt(nN)))
            nD++;

    if(nN%nD)
        printf("%d est premier", nN);
    else
        printf("%d est pas premier", nN);

    //Eercice5 CORRECTION

    int nU1, nU2, nU3;
    int nN, nI;

    do
    {
        printf("rang du terme demande (au moins 3)\n");
    scanf("%d",&nN);
    }while(nN<3);

    nU2=nU1=1;
    nI=2;
    while(nI++<nN)
    {
        nU3=nU1+nU2;
        nU1=nU2;
        nU2=nU3;
    }

    printf("Valeurdu terme du rang %d:%d", nN, nU3);

    //Exercice 6 CORRECTION

    const int NMAX=10;
    int nU, nJ;
    printf("    I");
    for(nJ=1;nJ<=NMAX;nJ++)
        printf("%4d", nJ);

    printf("%n");
    printf("------");

    for(nJ=1;nJ<=NMAX,nJ++)
        printf("------");

    printf("\n");

    for(nI=1; nI<=NMAX,nI++)
    {
        printf("%4d", nI);
        for(nJ=1,nJ<=NMAX,nJ++)
            printf("%4d",nI*nJ);

        printf("\n");
    }
}
