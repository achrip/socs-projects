#include <stdio.h>


int main() {
    int cases; 
    scanf("%d", &cases);
    getchar(); 

    for (int i = 0; i < cases; i++) {
        int day; 
        scanf("%d", &day); 
        getchar(); 

        long long int p = 0, q = 1, likes; 
        if (day == 1) printf("Case #%d: %lld\n", (i + 1), p);
        else if (day == 2) printf("Case #%d: %lld\n", (i + 1), q);
        else {
            for (int j = 0; j < day - 2; j++) {
                likes = p + q; 
                p = q; 
                q = likes; 
            }
            printf("Case #%d: %lld\n", (i + 1), likes);
        }
    }
    return 0; 
}