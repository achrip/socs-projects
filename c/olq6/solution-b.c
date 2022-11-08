#include <stdio.h>

int main(){
    int rep; 
    
    scanf("%d", &rep); 
    getchar(); 

    int arr[rep], idx[rep], tmp[rep]; 

    for (int i = 0; i < rep; i++) {
        scanf("%d", &idx[i]); 
        getchar(); 
    }

    for (int i = 0; i < rep; i++) {
        scanf("%d", &tmp[i]); 
        getchar(); 
    }

    for (int i = 0; i < rep; i++) {
        arr[idx[i]] = tmp[i];
    }

    for (int i = 0; i < rep; i++) {
        printf("%d", arr[i]); 
        
        if (i == rep-1) printf("\n"); 
        else printf(" ");
    }

    return 0; 
}