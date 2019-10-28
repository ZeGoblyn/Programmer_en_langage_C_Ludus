#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLENOM 100
#define TAILLEPRENOM 100
#define TAILLEADRESSE 250
#define TAILLECP 25
#define TAILLEVILLE 100

int main()
{
   /* int nTabInteger[TAILLE];
    float fltTableFloat[TAILLE];
    double dblTabDouble[TAILLE];

    char cTabCar[TAILLE];

    int nI=0;

    for(nI=0;nI<TAILLE;nI++)
    {
        nTabInteger[nI]=0;
        fltTabFloat[nI]=0.0;
        dblTabDouble [nI]=0.0;
        cTabCar[nI]='\n';//'\0' caractère de fin de chaine
    }*/

    //Nom, prénom, Date de naissance, nom de rue, numéro, code postal, ville
    //Prendre en compte les espaces
    //Limite de chiffres pour les champs numérotés

    int s=1;


   /* char cTabID[7][24]={//premier [] donne le nombre de string dans le tableau, et le 2e définit la longeur des string
                        {"","","","","","","","","","","","","",""};
                        {"","","","","","","","","","","","","",""};
                        {"","","","","","","","","","","","","",""};
                        {"","","","","","","","","","","","","",""};
                        {"","","","","","","","","","","","","",""};
                        {"","","","","","","","","","","","","",""};
                        {"","","","","","","","","","","","","",""};
                        }*/

    static int nID=0;
    char cNom[TAILLENOM];
    char cPrenom[TAILLEPRENOM];
    char cAdresse[TAILLEADRESSE];
    char cCP[TAILLECP];
    char cVille[TAILEVILLE];

    const char finSaisie='n';

    do
    {
        printf("Programme carte ID\n");
        printf("Nom\n");
        fgets(cNom,TAILLENOM,stdin);
        fflush(stdin);

        printf("Préom\n");
        fgets(cPrenom,TAILLEPRENOM,stdin);
        fflush(stdin);

        printf("Adresse\n");
        fgets(cAdresse,TAILLEADRESSE,stdin);
        fflush(stdin);

        printf("Code postal\n");
        fgets(cCP,TAILLECP,stdin);
        fflush(stdin);

        printf("Ville\n");
        fgets(cVille,TAILLEVILLE,stdin);
        fflush(stdin);

        ++nID;

        //Affichage
        printf("Id:%d\n", nID);
        printf("Nom:%s",cNom);
        printf("Prenom:%s",cPrenom);
        printf("Adresse:%s",cAdresse);
        printf("CP:%s\n",cCP);
        printf("Ville:%s",cVille);


       /* do
        {
            printf("Saisir une autre carte o/n ?\n");
            scanf("%s",cContinue);
            fflush(stdin);
        }while(strcmp(cContinue,"o")&&strcmp(cContinue,"n"));*/

    }while(finSaisie!=cContinue[0]);



    /*int c;

     while (s!=0)
        {
           printf("Donnez votre nom");
           scanf("%[^\n]", &str);

           printf("Donnez votre prénom");
           cTabID[2]=scanf"%\n";
           printf("Donnez votre date de naissance");
           cTabID[3]=scanf"%\n";
           printf("Donnez votre nom de rue");
           cTabID[4]=scanf"%\n";
           printf("Donnez votre numéro de rue");
           cTabID[5]=scanf"%\n";
           printf("Donnez votre code postal");
           cTabID[6]=scanf"%\n";
           printf("Donnez votre ville");
           cTabID[7]=scanf"%\n";

           printf("Si vous voulez ajouter une fiche, tapez1, sinon, tapez 0");
           s=scanf"\n";
        }*/





    return 0;
}
