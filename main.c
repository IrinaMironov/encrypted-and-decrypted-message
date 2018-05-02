#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "code.h"

int main()
{
char tastatura[] = "qwertyuiopasdfghjklzxcvbnm";
char mesaj[250];
char mesaj_decodificat[250];
char mesaj_codificat[250];
//char litera;
char optiune[50];
int codif, decodif;


printf(" introdu optiunea dorita (codifica sau decodifica)");
gets(optiune);
printf("optiunea este %s", optiune);

codif=strcmp(optiune,"codifica");
decodif=strcmp(optiune,"decodifica");
if (codif==0){
printf("\nInintrtroduceti mesajul original ");
gets(mesaj);
printf("\n%s",mesaj);
//printf("\nintrodu litera de cod  ");
//scanf("%c", &litera);
//printf("\nlitera de cod este %c", litera);

printf("\ncodificarea este:");
codificare(mesaj,tastatura, mesaj_codificat);
puts(mesaj_codificat);

}
else if (decodif==0){
    printf("\nInintrtroduceti mesajul original ");
gets(mesaj);
printf("\n%s",mesaj);
//printf("\nintrodu litera de cod  ");
//scanf("%c", &litera);
//printf("\nlitera de cod este %c", litera);
printf("\ndecodificarea este: ");
decodificare(mesaj,tastatura,mesaj_decodificat);
puts(mesaj_decodificat);

    }
else printf("\n Du-te si invata-te a scrie ");

return 0;
}
