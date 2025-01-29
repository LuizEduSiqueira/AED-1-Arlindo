/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
main(){
	double alt_placa,larg_placa,quantidade;
	double alt_pci,larg_pci;
	long long int i=0;
	while(scanf("%lf %lf %lf",&alt_placa,&larg_placa,&quantidade)!=EOF){
		for (i=0;i<quantidade;i++){
			scanf("%lf %lf",&alt_pci,&larg_pci);
			if ((alt_pci<=alt_placa&&larg_pci<=larg_placa) || (alt_pci<=larg_placa&&larg_pci<=alt_placa)){
				printf("Sim\n");
            }
			else{
				printf("Nao\n");
            }
		}
	}
system("pause");}