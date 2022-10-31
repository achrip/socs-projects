#include <stdio.h>

int main(){
    int rep, leng[100], wid[100]; 
    char arr[100][100][100]={0};

    scanf("%d", &rep); 
    getchar(); 

    for (int i=0; i<rep; i++){
        scanf("%d %d", &leng[i], &wid[i]); 
        getchar(); 

        for (int j=0; j<leng[i]; j++){
            for (int k=0; k<wid[i]; k++){
                if (j==0 || k==0 ||
                k==wid[i]-1 || j==leng[i]-1){
                    arr[i][j][k]='#';
                } else {
                    arr[i][j][k]=' ';
                }
                
            }
        }
    }

    for (int i=0; i<rep; i++){
        printf("Case #%d:\n" , i+1); 
        for (int j=0; j<leng[i]; j++){
            for (int k=0; k<wid[i]; k++){
                printf("%c", arr[i][j][k]);
            }
            printf("\n");
        }
    }
}