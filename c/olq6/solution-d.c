#include <stdio.h>
#include <string.h>

int main() {
    int rep; 

    scanf("%d", &rep); 
    getchar(); 

    char string[rep][1001];
    for (int i = 0; i < rep; i++) {
        scanf("%s", string[i]);
        getchar(); 
    }

    for (int i = 0; i < rep; i++) {
        printf("Case %d: ", i+1);
        for (int j = strlen(string[i]) - 1; j >= 0; j--) {
            printf("%d", string[i][j] % 2);
        }
        printf("\n"); 
    }

    return 0; 
}