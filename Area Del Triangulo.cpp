// Codigo en lenguaje C++ que solicite al usuario que ingrese la base y la altura de un triangulo, calcule el area y muestre el resultado



#include <stdio.h>

int main() {
    float base, altura, area;
    
    printf("AREA DEL TRIANGULO\n\n\n");
    
    // Solicitar al usuario que ingrese la base del Triangulo
    printf("Ingrese La Base del Triangulo: \n");
    scanf("%f", &base);
    
    printf("\n");
    
    // Solicitar al usuario que ingrese la altura del Triangulo
    printf("Ingrese La Altura del Triangulo: \n");
    scanf("%f", &altura);
    
    // Calcular el area del Triangulo
    area = (base * altura) / 2;
    
    printf("\n\n");
    
    // Mostrar el resultado
    printf("El Area del Triangulo es: %.2f\n\n\n\n\n", area);
    
    printf("24/06/2024\n");
    printf("David Salazar Gonzalez\n");
    printf("Willie Anthony");
    
    return 0;
}
