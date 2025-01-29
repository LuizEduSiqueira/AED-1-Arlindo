/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#include <stdlib.h>
int contagem(int num){
    int soma=0,i;
    for (i=num;i>0;i--){
        soma+=i;
    }
    return ++soma; /* > Somar antes "++$" < */
}
main(){
    int N,i,j,k=0,c,aux;
        while (scanf("%d",&N)!=EOF){
            if(N==0){
                k++;
                printf("Caso %d: 1 numero\n",(k));
                printf("0\n\n");
                continue; /* > Excessões < */
            }
            else{
                k++;
                printf("Caso %d: %d numeros\n",(k),contagem(N));  
            }
            for(i=0;i<=N;i++){
                if (i==0){
                    printf("0");} /* > Print 0  -- Sequência < */
                for (j=1;j<=i;j++)
                    printf(" %d",i);
            }
            printf("\n\n");
        }
system("pause");}