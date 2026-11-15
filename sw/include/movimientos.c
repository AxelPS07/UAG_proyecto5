
#include <stdio.h>
#include "movimientos.h"

void mostrarMovimientos(float movimientos[], int tipos[], int cantidad) {
    int i;

    printf("\nMOVIMIENTOS REGISTRADOS\n");

    if (cantidad == 0) {
        printf("No hay movimientos registrados\n");
    } else {
        for (i = 0; i < cantidad; i++) {
            if (tipos[i] == 1) {
                printf("Ingreso: %.2f\n", movimientos[i]);
            } else {
                printf("Gasto: %.2f\n", movimientos[i]);
            }
        }
    }
}
