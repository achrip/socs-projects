#include<stdio.h>

int main (){
    int i, j, k, l, m; 

    scanf("%d%d", &i, &j);
     m = j-i; 

    int p[m]; 

    for (k=0; k<=m; k++ ){
        p[k] = i; 
        i++;
    }

    for (k=0; k<=m; k++){
        l += p[k];
    }
    printf("%d\n", l);

    return 0; 
}