#include <stdio.h>

int main() {
    int size; 
    scanf("%d", &size); 
    getchar(); 

    char picture[size][size]; 
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%c", &picture[i][j]); 
        }
        getchar(); 
    }

    for (int i = size - 1; i >= 0; i--) {
        for (int j = size - 1; j >= 0; j--) {
            printf("%c", picture[i][j]); 
        }
        printf("\n"); 
    }
    return 0; 
}