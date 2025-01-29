/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
double valor(int id){
    if (id==1001){return 1.5;}
	else if (id==1002){return 2.5;}
	else if (id==1003){return 3.5;}
	else if (id==1004){return 4.5;}
    else if (id==1005){return 5.5;}
}
main(){
	int p,q,id,i;
    double soma=0;
    scanf("%d",&p);
    for (i=0;i<p;i++){
        scanf("%d",&id);
        scanf("%d",&q);
        soma+=(q*(valor(id)));
    }
    printf("%.2lf\n",soma);
system("pause");}