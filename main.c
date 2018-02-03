#include<stdio.h>
#include<stdlib.h>
#include "fonctions.h"

int main()
{
    int tab1[32] = {0,1,0,0,0,0,1,0,1,1,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    //int tab2[32] = {0,1,0,0,0,0,0,1,1,0,0,0,1,1,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0};
    int quatre[32] = {0,1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int taille2 = 32;
    printf("%f \n",methodeSimple(tab1,taille2));
    printf("%f \n",methodeSimple(quatre,taille2));

    return 0;
}