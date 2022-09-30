#include <stdio.h>  

int main(){
    int hits, base_point, bonus_point;

    scanf("%d", &hits); 

    base_point=hits*100; 

    for (int i=0; i<hits; i++){
        bonus_point+=50*i; 
    }

    printf("%d\n", base_point+bonus_point);
    
    return 0; 
}