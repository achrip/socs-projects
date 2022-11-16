#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char code[] = {"OIREASGTBP"};
    char codeUp[] = {"oireasgtbp"};
    char s[10001], ss[10001]; 
    scanf("%[^\n]", s); 
    getchar(); 

    for (int i = 0; i < strlen(s); i++) {
        for (int j = 0; j < strlen(code); j++){
            if (s[i] == code[j] || s[i] == codeUp[j]) {
                s[i] = j + '0'; 
            } 
        }
        s[i] = toupper(s[i]);
    }
    printf("%s\n", s); 

    return 0; 
}