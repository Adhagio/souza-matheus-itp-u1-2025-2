#include <stdio.h>


void normalizarHorario(int *horas, int *minutos) {
  
    *horas += *minutos / 60;
    *minutos = *minutos % 60;
    
    *horas = *horas % 24;
}

void imprimir24h(int horas, int minutos) {
    normalizarHorario(&horas, &minutos);
    printf("%02d:%02d\n", horas, minutos);
}

void imprimir12h(int horas, int minutos) {
    normalizarHorario(&horas, &minutos);
    char *periodo = "AM";
    int horas12 = horas;
    
    if (horas == 0) {
        horas12 = 12;
        periodo = "AM";
    } else if (horas == 12) {
        horas12 = 12;
        periodo = "PM";
    } else if (horas > 12) {
        horas12 = horas - 12;
        periodo = "PM";
    } else {
        periodo = "AM";
    }
    
    printf("%02d:%02d %s\n", horas12, minutos, periodo);
}


int main() {
    int horas, minutos, formato;
    
    
    printf("Digite a hora da primeira ronda (0-23): ");
    scanf("%d", &horas);
    printf("Digite os minutos da primeira ronda (0-59): ");
    scanf("%d", &minutos);
    printf("Digite o formato (0 para 24h, 1 para 12h): ");
    scanf("%d", &formato);
    
    printf("\nHorários das rondas:\n");
    
    
    printf("1. ");
    if (formato == 0) {
        imprimir24h(horas, minutos);
    } else {
        imprimir12h(horas, minutos);
    }
    
   
    printf("2. ");
    if (formato == 0) {
        imprimir24h(horas + 1, minutos);
    } else {
        imprimir12h(horas + 1, minutos);
    }
    
  
    printf("3. ");
    if (formato == 0) {
        imprimir24h(horas + 2, minutos + 10);
    } else {
        imprimir12h(horas + 2, minutos + 10);
    }
    
  
    printf("4. ");
    if (formato == 0) {
        imprimir24h(horas + 4, minutos + 40);
    } else {
        imprimir12h(horas + 4, minutos + 40);
    }
    
   
    printf("5. ");
    if (formato == 0) {
        imprimir24h(horas + 12, minutos + 5);
    } else {
        imprimir12h(horas + 12, minutos + 5);
    }
    
    return 0;
}