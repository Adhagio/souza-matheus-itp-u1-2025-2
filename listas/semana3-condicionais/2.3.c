#include <stdio.h>

int main() {
    float n1, n2, n3, media, notaFinal;

  
    printf("Digite as três notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3.0;
    
    printf("Média: %.2f\n", media);

   
    if (media >= 7.0) {
        printf("Situação: Aprovado\n");
    } else if (media < 4.0) {
        printf("Situação: Reprovado\n");
    } else {
        printf("Situação: Recuperação\n");
        
       
        notaFinal = 10.0 - media;
        

        if (notaFinal <= 10.0) {
            printf("Nota necessária na prova final: %.2f\n", notaFinal);
        } else {
            printf("Infelizmente, não é possível ser aprovado na recuperação.\n");
        }
    }

    return 0;
}