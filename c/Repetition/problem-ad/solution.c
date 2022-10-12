// #include <stdio.h>

// int mode(int input[]){
//     int count[1001];

//     for (int i=0; input[i]; i++){
//         count[input[i]]=0;
//         count[input[i]]++;
//     }

//     int size=sizeof(input)/sizeof(int);
//     int index=size-1;
//     for (int i=size-2; i>=0; i--){
//         if (count[i]>=count[index]){
//             index=i;
//         }
//     }
//     return index;
// }
// void main(){
//     int item, input[1001]; 
//     int a;

//     scanf("%d", &item);
//     getchar();

//     for (int i=0; i<item; i++){
//         scanf("%d", &input[i]);
//         getchar();

//     }

//     a = mode(input);
//     printf("%d\n", a);

// }

#include <stdio.h>

int main (){
    int items, type[1001], count[1001], mode=0;

    scanf("%d", &items);
    getchar();

    for (int i=0; i<items; ++i){ 
        count[i]=0;
        scanf("%d", &type[i]);
        getchar(); 

        for (int j=0; type[i]; ++j){
            if (type[i]==type[j]){
                count[i]++; 
            }
        }

        if (count[i]>mode){
            mode=count[i];
        }
    }

    printf("%d\n", mode);
    return 0;

}