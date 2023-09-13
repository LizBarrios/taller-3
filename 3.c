// Taller 3. Tipos, operadores y expresiones
//  Barrios_Retana_Lizeth_372813
//  11-Sep-2023
//  Determinar si un número es par y positivo al mismo tiempo*.
//  BRL_Taller3_act3

#include <stdio.h>
int main()
{
    int num;
    printf("ingrese un numero\t");
    scanf("%d", &num);
    if (num % 2 == 0)
        {
            if (num > 0)
                {
                    printf("el numero %d es par y positivo",num);
                }
        }
    else
        {
            printf("no cumple con el standar");
        }
    return 0;
}