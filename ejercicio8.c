/*
Trabajo Practico 1 - Ejercicio
Profe Martín
Comision Profes - 2023
Programacion 1 - Ingenieria en computacion
*/

#include <stdio.h>

/*
Consigna:
Implementar una función que sume los números enteros 
comprendidos entre dos cotas.

Siendo n inclusive y m no inclusive.
*/

/*
Esta funcion suma entre n y m
@param n, la cota inferior; inclusive
@param m, la cota superior; no inclusive
@returns la suma de los numero comprendidos entre n y m.

Precondiciones n tiene que ser menor que m
Postcondiciones el resultado es un valor entero, 
            con 0 como error. (lo cual es medio incorrecto)
*/
int suma_rango(int n, int m)
{
    int suma = 0;
    int i;
    
    if (n < m)
    {
        for (i = n; i < m; i++)
        {
            suma = suma + i;
        }
    }
    else
    {
        printf("Error: m(%d), es mayor o igual que n(%d)", m, n);
        suma = 0;
    }

    return suma;
}

int main() {
    int inicio = -5;
    int fin = 10;

    int resultado = suma_rango(inicio, fin);

    printf("La suma de los enteros en el rango [%d, %d) es: %d\n", inicio, fin, resultado);

    return 0;
}
