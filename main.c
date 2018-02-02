#include<stdio.h>
#include<stdlib.h>
#include "fonctions.h"

int main()
{


int tab2[32]= {0,1,0,0,0,0,0,1,1,0,0,0,1,1,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0};
//int tab1[32] = {0,1,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,0,1,1,1,0,0,0,0,1,0,1,0,0,0,0,};
int taille2 = 32;
printf("Flottant %f\n",conversFloat(tab2,taille2));

printf("\n");

    return 0;
}