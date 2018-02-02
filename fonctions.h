

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

float puissantBinaPositif(int *tab, int taille)
{
    int i;
    float somme =0.0;
    for(i = 0 ; i< taille; i++)
        somme += tab[i]<<i;
    return somme;
}
float divisionReelle(int a, int b)
{
    return (float)a/(float)b;
}
float puissanceBinaNega(int *tab, int taille)
{
    int i;
    float somme =0.0;
    for(i = 0 ; i < taille; i++){
        if(tab[i]!=0)
            somme+= divisionReelle(1,tab[i]<<(i+1));
    }
    return somme;
}

float conversFloat(int *tab, int precision)
{
    int signe =tab[0];
    int exposant[8];
    int mantisse[23];
    int i;
    float f =0.0;
    //Signe

    if(signe == 0)
        signe = 1;
    else  
        signe = -1;
    //Exporter l'exposant

    for(i = 9-1; i > 0; i--){
        exposant[i-1] = tab[i];
    }
    //Exporter la mantisse
    int j =0;
    for(i = precision-1; i > 9 ; i--){
        mantisse[j] = tab[i];
        j++;
    }
    /*

    printf("\n%d|",signe);
    afficheTab(exposant,8);
    printf("|");
    afficheTab(mantisse,23);
    printf("\n\n");

    printf("signe : \n%d",signe);
    printf("\nExposant %f : ",(puissantBinaPositif(exposant,8)));
    afficheTab(exposant,8);
    printf("\nMantisse %f : ",1 + puissanceBinaNega(mantisse,23));
    afficheTab(mantisse,23);
    printf("\n");
    return f = signe * (1 + puissanceBinaNega(mantisse,23))* (puissantBinaPositif(exposant,8)-127);*/
}