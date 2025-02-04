/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
int main(){
	int h, min;
	while(scanf("%d:%d",&h,&min)!=EOF){
	    if (h>=5 && h<=6){
            printf("Atraso maximo: %d\n",0);
        }
        else if (h==7){
            printf("Atraso maximo: %d\n",(min));
        }
        else if (h==8){
            printf("Atraso maximo: %d\n",(60+min));
        }
        else if (h==9){
            printf("Atraso maximo: %d\n",(120+min));
        }
	}
return 0;}
