/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#include <stdlib.h>
main(){
    int pulo_sapo,num_canos,num_canost,tam_cano,anterior,sim_p=0,i; 

		scanf("%d",&pulo_sapo);scanf("%d",&num_canos);
	num_canost=num_canos;
	num_canos--;
		scanf("%d",&tam_cano);
	anterior=tam_cano;

	for(i=0;i<num_canost;i++){
		scanf("%d",&tam_cano);
		
		if(pulo_sapo<(abs(anterior-tam_cano))){
			break;
		}
        else{
			anterior=tam_cano;
			sim_p++;
		}
	}
	if(num_canost==sim_p){
		printf("YOU WIN\n");
	}
    else{
		printf("GAME OVER\n");
	}	 
system("pause");}