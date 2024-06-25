// Codigo en lenguaje C++ que solicite al usuario que ingrese el lado y la apotema de un pentagono, calcule el area y muestre el resultado



#include <stdio.h>

int main() {
    float lado, apotema, area;
    
    printf("AREA DEL PENTAGONO\n\n\n");
    
    // Solicitar al usuario que ingrese el lado del Pentagono
    printf("Ingrese El Lado del Pentagono: \n");
    scanf("%f", &lado);
    
    printf("\n");
    
    // Solicitar al usuario que ingrese la apotema del Pentagono
    printf("Ingrese La Apotema del Pentagono: \n");
    scanf("%f", &apotema);
    
    // Calcular el area del Pentagono
    area = ( (lado * apotema) / 2) * 5;
    
    printf("\n\n");
    
    // Mostrar el resultado
    printf("El Area del Pentagono es: %.2f\n\n\n\n\n", area);
    
    printf("24/06/2024\n");
    printf("David Salazar Gonzalez\n");
    printf("Willie Anthony");
    
    return 0;
}