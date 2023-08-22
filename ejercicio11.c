/*
Trabajo Practico 1 - Ejercicio 11
Profe Martín
Comision Profes - 2023
Programacion 1 - Ingenieria en computacion
*/

#include <stdio.h>

int contador_circular(int i, int limite) {
    return (i + 1) % (limite + 1);
}

int main()
{
    int i = -10;
    int j;
    printf("i comienza en -10\n");
    printf("20 llamadas a la funcion\n");
    for(j = 0; j<20; j++)
    {
        i = contador_circular(i, 5);
        printf("vuelta: %d,circular:%d\n",j, i);
    }
    return 0;
}
