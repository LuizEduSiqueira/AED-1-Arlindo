/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#include <stdlib.h>
int main(){
	int escolha,jogador_1,jogador_2,r,a,soma;
    scanf("%d",&escolha);scanf("%d",&jogador_1);scanf("%d",&jogador_2);scanf("%d",&r);scanf("%d",&a);
    soma=jogador_1+jogador_2;
    if ((r==1)&&(a==1)){
        printf("Jogador 2 ganha!\n");
    }
    else if((r==1)&&(a==0)){
        printf("Jogador 1 ganha!\n");
    }
    else if((r==0)&&(a==1)){
        printf("Jogador 1 ganha!\n");
    }
    else if((r==0)&&(a==0)){
        if((escolha==1)&&(soma%2==0)){
            printf("Jogador 1 ganha!\n");
        }
        else if((escolha==1)&&(soma%2!=0)){
            printf("Jogador 2 ganha!\n");
        }
        else if((escolha==0)&&(soma%2!=0)){
            printf("Jogador 1 ganha!\n");
        }
        else if((escolha==0)&&(soma%2==0)){
            printf("Jogador 2 ganha!\n");
        }   
    }
return 0;}
