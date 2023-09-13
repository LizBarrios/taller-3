// Taller 3. Tipos, operadores y expresiones
//  Barrios_Retana_Lizeth_372813
//  11-Sep-2023
//  El ejercicio debe permitir ingresar un año y determine si ese año es bisiesto o no.
//  BRL_Taller3_act5

#include <stdio.h>
int main()
{
    int ano;
    printf("ingrese el ano: \t");
    scanf("%d", &ano);
    if (ano % 4 == 0)
        {
            if (ano % 100 != 0)
                {
                    printf("el ano %d es bisiesto",ano);
                }
        }
    else
        {
            printf("no es bisiesto");
        }
    return 0;
}