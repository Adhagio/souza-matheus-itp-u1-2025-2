#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin;
    
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9/5) + 32;
    
    kelvin = celsius + 273.15;

    printf("Temperatura em Fahrenheit: %.1f°F\n", fahrenheit);
    printf("Temperatura em Kelvin: %.1fK\n", kelvin);
    
    return 0;
}