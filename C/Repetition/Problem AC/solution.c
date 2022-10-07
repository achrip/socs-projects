#include <stdio.h>

void main(){
    int rep, candy, cash;
    unsigned int price[11000], bought[11000], tmp[11000]; 

    scanf("%d", &rep);
    getchar();

    for (int i=0; i<rep; i++){
        bought[i]=0;
        scanf("%d %d", &candy, &cash);
        getchar();

        for (int j=0; j<candy; j++){
            scanf("%d", &price[j]);
            getchar();
        }

        for (int j=0; j<candy || j<=cash; j++){
            if (cash>=price[j]){
                cash -= price[j];
                bought[i]++;
            }
        }
    }
    
    for (int j=0; j<rep; j++){
        printf("Case #%d: %d\n", j+1, bought[j]);
    }
    
    

    

}