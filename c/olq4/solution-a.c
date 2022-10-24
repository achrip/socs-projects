#include <stdio.h>

void main(){
    int days, viewCount[101], friendCount; 
    int dayStart, dayEnd, sum[101];

    scanf("%d", &days);
    getchar(); 

    for (int i=1; i<=days; ++i){
        scanf("%d", &viewCount[i]);
        getchar(); 
    }

    scanf("%d", &friendCount);
    getchar();

    for (int i=1; i<=friendCount; ++i){
        sum[i]=0;
        scanf("%d %d", &dayStart, &dayEnd); 
        getchar(); 

        if (dayStart==dayEnd){
            sum[i]=viewCount[dayStart];
        } else{
            for (int j=dayStart; j<=dayEnd; ++j){
                sum[i]+=viewCount[j];
            }
        }

    }

    for (int i=0; i<friendCount; ++i){
        printf("Case #%d: %d\n", i+1, sum[i+1]);
    }
}