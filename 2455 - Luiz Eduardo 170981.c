/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c1, c2, p1, p2;
    scanf("%d", &p1);
    scanf("%d", &c1);
    scanf("%d", &p2);
    scanf("%d", &c2);
    if (p1 * c1 == p2 * c2)
    {
        printf("0\n");
    }
    else if (p1 * c1 < p2 * c2)
    {
        printf("1\n");
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}
