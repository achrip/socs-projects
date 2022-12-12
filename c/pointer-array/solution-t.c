#include <stdio.h>
#include <string.h>
#define size 1001

int main() {
    int cases; 
    scanf("%d", &cases); 
    getchar(); 

    for (int i = 0; i < cases; i++) {
        char string[size];
        int output[size]; 
        scanf("%s", string); 
        getchar(); 

        for (int j = 0; j < strlen(string); j++) {
            int temp;
            if (string[j] >= 'A' && string[j] <= 'D') {
                temp = string[j] - 'A'; 
                output[j] = temp; 
                string[j] = 'A'; 
            }
            else if (string[j] >= 'E' && string[j] <= 'H') {
                temp = string[j] - 'E'; 
                output[j] = temp; 
                string[j] = 'E'; 
            }
            else if (string[j] >= 'I' && string[j] <= 'N'){
                temp = string[j] - 'I'; 
                output[j] = temp; 
                string[j] = 'I'; 
            }
            else if (string[j] >= 'O' && string[j] <= 'T'){
                temp = string[j] - 'O'; 
                output[j] = temp; 
                string[j] = 'O'; 
            }
            else if (string[j] >= 'U' && string[j] <= 'Z'){
                temp = string[j] - 'U'; 
                output[j] = temp; 
                string[j] = 'U'; 
            }
        }

        printf("Case #%d:\n", i+1); 
        printf("%s\n", string); 
        for (int j = 0; j < strlen(string); j++) printf("%d", output[j]); 
        printf("\n");
    }
    return 0; 
}