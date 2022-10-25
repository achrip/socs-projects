#include <stdio.h>

int main(){
    int dice, throws, final_pos=0;

    scanf("%d", &throws);
    getchar();

    for (int i=0; i<throws; ++i){
        scanf("%d", &dice);
        getchar();

        final_pos += dice;
        
        switch (final_pos){
        case 30:
            final_pos=10; 
            break;
        
        case 12:
            final_pos=28; 
            break;
        
        case 35:
            final_pos=7;
            break;

        default:
            break;
        }
        
        if (final_pos>39){
            final_pos-=40;
        }

    }
    // for (int i=0; i<throws; ++i){
    //     for (int j=0; j<dice[i]; ++j){
    //         final_pos++; 

    //         if (final_pos==30){
    //             final_pos=10;
    //             continue;
    //         } else if (final_pos=12){
    //             final_pos=28;
    //             continue;
    //         } else if (final_pos=35){
    //             final_pos=7;
    //             continue;
    //         } else if (final_pos>39) {
    //             final_pos-=39;
    //             continue;
    //         }
            
    //     }
    // }

    printf("%d\n", final_pos);

    return 0;
}