#include<stdio.h>
#include<stdlib.h>
#include "fonctions.h"

int main()
{


int tab2[32]= {0,1,0,0,0,0,0,1,1,0,0,0,1,1,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0};
int posit[4] ={1,1,1,0};
int negat[6] = {0,0,0,0,1,1};
//int tab1[32] = {0,1,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,0,1,1,1,0,0,0,0,1,0,1,0,0,0,0,};
int taille2 = 32;
printf("Flottant %f\n",puissanceBinaNega(negat,6));

printf("\n");

    return 0;
}