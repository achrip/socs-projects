#include <stdio.h>
#define size 55

int main(){
    int rep, matrix_dimension, matrix_count=0; 
    long long int matrix[size][size], matrix1[size][size], matrix2[size][size];
    long long int matrix12[size][size], matrix123[size][size];
    long long int tmp;

    scanf("%d", &rep); 
    getchar(); 

    for (int i=0; i<rep; ++i){
        scanf("%d", &matrix_dimension);
        getchar();

        for (int j=0; j<matrix_dimension; ++j){
            for (int k=0; k<matrix_dimension; ++k){
                scanf("%lld", &matrix[j][k]);
                getchar(); 
            }
        }
        //printf("\n");
        for (int j=0; j<matrix_dimension; ++j){
            for (int k=0; k<matrix_dimension; ++k){
                scanf("%lld", &matrix1[j][k]);
                getchar(); 
            }
        }
        //printf("\n");
        for (int j=0; j<matrix_dimension; ++j){
            for (int k=0; k<matrix_dimension; ++k){
                scanf("%lld", &matrix2[j][k]);
                getchar(); 
            }
        }
        //printf("\n");
        tmp=0;
        for (int j=0; j<matrix_dimension; ++j){
            for (int k=0; k<matrix_dimension; ++k){
                for (int l=0; l<matrix_dimension; ++l){
                    matrix12[j][k] += matrix[j][l]*matrix1[l][k];
                }
            }
        }
        tmp=0;
        for (int j=0; j<matrix_dimension; ++j){
            for (int k=0; k<matrix_dimension; ++k){
                for (int l=0; l<matrix_dimension; ++l){
                    matrix123[j][k] += matrix12[j][l]*matrix2[l][k];
                }
            }
        }

        printf("Case #%d:\n", i+1); 
        for (int j=0; j<matrix_dimension; ++j){
            for (int k=0; k<matrix_dimension; ++k){
                printf("%lld", matrix123[j][k]);
                if (k==matrix_dimension-1){
                    printf("\n");
                } else {
                    printf(" ");
                }
            }
        }

    }

    // for (int i=0; i<rep; ++i){
    // }
    return 0;
}