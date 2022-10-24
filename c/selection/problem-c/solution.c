#include <stdio.h>

void main(){
    int rep, cashbackA[1001], cashbackB[1001]; 

    scanf("%d", &rep); 
    getchar();

    for (int i=0; i<rep; ++i){
        scanf("%d %d", &cashbackA[i], &cashbackB[i]);
        getchar();
    }

    for (int i=0; i<rep; ++i){
        if (cashbackA[i]>cashbackB[i]){
            printf("Case #%d: Go-Jo\n", i+1);
        } else {
            printf("Case #%d: Bi-Pay\n", i+1);
        }
    }

}