#include <stdio.h>

int main() {
    int cases; 
    scanf("%d", &cases); 
    getchar(); 

    for (int i = 0; i < cases; i++) {
        int studentCount; 
        scanf("%d", &studentCount); 
        getchar(); 

        int max = 0;
        int array[studentCount];  
        for (int j = 0; j < studentCount; j++) {
            scanf("%d", &array[j]); 
            getchar(); 

            if (max < array[j]) max = array[j]; 
        }

        int count = 0; 
        for (int j = 0; j < studentCount; j++) {
            if (array[j] == max) count++; 
        }

        printf("Case #%d: %d\n", (i+1), count); 
    }

    return 0; 
}