#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "code.h"
   void codificare(char mesaj_fcc[250], char tastatura_fcc[], char litera_fcc, char codificat_fcc[250])
{
int displacement1;
int a,b, len1_fcc;

displacement1=strchr(tastatura_fcc,litera_fcc)-strchr(tastatura_fcc,'a');
printf("\ndisplacement is: %d",displacement1);

 len1_fcc=strlen(mesaj_fcc);
for(b=0;b<len1_fcc;b++){

                if (mesaj_fcc[b]==' '){codificat_fcc[b]=' ';} else{
                for(a=0;a<strlen(tastatura_fcc);a++){
            if (mesaj_fcc[b]==tastatura_fcc[a]){

            if (a+displacement1>=26){
                        codificat_fcc[b]=tastatura_fcc[a+displacement1-26];
                    }
                    else if (a+displacement1<0){
                        codificat_fcc[b]=tastatura_fcc[a+displacement1+26];
                    }
                    else codificat_fcc[b]=tastatura_fcc[a+displacement1];
                    }

                    }
                }}

}
