#include <stdio.h>
#include <string.h>

int main() {
    int cases; 
    scanf("%d", &cases); 
    getchar(); 

    for (int i = 0; i < cases; i++) {
        char string[100001];
        int array[27] = {0}; 
        int count = 0; 
        scanf("%s", string); 
        getchar(); 
        long long int len = strlen (string);

        for (int j = 0; j < len; j++) {
            array[string[j]-97]++; 
        }

        for (int j = 0; j < 27; j++) {
            if (array[j] != 0) count++;
        }

        printf("Case #%d: ", i+1); 
        if (count % 2 == 0) printf("Yay\n"); 
        else printf("Ewwww\n"); 
    }
    return 0;
}