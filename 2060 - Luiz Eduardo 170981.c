/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){
	int quantidade,lista,cont_2=0,cont_3=0,cont_4=0,cont_5=0,i;
    scanf("%d",&quantidade);
    for (i=0;i<quantidade;i++){
        scanf("%d",&lista);
        if (lista%2==0){
            cont_2++;
        }
        if (lista%3==0){
            cont_3++;
        }
        if (lista%4==0){
            cont_4++;
        }
        if (lista%5==0){
            cont_5++;
        }
    }
    /* Output */
    printf("%d Multiplo(s) de 2\n",cont_2);
    printf("%d Multiplo(s) de 3\n",cont_3);
    printf("%d Multiplo(s) de 4\n",cont_4);
    printf("%d Multiplo(s) de 5\n",cont_5);
system("pause");}