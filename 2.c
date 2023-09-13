// Taller 3. Tipos, operadores y expresiones
//  Barrios_Retana_Lizeth_372813
//  11-Sep-2023
//  El ejercicio debe permitir ingresar grados Celsius y debe convertirlos a grados Fahrenheit
//  BRL_Taller3_act2

#include <stdio.h>
int main()
{
    float c, Fa;
    printf("ingrese los grados celsius\t");
    scanf("%f", &c);
    Fa = (c * 9 / 5) + 32;
    printf("%.2f grados Celsius son %.2f grados Fahrenheit", c, Fa);
    return 0;
}