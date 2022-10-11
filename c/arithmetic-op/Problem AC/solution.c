#include <stdio.h>

int main(){
    int teams, chances=1, coin=2; 

    scanf("%d", &teams); 
    
    while (teams != 0){
        chances *= coin; 
        teams--;
    }
    chances--;
    printf("%d\n", chances);

    return 0; 
}