#include<stdio.h>
#include<stdlib.h>
#include "fonctions.h"

int main()
{


int tab2[32]= {0,1,0,0,0,0,0,1,1,0,0,0,1,1,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0};
afficheTab(tab2,32);
//int trois[4] = {1,1,0,0};
//int floatt[4] = {1,1};"
int taille2 = 32;
//printf("Positive %f\n",puissantBinaPositif(trois,4));
//printf("Negative %f\n",puissanceBinaNega(trois,4));"
printf("Flottant %f\n",conversFloat(tab2,taille2));

//conversion(tab,taille,a);
printf("\n");

    return 0;
}