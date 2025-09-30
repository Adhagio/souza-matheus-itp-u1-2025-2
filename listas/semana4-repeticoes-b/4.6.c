#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    
    printf("Trios pitagóricos com c < 1000:\n");
    
   
    for (a = 1; a < 1000; a++) {
       
        for (b = a; b < 1000; b++) {
          
            c = (int)sqrt(a * a + b * b);
            
           
            if (c < 1000 && a * a + b * b == c * c) {
                printf("%d, %d, %d\n", a, b, c);
            }
        }
    }
    
    return 0;
}