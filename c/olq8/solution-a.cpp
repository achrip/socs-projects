#include <stdio.h>

int main() {
    int row, col, queries; 
    scanf("%d %d %d", &row, &col, &queries); 
    getchar(); 

    int array[row][col] = {0};
    for (int i = 0; i < queries; i++) {
        int x, y, value; 
        scanf("%d %d %d", &x, &y, &value); 
        getchar(); 

        array[x][y] = value; 
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d", array[i][j]); 
            if (j != col-1) printf(" "); 
            else printf("\n"); 
        }
    }

    return 0;
}