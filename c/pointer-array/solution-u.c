#include <stdio.h>

int main() {
    int cases; 
    scanf("%d", &cases); 
    getchar(); 

    for (int i = 0; i < cases; i++) {
        int set; 
        scanf("%d", &set); 
        getchar(); 

        long int array[set]; 
        for (int j = 0; j < set; j++) {
            scanf("%ld", &array[j]);
            getchar(); 
        }
        int bibi_pos, lili_pos; 
        scanf("%d %d", &bibi_pos, &lili_pos); 
        getchar(); 

        long int bibi_value = array[bibi_pos - 1];
        long int lili_value = array[lili_pos - 1];

        printf("Case #%d :", (i + 1));
        if (bibi_value > lili_value) printf(" Bibi\n");
        else if (bibi_value == lili_value) printf(" Draw\n");
        else printf(" Lili\n");
    }
    return 0; 
}