/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#include <stdbool.h>
int pao_de_batata(int a,int b,int c){
    if(((a+b)<=c)||((c+a)<=b)||((c+b)<=a)){
        return false;
    }
    return true;
}
main(){
	int a,b,c,d;
    scanf("%d",&a);scanf("%d",&b);scanf("%d",&c);scanf("%d",&d);
    if(((pao_de_batata(a,b,c))==true)||((pao_de_batata(a,b,d))==true)||((pao_de_batata(a,d,c))==true)||((pao_de_batata(d,b,c))==true)){
        printf("S\n");
    }
    else{
        printf("N\n");
    }
system("pause");}