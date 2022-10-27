#include <stdio.h>

int mode(int *input, int size){
int count[1001]={0};

    for (int i=0; i<size; i++){
        // count[input[i]]=0;
        count[input[i]]++;

        // puts("test");
    }
    // int size=sizeof(input)/4;
    // printf("size: %d", size);
    // for (int i=0; i<1001; ++i){
    //     printf("%d\n", count[i]);
    // }

    int index=1001;
    int banyak=0;
    for (int i=4; i>=0; i--){
        if (count[i]>count[i+1] && count[i]>banyak){
            banyak=count[i];
        }
        index--;
               printf("index: %d\n", banyak);
    }
    return banyak;
}
void main(){
    int item, input[1001]; 
    int a;

    scanf("%d", &item);
    getchar();

    for (int i=0; i<item; i++){
        scanf("%d", &input[i]);
        getchar();

    }

    a = mode(input, item);
    printf("%d\n", a);

}

// #include <stdio.h>

// int main (){
//     int items, type[1001], count[1001], mode=0;

//     scanf("%d", &items);
//     getchar();

//     for (int i=0; i<items; ++i){
//         count[i]=0;
//         scanf("%d", &type[i]);
//         getchar(); 

//         for (int j=0; j<items; ++j){
//             if (type[i]==type[j]){
//                 count[i]++; 
//             }
//         }
//                 // printf("count: %d\n", count[i]);

//         if (count[i]>mode){
//             mode=count[i];
//         }
//     }

//     printf("%d\n", mode);
//     return 0;

// }