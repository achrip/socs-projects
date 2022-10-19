#include <stdio.h>  

int main(){
    long long int hits, base_point=0, bonus_point=0;

    scanf("%lld", &hits); 

    base_point=hits*100; 

    for (int i=0; i<hits; i++){
        bonus_point+=50*i; 
    }

    printf("%lld\n", base_point+bonus_point);
    
    return 0; 
}