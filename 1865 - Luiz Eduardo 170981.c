/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
int main(){
    int c,i,newton;
    char nome[100];
    scanf("%d",&c);
    for (i=0;i<c;i++){
        scanf("%s",&nome);scanf("%d",&newton);
            if (nome[0]=='T' && nome[1]=='h' && nome[2]=='o' && nome[3]=='r'){
	            printf("Y\n");
            }
        else{
            printf("N\n");
        }
    }
return 0;}
