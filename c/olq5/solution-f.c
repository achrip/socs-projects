#include <stdio.h>

int main(){
    int repetitions, games;
    // 0=L, 1=B, 2=T
    char winner[101];

    scanf("%d", &repetitions);
    getchar();
    
    int result[repetitions];
    for (int i=0; i<repetitions; i++){
        int option[3]={0};
        scanf("%d", &games);
        getchar();

        for (int j=0; j<games; j++){
            scanf("%c", &winner[j]);



            if (winner[j] ==  'L') option[0]++;
            if (winner[j] ==  'B') option[1]++;
            if (winner[j] ==  'T') option[2]++;
            
        }
        getchar();

    if (option[0] > option[1]){
        result[i] = 0;
        continue;
    } else if (option[0] < option[1]){
        result[i] = 1;
        continue;
    } else if (option[0] == option[1]){
        result[i] = -1;
        continue;
    }


    }

    for (int i=0; i<repetitions; i++){
        switch (result[i]){
            case 0:
                printf("Lili\n");
                break;
            
            case 1:
                printf("Bibi\n");
                break; 

            case -1: 
                printf("None\n");
        }
    }
}