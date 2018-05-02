#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "code.h"
void decodificare(char mesaj_fc[250], char tastatura_fc[],char decodificat_fc[250]){
    int len1_fc;
    int i,j;
    int displacement;


    displacement=strchr(tastatura_fc,mesaj_fc[0])-strchr(tastatura_fc,'a');
printf("\ndisplacement is: %d",displacement);

len1_fc=strlen(mesaj_fc);
for(i=0;i<len1_fc;i++){

                if (mesaj_fc[i]==' '){decodificat_fc[i]=' ';} else{
                for(j=0;j<strlen(tastatura_fc);j++){
            if (mesaj_fc[i]==tastatura_fc[j]){

               if (j-displacement>=26){
                        decodificat_fc[i]=tastatura_fc[j-displacement-26];
                    }
                    else if (j-displacement<0){
                        decodificat_fc[i]=tastatura_fc[j-displacement+26];
                    }
                    else decodificat_fc[i]=tastatura_fc[j-displacement];
                    }

                    }
                }}


}
