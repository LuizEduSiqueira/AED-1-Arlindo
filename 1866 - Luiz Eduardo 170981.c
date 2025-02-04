/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
int main(){
	int quantidade,n,i;
	scanf("%d",&quantidade);
	for (i=0;i<quantidade;i++){
        scanf("%d",&n);
        if (n%2==0){
            printf("0\n");
        }
        else{
            printf("1\n");
        }
    }
return 0;}
