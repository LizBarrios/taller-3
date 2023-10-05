// Taller 3. Tipos, operadores y expresiones
//  Barrios_Retana_Lizeth_372813
//  11-Sep-2023
//  Convierte los números decimales a binarios y calcula cual seria el resultado de: num = 37;
//  BRL_Taller3_act6
#include <stdio.h>
int main()
{
    int num, bits;
    int binario[32];

    printf("Ingresa un numero entero: ");
    scanf("%d", &num);

    printf("Ingresa el numero de bits a considerar: ");
    scanf("%d", &bits);

    if (bits <= 0)
        {
            printf("El numero de bits debe ser mayor que cero.\n");
            return 1;
        }

    printf("Representacion binaria: ");
    for (int i = bits - 1; i >= 0; i--)
        {
            printf("%d", binario[i]);
        }
    printf("\n");

// Rellena con ceros a la derecha después del desplazamiento
    for (int i = bits - 2; i < bits; i++)
        {
            binario[i] = 0;
        }

    printf("Numero binario desplazado a la izquierda por 2 posiciones: ");
    for (int i = bits - 1; i >= 0; i--)
        {
            printf("%d", binario[i]);
        }
    printf("\n");
    
    return 0;
}
