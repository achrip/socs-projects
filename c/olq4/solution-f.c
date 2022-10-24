#include <stdio.h>

void main(){
    int rep, cashback1[1001], cashback2[1001]; 

    scanf("%d", &rep); 
    getchar(); 

    for (int i=0; i<rep; ++i){
        scanf("%d %d", &cashback1[i], &cashback2[i]);
        getchar(); 
    }

    for (int i=0; i<rep; ++i){
        if (cashback1[i]>cashback2[i]){
            printf("Case #%d: Go-Jo\n", i+1);
        } else{
            printf("Case #%d: Bi-Pay\n", i+1);
        }
    }
}