/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
main(){ 
    int e,d;
    scanf("%d",&e);scanf("%d",&d);
    if ((e>d)){
        printf("Eu odeio a professora!\n");
    } 
	else if ((d-e)>=3){
        printf("Muito bem! Apresenta antes do Natal!\n");
    } 
	else if ((e+2)<24){
        printf("Parece o trabalho do meu filho!\nTCC Apresentado!\n");
    } 
	else{
        printf("Parece o trabalho do meu filho!\nFail! Entao eh nataaaaal!\n");
    }
system("pause");}