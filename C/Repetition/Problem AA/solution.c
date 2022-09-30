#include <stdio.h> 

int main(){
    int dice, dice_rolls[12], final_sq; 

    scanf("%d", &dice);
    getchar();

    scanf("%d", &dice_rolls[1]);
    getchar();

    printf("%d", dice_rolls[1]);

   
        // if (!(dice_rolls[i]>=2 && dice_rolls[i]<=12)){
        //     continue;
        // }
        // final_sq += dice_rolls[i];

        // switch (final_sq)
        // {
        // case 9:
        //     final_sq = 21;
        //     break;
        
        // case 33: 
        //     final_sq = 42;
        //     break; 

        // case 76: 
        //     final_sq = 92; 
        //     break; 
        
        // case 53: 
        //     final_sq = 37; 
        //     break; 
        
        // case 80: 
        //     final_sq = 59; 
        //     break;
        
        // case 97: 
        //     final_sq = 88; 
        //     break;
        
        // default:
        //     break;
        // }

    printf("%d\n", final_sq);

    return 0;
}