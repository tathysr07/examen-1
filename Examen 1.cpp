#include <stdio.h>
#include <string.h>

int main() {
    char nombre[50];
    char categoria[20];
    int cantidad;
    int total;

    // Estadísticas
    int totalVentas = 0;
    int entradasVIP = 0, entradasGeneral = 0, entradasEstudiante = 0;
    int montoVIP = 0, montoGeneral = 0, montoEstudiante = 0;

    int opcion;

    for (int i = 0; i < 10; i++) {
        printf("\n----- MENU DE VENTAS -----\n");
        printf("1. Registrar una venta\n");
        printf("2. Mostrar estadísticas\n");
        printf("0. Salir\n");
        printf("Digite una opción: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            printf("Nombre del comprador: ");
            scanf(" %[^\n]", nombre);

            printf("Categoría (VIP, General, Estudiante): ");
            scanf("%s", categoria);

            printf("Cantidad de entradas (máx 5): ");
            scanf("%d", &cantidad);

            if (cantidad <= 0 || cantidad > 5) {
                printf("Cantidad no permitida. Debe ser entre 1 y 5.\n");
                continue;
            }

            int precio = 0;

            // ?? ERROR de principiante: comparación sensible a mayúsculas
            if (strcmp(categoria, "VIP") == 0) {
                precio = 25000;
            } else if (strcmp(categoria, "General") == 0) {
                precio = 15000;
            } else if (strcmp(categoria, "Estudiante") == 0) {


