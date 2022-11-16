#include <stdio.h> 
#include <string.h>

int checkString(); 

int main() {
    int rep; 

    scanf("%d", &rep); 
    getchar(); 

    int result[rep];
    for (int i = 0 ; i < rep; i++) {
        result[i] = checkString(); 
    }

    for (int i = 0; i < rep; i++) {
        if (result[i] == 0){
            printf("Case #%d: Yay, it's a palindrome\n", (i + 1)); 
        }
        else { 
            printf("Case #%d: Nah, it's not a palindrome\n", (i + 1));
        }
    }

    return 0; 
}

int checkString() {
    char s[501]; 
    int count = 0; 

    scanf("%s", s); 
    getchar(); 

    for (int i = 0, j = strlen(s) - 1; i < strlen(s), j >= 0; i++, j--) { 
        if (s[i] == s[j]) count++; 
    }

    if (count == strlen(s)) return 0; 
    else return -1; 
}