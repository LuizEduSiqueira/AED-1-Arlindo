/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
int main(){
	int m,a,b,fi_damonica;
    scanf("%d",&m);scanf("%d",&a);scanf("%d",&b);
        fi_damonica=m-(a+b);
    if ((fi_damonica>a)&&(fi_damonica>b)){
        printf("%d\n",fi_damonica);
    }
    else if ((a>fi_damonica)&&(a>b)){
        printf("%d\n",a);
    }
    else{
        printf("%d\n",b);
    }
return 0;}
