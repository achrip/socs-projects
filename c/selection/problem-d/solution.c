#include <stdio.h>

void main(){
    long long int count[1001], male_froggie, female_froggie; 
    int rep;

    scanf("%d", &rep); 
    getchar();

    for (int i=0; i<rep; ++i){
        scanf("%lld %lld", &male_froggie, &female_froggie); 
        getchar();
        
        int tmp; 
        if (male_froggie > female_froggie) tmp = male_froggie/female_froggie; 
        else tmp = female_froggie / male_froggie; 

        count[i]=tmp%2;
    }

    for (int i=0; i<rep; ++i){
        if (count[i]==0){
            printf("Case #%d: Party time!\n", i+1); 
        } else{
            printf("Case #%d: Need more frogs\n", i+1); 
        }
    }
}
