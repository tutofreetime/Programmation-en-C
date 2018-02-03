#include<stdio.h>
#include<stdlib.h>
#include "fonctions.h"

int main()
{
<<<<<<< HEAD


int tab2[32]= {0,1,0,0,0,0,0,1,1,0,0,0,1,1,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0};
int posit[8] ={0,0,0,0,0,0,0,1};
int negat[6] = {0,0,0,0,1,1};
//int tab1[32] = {0,1,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,0,1,1,1,0,0,0,0,1,0,1,0,0,0,0,};
int taille2 = 32;
printf("Flottant %f\n",puissantBinaPositif(posit,8));

printf("\n");
=======
    int tab1[32] = {0,1,0,0,0,0,1,0,1,1,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int tab2[32] = {0,1,0,0,0,0,0,1,1,0,0,0,1,1,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0};
    int taille2 = 32;
    
    printf("%f \n",conversFloat(tab1,taille2));
    printf("%f \n",conversFloat(tab2,taille2));
>>>>>>> puissancePositive

    return 0;
}