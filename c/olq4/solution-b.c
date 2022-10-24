#include <stdio.h>

void main(){
    int throws, final_pos=0;

    scanf("%d", &throws);
    getchar();

    int dice[throws];
    for (int i=0; i<throws; ++i){
        scanf("%d", &dice[i]);
        getchar();

        final_pos += dice[i];

        switch (final_pos){
        // ladders
        case 9:
            final_pos = 21;
            break;
            
        case 33:
            final_pos = 42;
            break;

        case 76:
            final_pos = 92;
            break;

        // snakes
        case 53:
            final_pos = 37;
            break;

        case 80:
            final_pos = 59;
            break;

        case 97:
            final_pos = 88;
            break;
        
        default:
            break;
        }
    }

    printf("%d\n", final_pos);
}