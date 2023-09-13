// Taller 3. Tipos, operadores y expresiones
//  Barrios_Retana_Lizeth_372813
//  11-Sep-2023
//  Determinar si un número es positivo, negativo o cero
//  BRL_Taller3_act1

#include <stdio.h>
int main()
{
    float num;
    printf("ingrese un numero\t");
    scanf("%f", &num);
    if (num > 0)
        {
            printf("el numero %.2f es positivo", num);
        }
    else
        {
            if (num == 0)
                {
                    printf("el numero %.2f es 0", num);
                }
            else
                {
                    printf("el numero %.2f es negativo", num);
                }
        }
    return 0;
}