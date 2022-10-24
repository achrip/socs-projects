#include <stdio.h>

void main(){
    long long int count[1001], male_froggie, female_froggie; 
    int rep;

    scanf("%d", &rep); 
    getchar();

    for (int i=0; i<rep; ++i){
        scanf("%lld %lld", &male_froggie, &female_froggie); 
        getchar();

        count[i]=male_froggie%female_froggie;
    }

    for (int i=0; i<rep; ++i){
        if (count[i]==0){
            printf("Case #%d: Party time!\n", i+1); 
        } else{
            printf("Case #%d: Need more frogs\n", i+1); 
        }
    }
}
