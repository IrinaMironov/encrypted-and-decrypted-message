#include <stdio.h>
#include <stdlib.h>
int putere(int local_a,int local_b)
{
//bloc variabile locale
int i_local;
int putere;

//bloc algoritm
putere=1;
for(i_local=0;i_local<=local_b;i_local++)
    putere=putere*local_a;
//bloc stuchire
return putere;
}


int main()
{
int baza;
int exponent;
int rezultat;

printf("Dati baza: ");
scanf("%d",&baza);
printf("\nDati exponentul:");
scanf("%d",&exponent);
rezultat=putere(baza,exponent);
printf("\n%d la puterea %d este %d",baza,exponent,rezultat);
}
