/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#include <string.h>
main(){ 
    char piscada[10];
    int loteria,i,contador=3;
    for(i=0;i<3;i++){
        loteria=0;
        while(1){
            scanf("%s caw",&piscada);
            if (!strcmp(piscada,"caw")){
                break;
            }
            if (piscada[0]=='*'){
                loteria+=4;
            }
            if (piscada[1]=='*'){
                loteria+=2;
            }
            if (piscada[2]=='*'){
                loteria+=1;
            }
        }
        printf("%d\n",loteria);
    }
system("pause");}