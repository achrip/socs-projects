#include <stdio.h>

void main(){
    int arr[5], num, tmp; 

    // scanf("%d", &i); 
    // scanf("%d", &j); 
    // scanf("%d", &k);

    for (int i=0; i<3; i++){
        scanf("%d", &num);
        for (int j=0; j<2; j++){
            tmp=num%10;
            num=num/10;
        }
        arr[i]=tmp; 
    } 

    for (int i=0; i<3; i++){
        printf("%d\n", arr[i]);
    }
}