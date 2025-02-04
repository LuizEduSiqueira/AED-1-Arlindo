/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
void maior(int a,int b){
    printf("%d\n",((a>b)?a:b));
}
int main(){
	int a,b;
    scanf("%d",&a);scanf("%d",&b);
    maior(a,b);
return 0;}
