#include <stdio.h>

long long int facotrial (int i) {
    if (i == 0 || i == 1) return 1; 

    return (i * factorial(i-1)); 
}
int main() {
    int cases; 
    scanf("%d", &cases); 
    getchar(); 

    for (int i = 0; i < cases; i++) {
        int what; 
        scanf("%d", &what); 
        getchar(); 

        int array[what]; 
        long long int fArray[what]; 
        for (int j = 0; j < what; j++) {
            scanf("%d", &array[j]); 
            getchar(); 

            fArray[j] = factorial(array[j]); 
        }
    }
}