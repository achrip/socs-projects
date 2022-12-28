#include <stdio.h>

int main() {
    int cases; 
    scanf("%d", &cases); 
    getchar(); 

    for (int i = 0; i < cases; i++) {
        long long int bleh, bluh, hleb = 0; 
        scanf("%lld", &bleh); 
        getchar(); 

        long long int we = bleh; 
        while (we != 0) {
            bluh = we % 10; 
            hleb = hleb * 10 + bluh; 
            we /= 10; 
        }

        printf("Case #%d: %lld\n", (i + 1), bleh + hleb); 
    }
}