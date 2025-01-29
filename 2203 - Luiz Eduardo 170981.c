/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
main()
{
    int Xf, Yf, Xi, Yi, Vi, R1, R2;
    double D1, D2;

    while (scanf("%d %d %d %d %d %d %d", &Xf, &Yf, &Xi, &Yi, &Vi, &R1, &R2) != EOF)
    {
        D1 = sqrt((pow((Xi - Xf), 2.0)) + (pow((Yi - Yf), 2.0))) + (Vi * 1.50);
        D2 = R1 + R2;
        if (D2 >= D1)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    system("pause");
}