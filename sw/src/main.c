
#include <stdio.h>

int main() {
    int opcion;
    float ingreso, totalIngresos = 0;

    do {
        printf("\nCONTROL DE INGRESOS Y GASTOS\n");
        printf("1. Registrar ingreso\n");
        printf("2. Registrar gasto\n");
        printf("3. Ver movimientos\n");
        printf("4. Ver gastos por categoria\n");
        printf("5. Ver movimientos por periodo\n");
        printf("6. Ver balance\n");
        printf("7. Poner presupuesto\n");
        printf("8. Comparar presupuesto\n");
        printf("9. Corregir movimiento\n");
        printf("10. Agregar categoria\n");
        printf("0. Salir\n");

        printf("Elige una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
             printf("Cuanto dinero recibiste: ");
             scanf("%f", &ingreso);

             if (ingreso > 0) {
             totalIngresos = totalIngresos + ingreso;
             printf("Ingreso registrado\n");
             } else {
             printf("La cantidad debe ser mayor a 0\n");
             }
             break;

            case 2:                printf("Registrar gasto\n");
                break;

            case 3:
                printf("Ver movimientos\n");
                break;

            case 4:
                printf("Ver gastos por categoria\n");
                break;

            case 5:
                printf("Ver movimientos por periodo\n");
                break;

            case 6:
                printf("Ver balance\n");
                break;

            case 7:
                printf("Poner presupuesto\n");
                break;

            case 8:
                printf("Comparar presupuesto\n");
                break;

            case 9:
                printf("Corregir movimiento\n");
                break;

            case 10:
                printf("Agregar categoria\n");
                break;

            case 0:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion incorrecta\n");
        }

    } while(opcion != 0);

    return 0;
}

