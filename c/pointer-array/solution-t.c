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
                case 65 ... 68:
                    temp = string[j] - 65; 
                    output[j] = (int)temp; 
                    string[j] = 'A'; 
                    break; 
                case 69 ... 72:
                    temp = string[j] - 69; 
                    output[j] = (int)temp; 
                    string[j] = 'E'; 
                    break; 
                case 73 ... 78:
                    temp = string[j] - 73; 
                    output[j] = (int)temp; 
                    string[j] = 'I'; 
                    break; 
                case 79 ... 84:
                    temp = string[j] - 79; 
                    output[j] = (int)temp; 
                    string[j] = 'O'; 
                    break; 
                case 85 ... 89:
                    temp = string[j] - 85; 
                    output[j] = (int)temp; 
                    string[j] = 'U'; 
                    break; 
            }
        }

        printf("Case #%d:\n", i+1); 
        printf("%s\n", string); 
        for (int j = 0; j < strlen(string); j++) printf("%d", output[j]); 
        printf("\n");
    }
    return 0; 
}