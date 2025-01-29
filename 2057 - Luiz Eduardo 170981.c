/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#include <stdlib.h>
main(){
	int s,t,f;
		scanf("%d",&s);scanf("%d",&t);scanf("%d",&f);
        t=s+t+f;
        /* > Caso der negativo < */
        if (t<0){
            t=24+t;
        }
        printf("%d\n",(t%24));
system("pause");}