/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#include <string.h>
#include <strings.h>
main(){
    int i;
    char frase[128];
    while(gets(frase)){
        for(i=0;i<strlen(frase);i++){
            if(frase[i]==','){
                printf("\n");
            }
            else{
                printf("%c",frase[i]);
            }
        }
        printf("\n");
    }
system("pause");}