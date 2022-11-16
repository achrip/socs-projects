#include <stdio.h> 
#include <string.h> 

void reverse(); 

int main() {
    int rep; 
    char s[1001];

    scanf("%d", &rep); 
    getchar(); 

    for (int i = 0; i < rep; i++) {
        scanf("%[^\n]", s); 
        getchar(); 

        printf("Case #%d: ", (i + 1)); 
        reverse(s); 
        printf("\n"); 
    }

    return 0; 
}

void reverse(char *sentence) {
    
    for (int i = strlen(sentence) - 1; i >= 0; i--) {
        printf("%c", sentence[i]);
    }
    
}