// Codigo en lenguaje C++ que solicite al usuario que ingrese el radio de un circulo, calcule el area y muestre el resultado



#include <stdio.h>

int main() {
    float radio, area;
    
    printf("AREA DEL CIRCULO\n\n\n");
    
    // Solicitar al usuario que ingrese el radio del Circulo
    printf("Ingrese El Radio del Circulo: \n");
    scanf("%f", &radio);
    
    printf("\n");
    
    // Calcular el area del Circulo
    area = (3.1416) * (radio * radio);
    
    printf("\n\n");
    
    // Mostrar el resultado
    printf("El Area del Circulo es: %.2f \n\n\n\n\n", area);
    
    printf("24/06/2024\n");
    printf("David Salazar Gonzalez\n");
    printf("Willie Anthony");
    
    return 0;
}