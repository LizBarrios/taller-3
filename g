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