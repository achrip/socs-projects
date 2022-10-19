#include <stdio.h>

void main(){
    int hr_start[10], min_start[10], hr_end[10], min_end[10]; 
    char course_code[10][10];

    for (int i=0; i<5; ++i){
        scanf("%s %d:%d-%d:%d", course_code[i], &hr_start[i], &min_start[i], &hr_end[i], &min_end[i]); 
        getchar();

        hr_start[i]--;
        hr_end[i]--;
        
        switch (hr_start[i]){
        case 6:
            hr_start[i]=24;
            break;

        case 25: 
            hr_start[i]=8;
            break; 

        default:
            break;
        }

        switch (hr_end[i]){
        case 6:
            hr_end[i]=24;
            break;

        case 25: 
            hr_end[i]=8;
            break; 
                    
        default:
            break;
        }
    }

    for (int i=0; i<5; ++i){
        printf("%s %02d:%02d-%02d:%02d\n", course_code[i], hr_start[i], min_start[i], hr_end[i], min_end[i]);
    }
}