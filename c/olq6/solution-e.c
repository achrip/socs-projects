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
                scanf("%d", &matrix[j][k]);
                getchar();
            }
        }

        for (int j = 0; j < matrix_size; j++){
            sum = 0; 
            for (int k = 0; k < matrix_size; k++){
                sum += matrix[k][j];
            }
            final[i][j] = sum;
        }
    }

    for (int i = 0; i < rep; i++){
        printf("Case #%d: ", i+1);
        for (int j = 0; j < row[i]; j++){
        printf("%d", final[i][j]);
        if (j == row[i] - 1){
            printf("\n");
        } else {
            printf(" ");
        }
        }
    }
}