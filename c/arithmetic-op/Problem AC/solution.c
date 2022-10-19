#include <stdio.h>

int main(){
    long long int teams, chances=1, coin=2; 

    scanf("%lld", &teams); 
    
    while (teams != 0){
        chances *= coin; 
        teams--;
    }
    chances--;
    printf("%lld\n", chances);

    return 0; 
}