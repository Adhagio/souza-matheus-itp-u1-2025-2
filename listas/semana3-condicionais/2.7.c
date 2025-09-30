#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2, real, imag;

   
    printf("Resolução da equação ax² + bx + c = 0\n");
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

  
    if (a == 0) {
        printf("Erro: Isso não é uma equação do segundo grau (a = 0)\n");
        return 1;
    }

    
    delta = b * b - 4 * a * c;

    printf("\n--- RESULTADO ---\n");
    printf("Equação: %.2fx² + %.2fx + %.2f = 0\n", a, b, c);
    printf("Delta (Δ) = %.2f\n", delta);

   
    if (delta > 0) {
        // Duas raízes reais distintas
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Duas raízes reais distintas:\n");
        printf("x₁ = %.2f\n", x1);
        printf("x₂ = %.2f\n", x2);
    } else if (delta == 0) {
        // Uma raiz real (raiz dupla)
        x1 = -b / (2 * a);
        printf("Uma raiz real (raiz dupla):\n");
        printf("x = %.2f\n", x1);
    } else {
        // Raízes complexas
        real = -b / (2 * a);
        imag = sqrt(-delta) / (2 * a);
        printf("Duas raízes complexas conjugadas:\n");
        printf("x₁ = %.2f + %.2fi\n", real, imag);
        printf("x₂ = %.2f - %.2fi\n", real, imag);
    }

    return 0;
}