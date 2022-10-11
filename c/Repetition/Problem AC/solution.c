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
        scanf("%d %d", &candy, &cash);
        getchar();

        // append each candy price to price array index
        for (int j=0; j<candy; j++){
            scanf("%d", &price[j]);
            getchar();
            // printf("harga permen %d = %d\n", j, price[j]);
        }

        // size_t x=sizeof(price);
        // // reallocate *price size
        // for (int j=0; j<x; j++){
        //     if (price[j]==0){
        //         price=realloc (price, j-1);
        //     }
        // }

        int cheapest=1000000; // create a variable to store cheapest candy
        // finds the cheapest candy money can buy
        for (int j=0; j<candy; j++){
            if (cheapest>=price[j]){
                cheapest = price[j];
            }
            // printf("cheapest = %d\n", cheapest);
        }
        
        do{
            if (cash<cheapest){
                break;
            } else{
                cash -= cheapest;
                bought[i]++;
            }
        } while (cash >=cheapest);
        

        // for (int j=0; j<candy || j<=cash; j++){
        //     int k=0;
        //     do
        //     {
        //         cash -= price[k];
        //         bought[j]++;
        //         k++;
        //     } while (cash>=price[k]);
            
        
    }

    free(price);
    for (int j=0; j<rep; j++){
        printf("Case #%d: %d\n", j+1, bought[j]);
    }
    free(bought);
    
    

    

}