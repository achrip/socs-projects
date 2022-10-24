#include <stdio.h>

void main(){
    int rep, packs_needed[1001], packs_avail, packs_sold, onHand[1001];

    scanf("%d", &rep); 
    getchar();

    for (int i=0; i<rep; ++i){
        scanf("%d %d %d", &packs_needed[i], &packs_avail, &packs_sold);
        getchar();

        onHand[i]=packs_avail+packs_sold;
    }


    for (int i=0; i<rep; ++i){
        if (onHand[i]>=packs_needed[i]){
            printf("Case #%d: yes\n", i+1);

        } else{
            printf("Case #%d: no\n", i+1);
        }
    }
}