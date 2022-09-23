#include<stdio.h>

int main (){
    long i, j, k, l, m; 

    scanf("%ld %ld", &i, &j);
     m = j-i; 

    long p[m]; 
    l = 0; //to assure nothing goes wrong, explicitly
           //declare that value of l is zero

    for (k=0; k<=m; k++ ){ 
    //explicitly defer the loop statements so nothing goes south
        p[k] = i; 
        i++;
        l += p[k];
    }
    printf("%ld\n", l);

    return 0; 
}