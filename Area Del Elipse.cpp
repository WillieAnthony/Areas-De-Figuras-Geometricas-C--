// Codigo en lenguaje C++ que solicite al usuario que ingrese la semieje mayor y la semieje menor de un elipse, calcule el area y muestre el resultado



#include <stdio.h>

int main() {
    float a, b, area;
    
    printf("AREA DEL ELIPSE\n\n\n");
    
    // Solicitar al usuario que ingrese la semieje mayor del Elipse
    printf("Ingrese La Semieje Mayor del Elipse: \n");
    scanf("%f", &a);
    
    printf("\n");
    
    // Solicitar al usuario que ingrese la semieje menor del Elipse
    printf("Ingrese La Semieje Menor del Elipse: \n");
    scanf("%f", &b);
    
    // Calcular el area del Elipse
    area = 3.1416 * a * b;
    
    printf("\n\n");
    
    // Mostrar el resultado
    printf("El Area del Elipse es: %.2f\n\n\n\n\n", area);
    
    printf("24/06/2024\n");
    printf("David Salazar Gonzalez\n");
    printf("Willie Anthony");
    
    return 0;
}