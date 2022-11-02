#include <stdio.h>
#include <string.h>

int main(){
    int rep; 

    scanf("%d", &rep);
    getchar(); 

    char s[rep][1001], temp[rep][1001];
    for (int i = 0; i < rep; i++){
        // for (int j = 0; j >= 0; j++){   
            // temp[i][j] = 0;             
            scanf("%s", temp[i]);
            getchar();
            // if (temp[i][j] == '\n') {
            //     temp[i][j] = '\0';
            //     break;
            // }
        // }

        int ngeng = strlen(temp[i])-1;
        for (int j = 0; j < strlen(temp[i]); j++){
            s[i][j] = temp[i][ngeng];
            ngeng--;
        }
    }  

    for (int i = 0; i < rep; i++){
        printf("Case #%d : ", i+1);
        for (int j = 0; j < strlen(s[i]); j++){
            printf("%c", s[i][j]);
            if (j == strlen(s[i]) - 1) printf("\n");
        } 
    }

    return 0;
}