#include <stdio.h>

void main(){
    int rep, number, bitshifter, result[5]; 

    scanf("%d", &rep); 
    getchar(); 

    for (int i=0; i<rep; i++){
        scanf("%d %d", &number, &bitshifter);
        getchar();

        result[i]=0;
        result[i]=(((number/bitshifter)<<bitshifter));

    }
    
    for (int i=0; i<rep; i++){
        printf("%d\n", result[i]);
    }

}