// Codigo en lenguaje C++ que solicite al usuario que ingrese la diagonal mayor y la diagonal menor de un rombo, calcule el area y muestre el resultado



#include <stdio.h>

int main() {
    float D, d, area;
    
    printf("AREA DEL ROMBO\n\n\n");
    
    // Solicitar al usuario que ingrese la diagonal mayor del Rombo
    printf("Ingrese La Diagonal Mayor del Rombo: \n");
    scanf("%f", &D);
    
    printf("\n");
    
    // Solicitar al usuario que ingrese la diagonal menor del Rombo
    printf("Ingrese La Diagonal Menor del Rombo: \n");
    scanf("%f", &d);
    
    // Calcular el area del Rombo
    area = (D * d) / 2;
    
    printf("\n\n");
    
    // Mostrar el resultado
    printf("El Area del Rombo es: %.2f\n\n\n\n\n", area);
    
    printf("24/06/2024\n");
    printf("David Salazar Gonzalez\n");
    printf("Willie Anthony");
    
    return 0;
}