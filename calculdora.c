#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Funciones para operaciones básicas
double sumar(double a, double b) { return a + b; }
double restar(double a, double b) { return a - b; }
double multiplicar(double a, double b) { return a * b; }
double dividir(double a, double b) {
    if (b != 0) return a / b;
    printf("Error: División por cero.\n");
    return 0;
}

// Funciones científicas
double seno(double x) { return sin(x); }
double coseno(double x) { return cos(x); }
double tangente(double x) { return tan(x); }
double logaritmo(double x) {
    if (x > 0) return log(x);
    printf("Error: Logaritmo de un número no positivo.\n");
    return 0;
}
double exponente(double x) { return exp(x); }
double raiz_cuadrada(double x) {
    if (x >= 0) return sqrt(x);
    printf("Error: Raíz cuadrada de un número negativo.\n");
    return 0;
}

int main() {
    double num1, num2;
    int opcion;
    while (1) {
        printf("\nCalculadora Científica\n");
        printf("1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\n");
        printf("5. Seno\n6. Coseno\n7. Tangente\n8. Logaritmo\n");
        printf("9. Exponente\n10. Raíz Cuadrada\n11. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        if (opcion == 11) {
            printf("Saliendo...\n");
            break;
        }

        if (opcion >= 1 && opcion <= 4) {
            printf("Ingrese dos números: ");
            scanf("%lf %lf", &num1, &num2);
        } else if (opcion >= 5 && opcion <= 10) {
            printf("Ingrese un número: ");
            scanf("%lf", &num1);
        }

        switch(opcion) {
            case 1: printf("Resultado: %.2lf\n", sumar(num1, num2)); break;
            case 2: printf("Resultado: %.2lf\n", restar(num1, num2)); break;
            case 3: printf("Resultado: %.2lf\n", multiplicar(num1, num2)); break;
            case 4: printf("Resultado: %.2lf\n", dividir(num1, num2)); break;
            case 5: printf("Resultado: %.2lf\n", seno(num1)); break;
            case 6: printf("Resultado: %.2lf\n", coseno(num1)); break;
            case 7: printf("Resultado: %.2lf\n", tangente(num1)); break;
            case 8: printf("Resultado: %.2lf\n", logaritmo(num1)); break;
            case 9: printf("Resultado: %.2lf\n", exponente(num1)); break;
            case 10: printf("Resultado: %.2lf\n", raiz_cuadrada(num1)); break;
            default: printf("Opción no válida.\n");
        }
    }
    return 0;
}
