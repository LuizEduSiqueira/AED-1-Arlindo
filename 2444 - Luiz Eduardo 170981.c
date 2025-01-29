/*Luiz eduardo garcia de Siqueira 170981 turma NA
AED 1 Prof. Arlindo - 2024.2*/

#include <stdio.h>
#include <stdlib.h>

main()
{
    int vol, trocas, volp, i;
    scanf("%d", &vol);
    scanf("%d", &trocas);

    for (i = 0; i < trocas; i++)
    {
        scanf("%d", &volp);
        if (vol + volp > 100)
        {
            vol = 100;
        }
        else if (vol + volp > 0)
        {
            vol += volp;
        }
        else
        {
            vol = 0;
        }
    }
    printf("%d\n", vol);
    system("pause");
}