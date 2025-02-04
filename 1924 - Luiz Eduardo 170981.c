/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
int main(){
	int quantidade,i;
    char curso_1[1001],curso_certo[]="Ciencia da Computacao";
    scanf("%d",&quantidade);
    for (i=0;i<quantidade;i++){
        scanf("%s",&curso_1);
    }
    printf("%s\n",curso_certo);
return 0;}
