#include <stdio.h>
#include <string.h>

int main() {
    int cases; 
    scanf("%d", &cases); 
    getchar(); 

    for (int i = 0; i < cases; i++) {
        int index;
        char s0, s1, s[20]; 
        scanf("%d %c %c", &index, &s0, &s1); 
        getchar(); 

        if (index == 0) printf("Case #%d: %c\n", (i+1), s0); 
        else if (index == 1) printf("Case #%d: %c", (i+1), s1); 
        else {
            char temp[20];

            for (int j = 2; j < index; j++) {
                strcpy(temp, s1); 
                strcat(temp, s0);
                strcpy(s, temp);
                strcpy(s0, s1); 
                strcpy(s1, temp);   
            }
        }

        printf("Case #%d: %s\n", (i+1), s); 
    }
    return 0; 
}