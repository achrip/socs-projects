#include <stdio.h>  

int main(){
    long long int hits, base_dmg, bonus_dmg;

    scanf("%lld", &hits); 

    base_dmg=hits*100; 

    for (int i=0; i<hits; i++){
        bonus_dmg+=50*i; 
    }

    printf("%lld\n", base_dmg+bonus_dmg);
    
    return 0; 
}