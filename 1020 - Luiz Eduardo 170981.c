/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
//main
int main() {
	int idade_dias;
	int anos, meses, dias;

//leitura de idade
	scanf("%d", &idade_dias);
//Conversao em meses e anos
	anos = idade_dias / 365;
	idade_dias = idade_dias % 365; // Atualiza idade_dias para o restante apC3s calcular anos
	meses = idade_dias / 30;
	dias = idade_dias % 30; // Dias restantes
//saida
	printf("%d ano(s)\n", anos);
	printf("%d mes(es)\n", meses);
	printf("%d dia(s)\n", dias);

	return 0;
}
