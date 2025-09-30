#include <stdio.h>
#include <math.h>


int ehSeguro(double x, double y) {
    double altura = sin(cos(y) + x) + cos(y + sin(x));
    return (altura >= 0 && altura <= 2);
}

int main() {
    double x, y;
    int seguros = 0;
    
    printf("Digite as coordenadas (x y): ");
    scanf("%lf %lf", &x, &y);
    
   
    if (!ehSeguro(x, y)) {
        printf("troque de coordenada\n");
        return 0;
    }
    
    
    if (ehSeguro(x+2, y)) seguros++;
    if (ehSeguro(x-2, y)) seguros++;
    if (ehSeguro(x, y+2)) seguros++;
    if (ehSeguro(x, y-2)) seguros++;
    
   
    if (seguros <= 1) printf("inseguro\n");
    else if (seguros <= 3) printf("relativamente seguro\n");
    else printf("seguro\n");
    
    return 0;
}