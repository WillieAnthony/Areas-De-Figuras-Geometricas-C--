// Codigo en lenguaje C++ que solicite al usuario que ingrese la base mayor, la base menor y la altura de un trapecio, calcule el area y muestre el resultado



#include <stdio.h>

int main() {
    float B, b, altura, area;
    
    printf("AREA DEL TRAPECIO\n\n\n");
    
    // Solicitar al usuario que ingrese la base mayor del Trapecio
    printf("Ingrese La Base Mayor del Trapecio: \n");
    scanf("%f", &B);
    
    printf("\n");
    
    // Solicitar al usuario que ingrese la base menor del Trapecio
    printf("Ingrese La Base Menor del Trapecio: \n");
    scanf("%f", &b);
       
    printf("\n");
    
    // Solicitar al usuario que ingrese la altura del Trapecio
    printf("Ingrese Altura del Trapecio: \n");
    scanf("%f", &altura);

    // Calcular el area del Trapecio
    area = ((B + b) * altura) / 2;
    
    printf("\n\n");
    
    // Mostrar el resultado
    printf("El Area del Trapecio es: %.2f\n\n\n\n\n", area);
    
    printf("24/06/2024\n");
    printf("David Salazar Gonzalez\n");
    printf("Willie Anthony");
    
    return 0;
}