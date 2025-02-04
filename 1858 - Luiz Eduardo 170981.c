/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
int main(){
    int n,t,i=1,posicao_m,resposta;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&t);
        if (i==1){
            posicao_m=t;
            resposta=i;
        }
        if(t<posicao_m){
            posicao_m=t;
            resposta=i;
        }
        i++;
    }
    printf("%d\n",resposta);
return 0;}
