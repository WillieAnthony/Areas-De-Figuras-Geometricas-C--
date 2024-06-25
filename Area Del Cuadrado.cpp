// Codigo en lenguaje C++ que solicite al usuario que ingrese la base y la altura de un cuadrado, calcule el area y muestre el resultado



#include <stdio.h>

int main() {
    float base, altura, area;
    
    printf("AREA DEL CUADRADO\n\n\n");
    
    // Solicitar al usuario que ingrese la base del Cuadrado
    printf("Ingrese La Base del Cuadrado: \n");
    scanf("%f", &base);
    
    printf("\n");
    
    // Solicitar al usuario que ingrese la altura del Cuadrado
    printf("Ingrese La Altura del Cuadrado: \n");
    scanf("%f", &altura);
    
    // Calcular el area del Cuadrado
    area = base * altura;
    
    printf("\n\n");
    
    // Mostrar el resultado
    printf("El Area del Cuadrado es: %.2f\n\n\n\n\n", area);
    
    printf("24/06/2024\n");
    printf("David Salazar Gonzalez\n");
    printf("Willie Anthony");
    
    return 0;
}