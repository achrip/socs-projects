#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
    int rep, candy, cash;
    int *price, *bought; 

    price=(int*)calloc(11000,sizeof(int));
    bought=(int*)calloc(11000, sizeof(int));

    scanf("%d", &rep);
    getchar();

    for (int i=0; i<rep; i++){
        int cheapest=1000000; // create a variable to store cheapest candy
        scanf("%d %d", &candy, &cash);
        getchar();

        // append each candy price to price array index
        for (int j=0; j<candy; j++){
            scanf("%d", &price[j]);
            getchar();
            
            // finds the cheapest candy money can buy
            if (cheapest>=price[j]){
                cheapest = price[j];
            }
        }
        //append the amount bought to the array
        if (cash<cheapest){
            continue;
        } else{
            bought[i]=cash/cheapest;               
        }
    }

    free(price);
    for (int j=0; j<rep; j++){
        printf("Case #%d: %d\n", j+1, bought[j]);
    }
    free(bought);
    
    

    

}