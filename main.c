#include <stdio.h>

void convertirTemperatura() {
    int opcion;
    double valor, resultado;

    printf("\n--- Conversor de Temperatura ---\n");
    printf("1. Celsius a Fahrenheit\n");
    printf("2. Fahrenheit a Celsius\n");
    printf("3. Celsius a Kelvin\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese el valor: ");
    scanf("%lf", &valor);

    switch (opcion) {
        case 1:
            resultado = (valor * 9.0/5.0) + 32;
            printf("%.2f °C = %.2f °F\n", valor, resultado);
            break;
        case 2:
            resultado = (valor - 32) * 5.0/9.0;
            printf("%.2f °F = %.2f °C\n", valor, resultado);
            break;
        case 3:
            resultado = valor + 273.15;
            printf("%.2f °C = %.2f K\n", valor, resultado);
            break;
        default:
            printf("Opcion no valida.\n");
    }
}

void convertirLongitud() {
    int opcion;
    double valor, resultado;

    printf("\n--- Conversor de Longitud ---\n");
    printf("1. Metros a Kilometros\n");
    printf("2. Kilometros a Metros\n");
    printf("3. Metros a Millas\n");
    printf("4. Centimetros a Metros\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese el valor: ");
    scanf("%lf", &valor);

    switch (opcion) {
        case 1:
            resultado = valor / 1000.0;
            printf("%.2f m = %.2f km\n", valor, resultado);
            break;
        case 2:
            resultado = valor * 1000.0;
            printf("%.2f km = %.2f m\n", valor, resultado);
            break;
        case 3:
            resultado = valor * 0.000621371;
            printf("%.2f m = %.4f millas\n", valor, resultado);
            break;
        case 4:
            resultado = valor / 100.0;
            printf("%.2f cm = %.2f m\n", valor, resultado);
            break;
        default:
            printf("Opcion no valida.\n");
    }
}

void convertirPeso() {
    int opcion;
    double valor, resultado;

    printf("\n--- Conversor de Peso ---\n");
    printf("1. Kilogramos a Libras\n");
    printf("2. Libras a Kilogramos\n");
    printf("3. Gramos a Kilogramos\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese el valor: ");
    scanf("%lf", &valor);

    switch (opcion) {
        case 1:
            resultado = valor * 2.20462;
            printf("%.2f kg = %.2f lb\n", valor, resultado);
            break;
        case 2:
            resultado = valor / 2.20462;
            printf("%.2f lb = %.2f kg\n", valor, resultado);
            break;
        case 3:
            resultado = valor / 1000.0;
            printf("%.2f g = %.2f kg\n", valor, resultado);
            break;
        default:
            printf("Opcion no valida.\n");
    }
}

int main() {
    int opcion;

    do {
        printf("\n===== CONVERSOR DE UNIDADES =====\n");
        printf("1. Temperatura\n");
        printf("2. Longitud\n");
        printf("3. Peso\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: convertirTemperatura(); break;
            case 2: convertirLongitud(); break;
            case 3: convertirPeso(); break;
            case 4: printf("\nSaliendo del conversor...\n"); break;
            default: printf("\nOpcion no valida.\n");
        }
    } while (opcion != 4);

    return 0;
}
