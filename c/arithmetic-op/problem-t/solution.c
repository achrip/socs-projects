#include <stdio.h>

void main(){
    int hr_start, min_start, hr_end, min_end; 
    char course_code[15];

    for (int i=0; i<5; ++i){
        scanf("%s %d:%d-%d:%d", course_code, &hr_start, &min_start, &hr_end, &min_end); 
        getchar();
        printf("%s %02d:%02d-%02d:%02d\n", course_code, hr_start-1, min_start, hr_end-1, min_end);
    }
}
