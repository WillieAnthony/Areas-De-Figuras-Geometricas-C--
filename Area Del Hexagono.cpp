// Codigo en lenguaje C++ que solicite al usuario que ingrese el lado y la apotema de un hexagono, calcule el area y muestre el resultado



#include <stdio.h>

int main() {
    float lado, apotema, area;
    
    printf("AREA DEL HEXAGONO\n\n\n");
    
    // Solicitar al usuario que ingrese el lado del Hexagono
    printf("Ingrese El Lado del Hexagono: \n");
    scanf("%f", &lado);
    
    printf("\n");
    
    // Solicitar al usuario que ingrese la apotema del Hexagono
    printf("Ingrese La Apotema del Hexagono: \n");
    scanf("%f", &apotema);
    
    // Calcular el area del Hexagono
    area = ( (lado * apotema) / 2) * 6;
    
    printf("\n\n");
    
    // Mostrar el resultado
    printf("El Area del Hexagono es: %.2f\n\n\n\n\n", area);
    
    printf("24/06/2024\n");
    printf("David Salazar Gonzalez\n");
    printf("Willie Anthony");
    
    return 0;
}