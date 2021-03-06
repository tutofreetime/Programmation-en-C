

int puissance2(int a, int n)
{
    int i, s=1;
    for(i = 0 ; i < n ; i++)
        s *=2;
    s = s * a;
    
    return s;
}
char dtochar(int n)
{
    return (n<10)?n+'0':(n-10) +'A';
}
void conversion(int *tab, int taille, int n)//n est la puissance de la base 2^n
{
    int i;
    int tailleAux = taille/n + (taille % n != 0);
    int *tabaux =(int *)malloc(tailleAux*sizeof(int));
    if(tabaux == NULL)
        exit(-1);
    for(i = 0 ; i < taille; i++)
        tabaux[i/n] = tab[i]<<(i%n);

    for(i = 0 ; i < tailleAux ; i++)
        printf(" %c ",dtochar(tabaux[i]));
}
/*------------------------- TP1 -----------------------------------------*/
float convers(int *tab, int precision)
{
    int i,n=0;
    float f;

    for(i = precision-1; i<=0;i--)
        n+=tab[31-i]<<i;
    f= *(float *)&n;
    return f;
}

void afficheTab(int tab[], int taille)
{
    int i;
    for(i = 0 ; i < taille; i++)
        printf("%d",tab[i]);
}

int sommetab(int * tab, int taille)
{
    int i;
    int s= 0;
    for(i= 0; i<taille;i++)
        s +=tab[i];
    return s;
}

int puissantBinaPositif(int *tab, int taille)
{
    int i;
    int somme =0;
    for(i = taille -1 ; i >=0; i--)
        somme += tab[i]<<i;
    return somme;
}

float divisionReelle(int a, int b)
{
    return (float)a/(float)b;
}
/*Les bits dans le tableau doit être classés  de point faible au point for*/
float puissanceBinaNega(int *tab, int taille)
{
    int i;
    float somme =0.0;
    for(i = 0 ; i < taille; i++){
        if(tab[i]!=0)
            somme+= divisionReelle(1,(tab[i]<<(i+1)));
    }
    return somme;
}
/*Mirroir, fonction*/
void mirroir(int tab[], int taille)
{
    int i,aux;
    
    for(i = 0 ; i< taille/2; i++)
    {
        aux = tab[i];
        tab[i] = tab[taille-1-i];
        tab[taille-1-i] = aux;
    }
}

float conversFloat(int *tab, int precision)
{
    int signe =tab[0];
    int exposant[8];
    int mantisse[23];
    int i;
    float f = 0.0;
    /*------------------------Gestion de signe --------------------------------------*/
    if(signe == 0)
        signe = 1;
    else  
        signe = -1;
    /*------------------------Gestion de l'exposant ---------------------------------*/
    for(i = 1; i < 9; i++){
        exposant[i-1] = tab[i];
    }
    /*Mirroir qui inverse le tableau */
    mirroir(exposant,8);
    float expos = 1<<(puissantBinaPositif(exposant,8) - 127);
    /*------------------------Gestion de Mantisse -----------------------------------*/
    int j =0;
    for(; i < 32 ; i++){
        mantisse[j] = tab[i];
        j++;
    }
    float mant = puissanceBinaNega(mantisse,23);

    f = signe * (1 + mant)*expos;

    return f;
}
/*--------------------------------------------------------------------------------*/
//Methode courte et simple
float methodeSimple(int * tab, int precision)
{
    int i;
    float f = 0.0;
    int n=0;
    for(i = 0 ; i < precision; i++)
        n += tab[precision-1-i]<<i;
    
    f = *(float *)&n;

    return f;
    
}