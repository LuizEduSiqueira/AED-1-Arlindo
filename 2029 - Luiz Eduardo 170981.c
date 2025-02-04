/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#define PI 3.14
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double area=0,diametro, volume;
		while(scanf("%lf %lf",&volume,&diametro)!=EOF){
                /* > H = Volume/Pi*(Raio)^2 < */
            printf("ALTURA = %.2lf\n",volume/(PI*(pow((diametro/2),2))));
                /* > A = Pi*(Raio)^2 < */
            printf("AREA = %.2lf\n",PI*(pow((diametro/2),2)));
        }
return 0;}
