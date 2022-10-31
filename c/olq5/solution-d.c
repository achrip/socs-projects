#include <stdio.h>

int main(){
    int num, sum = 0; 

    scanf("%d", &num); 
    getchar(); 

    for (int i=0; i<=num; i++){
        for (int j=0, k=num-i; j<=num, k>=0; j++, k--){
            sum++; 
        }
    }

    printf("%d\n", sum );

    return 0; 
}