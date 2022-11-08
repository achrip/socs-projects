#include <stdio.h>

int main(){
    int rep; 

    scanf("%d", &rep);                                  // scans for how many test cases
    getchar(); 

    int matrix_size, row[rep], col[rep], sum;           /* declare variable to store dimension of the matrix, 
                                                            column and row size, and sum of each column */ 

    int final[rep][500];                                // declare the array to store colsum of every test case

    for (int i = 0; i < rep; i++){                      // repeats the process for each test case
        scanf("%d", &matrix_size);                      // scans for the matrix dimension
        getchar();

        row[i] = matrix_size;                           // sets the row size for the current test case
        col[i] = matrix_size;                           // sets the row size for the current test case

        int matrix [matrix_size][matrix_size];          // set the matrix dimension for the current test case
        for (int j = 0; j < matrix_size; j++){          /*                              */
            for (int k = 0; k < matrix_size; k++){      /*      populate the matrix     */
                scanf("%d", &matrix[j][k]);             /*                              */
                getchar();
            }
        }

        for (int j = 0; j < matrix_size; j++){          
            sum = 0;                                    /*                                      */
            for (int k = 0; k < matrix_size; k++){      /*  count the column sum of the matrix  */
                sum += matrix[k][j];                    /*                                      */
            }                                           
            final[i][j] = sum;                          // append the column sum to the final array
        }
    }

    for (int i = 0; i < rep; i++){                      
        printf("Case #%d: ", i+1);                      /*                            */
        for (int j = 0; j < row[i]; j++){               /*                            */
        printf("%d", final[i][j]);                      /*  print every column sum of */
        if (j == row[i] - 1){                           /*    each test case matrix   */
            printf("\n");                               /*                            */
        } else {                                        /*                            */
            printf(" ");
        }
        }
    }

    return 0; 
}