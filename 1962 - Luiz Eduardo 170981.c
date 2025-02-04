/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#define ANO 2015
int main(){
    int quantidade,ano,i;
        scanf("%d",&quantidade);
    for (i=0;i<quantidade;i++){
        scanf("%d",&ano);
        ano=ANO-ano;
        if(ano<0){
            printf("%d A.C.\n",((ano*-1)+1));
        }
        if (ano==0){
            printf("%d A.C.\n",1);
        }
        if (ano>0){
            printf("%d D.C.\n",ano);
        }
    }
return 0;}
