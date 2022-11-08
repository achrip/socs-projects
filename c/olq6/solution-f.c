#include <stdio.h>
#include <string.h>

int main(){
    int rep; 

    scanf("%d", &rep);
    getchar(); 

    char s[rep][1001];
    for (int i = 0; i < rep; i++){          
            scanf("%s", s[i]);
            getchar();
    }  

    for (int i = 0; i < rep; i++){
        printf("Case #%d : ", i+1);
        for (int j = strlen(s[i]) - 1; j >= 0; j--){
            printf("%c", s[i][j]);
        } printf("\n"); 
    }

    return 0;
}