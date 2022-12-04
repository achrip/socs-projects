#include <stdio.h>
#include <string.h>

int main() {
    int testCases; 
    scanf("%d", &testCases);    
    getchar(); 

    for (int i = 0; i < testCases; i++) {
        int changeCount; 
        char string[1001];
        scanf("%s", string); 
        getchar();  
        scanf("%d", &changeCount); 
        getchar(); 

        for (int j = 0; j < changeCount; j++) {
            char from, to; 
            scanf("%c %c", &from, &to);
            getchar(); 

            for (int k = 0; k < strlen(string); k++) {
                if (string[k] == from) string[k] = to; 
            }
        }

        printf("Case #%d: %s\n", i+1, string); 
    }
    return 0; 
}