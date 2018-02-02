

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
        printf(" %d ",tab[i]);
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
    for(i = 0 ; i < taille; i++)
        somme += tab[i]<<i;
    return somme;
}
float conversFloat(int *tab, int precision)
{
    //int signe =tab[0];
    int exposant[8];
    int mantisse[23];
    int i;
    float f =0.0;
    //Exporter l'exposant
    //int exp = 8/2 + 8 % 2!=0;
    //int expTab[exp] =(int *)malloc(exp*sizeof(int));
    for(i = 1; i < 9; i++){
        exposant[i] = tab[i];
    }
    //Exporter la mantisse
    //int Mantexp = 23/2 + 23 % 2!=0;
    //int MantTab[exp] =(int *)malloc(Mantexp*sizeof(int));
    for(; i < precision ; i++){
        mantisse[i] = tab[i];
    }
    return f;

}