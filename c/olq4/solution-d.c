#include <stdio.h>

int main(){
    long long int throws, final_pos=0;

    scanf("%lld", &throws);
    getchar();

    long long int dice[throws];
    for (int i=0; i<throws; ++i){
        scanf("%lld", &dice[i]);
        getchar();

        final_pos += dice[i];

        switch (final_pos){
        case 30:
            final_pos = 10;
            break;
            
        case 12:
            final_pos = 28;
            break;
            
        case 35:
            final_pos = 7;
            break;
        
        default:
            break;
        }
    }

    printf("%lld\n", final_pos);

    return 0;
}