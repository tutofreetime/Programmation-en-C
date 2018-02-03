#include<stdio.h>
#include<stdlib.h>
#include "fonctions.h"

int main()
{


/*  int tab2[32]= {0,1,0,0,0,0,0,1,1,0,0,0,1,1,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0};
int tab1[32] = {1,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int taille2 = 32;
printf("Flottant %f\n",conversFloat(tab1,taille2));

printf("\n");
*/
int t[32] = { 0, 1,0,0, 0,0,1,0, 1, 1,0,1, 0,1,0,0, 1,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0 };

  int n = 0;
  int i;

  for(i=0;i<32;i++) {
    n += t[31-i]<<i;
  }
  
  // n = 0x42d48000 ;
 

  float f = *(float *)&n;

  printf("%f\n",f); 

  printf("Flottant %f\n",conversFloat(t,32));
mirroir(t,32);
int valeur= puissantBinaPositif(t,32);
  printf("%x %d  %u positive : %f,\n",n,n,n,*(float *)&valeur); 

    return 0;
}