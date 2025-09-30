#include <stdio.h>

int main() {
    int m, n, i, s;
    int hasSticker[1001] = {0}; 

    
    scanf("%d %d", &m, &n);

   
    for (i = 0; i < n; i++) {
        scanf("%d", &s);
        if (s >= 1 && s <= m) {
            hasSticker[s] = 1;
        }
    }

   
    int first = 1;  
    for (i = 1; i <= m; i++) {
        if (hasSticker[i] == 0) {
            if (!first) {
                printf(" ");
            }
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}