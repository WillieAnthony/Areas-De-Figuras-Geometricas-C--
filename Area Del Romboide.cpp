// Codigo en lenguaje C++ que solicite al usuario que ingrese la base y la altura de un romboide, calcule el area y muestre el resultado



#include <stdio.h>

int main() {
    float base, altura, area;
    
    printf("AREA DEL ROMBOIDE\n\n\n");
    
    // Solicitar al usuario que ingrese la base del Romboide
    printf("Ingrese La Base del Romboide: \n");
    scanf("%f", &base);
    
    printf("\n");
    
    // Solicitar al usuario que ingrese la altura del Romboide
    printf("Ingrese La Altura del Romboide: \n");
    scanf("%f", &altura);
    
    // Calcular el area del Romboide
    area = base * altura;
    
    printf("\n\n");
    
    // Mostrar el resultado
    printf("El Area del Romboide es: %.2f\n\n\n\n\n", area);
    
    printf("24/06/2024\n");
    printf("David Salazar Gonzalez\n");
    printf("Willie Anthony");
    
    return 0;
}
