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
            switch (string[j]) {
                case 'A' ... 'D':
                    temp = string[j] - 'A'; 
                    output[j] = (int)temp; 
                    string[j] = 'A'; 
                    break; 
                case 'E' ... 'H':
                    temp = string[j] - 'E'; 
                    output[j] = (int)temp; 
                    string[j] = 'E'; 
                    break; 
                case 'I' ... 'N':
                    temp = string[j] - 'I'; 
                    output[j] = (int)temp; 
                    string[j] = 'I'; 
                    break; 
                case 'O' ... 'T':
                    temp = string[j] - 'O'; 
                    output[j] = (int)temp; 
                    string[j] = 'O'; 
                    break; 
                case 'U' ... 'Z':
                    temp = string[j] - 'U'; 
                    output[j] = (int)temp; 
                    string[j] = 'U'; 
                    break; 
            }
            // somehow, OJ won't accept me using the decimals right off the bat -_-
        }

        printf("Case #%d:\n", i+1); 
        printf("%s\n", string); 
        for (int j = 0; j < strlen(string); j++) printf("%d", output[j]); 
        printf("\n");
    }
    return 0; 
}