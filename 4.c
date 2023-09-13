// Taller 3. Tipos, operadores y expresiones
//  Barrios_Retana_Lizeth_372813
//  11-Sep-2023
//  Cuanto daría la siguiente expresión aritmética resultado = (a * b + c) / (b - a), si a=5 , b =3 y c=7. (Realiza el procedimiento realizado)
//  BRL_Taller3_act4

#include <stdio.h>
int main()
{
    int a=5, b=3, c=7;
    float resultado;
    
    resultado = ((a * b) + c) / (b - a);
    printf ("el resultado es: %.2f",resultado);
    return 0;
}