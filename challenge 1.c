#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[100] ;
    char prenom[100] ;
    int age ;
    char sexe[10] ;
    char email[1000] ;

    printf("veuillez entrer votre nom:\n");
    scanf("%s",&nom);
    printf("veillez entrer votre prenom:\n");
    scanf("%s",&prenom);
    printf("veuillez entrer votre age:\n");
    scanf("%d",&age);
    printf("veuillez entrer votre sexe homme ou femme:\n");
    scanf("%s",&sexe);
    printf("veuillez entrer votre email:\n");
    scanf("%s",&email);
    printf("%s %s %d %s %s\n",nom,prenom,age,sexe,email);

}
