/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
main(){
    int i;
    char m_nomes[10][31];
    for (i=0;i<10;i++){
        scanf("%s",m_nomes[i]);
    }
    printf("%s\n",m_nomes[2]);
    printf("%s\n",m_nomes[6]);
    printf("%s\n",m_nomes[8]);
system("pause");}