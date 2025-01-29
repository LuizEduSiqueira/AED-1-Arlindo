/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
main(){
    int num,sair=0;
    char romanos[13][3]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int vet_arabicus[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        scanf("%d",&num);
    while(sair!=1){
        int ind=12; /* > Indice do 'Vetor' < */
        while (num>0){
            if (num>=vet_arabicus[ind]){
                printf("%s",romanos[ind]);
                num-=vet_arabicus[ind];
            }
            else{ind--;}
        }
        printf("\n"); /* > URI Output < */
        sair=1;
    }
system("pause");}