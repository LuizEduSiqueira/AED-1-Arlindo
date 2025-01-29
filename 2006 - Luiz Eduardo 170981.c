/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
main(){
    int t,respostas[5],contador=0,i;
        scanf("%d",&t);
    for (i=0;i<5;i++){
        scanf("%d",&respostas[i]);
        if(respostas[i]==t){
            contador++;
        }
    }
    printf("%d\n",contador);
system("pause");}