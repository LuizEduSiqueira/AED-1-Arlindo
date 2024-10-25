/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>


//Funcao calcular area de circulo
double calcular_area(double r) {

	double A,n=3.14159;

	A=n*(r*r);
	return A;
}

//main
int main()
{
    double r,A;
    
    scanf("%lf",&r);
    A=calcular_area(r);
	printf("A=%.4lf\n",A);

	return 0;
}
