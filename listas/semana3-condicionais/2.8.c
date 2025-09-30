#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, temp;
    float a2, b2, c2;

    printf("Digite os três lados do triângulo: ");
    scanf("%f %f %f", &a, &b, &c);

  
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        temp = b;
        b = c;
        c = temp;
    }

   
    if (a >= b + c) {
        printf("Os valores %.2f, %.2f, %.2f NÃO formam um triângulo!\n", a, b, c);
        printf("A soma de dois lados deve ser maior que o terceiro lado.\n");
        return 1;
    }

    printf("Os valores %.2f, %.2f, %.2f formam um triângulo.\n", a, b, c);

    printf("Classificação quanto aos lados: ");
    if (a == b && b == c) {
        printf("Equilátero\n");
    } else if (a == b || b == c || a == c) {
        printf("Isósceles\n");
    } else {
        printf("Escaleno\n");
    }

    a2 = a * a;
    b2 = b * b;
    c2 = c * c;

    printf("Classificação quanto aos ângulos: ");
    if (fabs(a2 - (b2 + c2)) < 0.0001) { 
        printf("Retângulo\n");
    } else if (a2 < b2 + c2) {
        printf("Acutângulo\n");
    } else {
        printf("Obtusângulo\n");
    }

    return 0;
}