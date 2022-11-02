#include <stdio.h>

int main(){
    int rep; 

    scanf("%d", &rep); 
    getchar(); 

    int matrix_size, row[rep], col[rep], sum; 
    int final[rep][500];
    for (int i = 0; i < rep; i++){
        scanf("%d", &matrix_size);
        getchar();

        row[i] = matrix_size; 
        col[i] = matrix_size;
        int matrix [matrix_size][matrix_size];
        for (int j = 0; j < matrix_size; j++){
            for (int k = 0; k < matrix_size; k++){
                scanf("%d", matrix[j][k]);
                getchar();
            }
        }

        for (int j = 0; j < matrix_size; j++){
            for (int k = 0; k < matrix_size; k++){
                sum = 0; 
                sum += matrix[k][j];
            }
            final[i][j] = sum;
        }
    }

    // for (int i = 0; i < rep; i++){
    //     for (int j = 0; j < row[i]; j++){
    //     printf("Case #%d: %d", i+1, final[i][j]);
    //     }
    //     printf("\n");
    // }
}