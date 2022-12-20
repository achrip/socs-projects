#include <stdio.h>

int buffer = 1000000007;

long long int factorial (int i) {
    // printf("Factorial: %d\n", i); 
    if (i == 0 || i == 1) return 1; 

    // printf("Factorial %d = %d * factorial(%d)\n", i, i, i-1);  
    return ((i *( factorial(i-1)) % buffer)); 
}

int main() {
    int cases; 
    scanf("%d", &cases); 
    getchar(); 

    for (int i = 0; i < cases; i++) {
        int what; 
        scanf("%d", &what); 
        getchar(); 

        // int array[what];
        int temp; 
        long long int sum = 1; 
        for (int j = 0; j < what; j++) {
            scanf("%d", &temp); 
            getchar(); 

            sum *= factorial(temp); 
            sum %= buffer;
            // printf("sum = %lld\n", sum); 
        }

        printf("Case #%d: %lld\n", (i+1), (sum));
    }

    return 0; 
}