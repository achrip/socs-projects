#include <stdio.h>

int main(){
    long long int rep, pages, destination;

    scanf("%lld", &rep); 
    getchar(); 

    long long int flips[rep]; 

    for (int i=0; i<rep; i++){
        flips[i] = 0; 
        scanf("%lld %lld", &pages, &destination); 
        getchar();  

       flips[i] = ((destination/2) < ((pages/2)-(destination/2))) ? destination/2:((pages/2)-(destination/2));

    }

    for (int i=0 ; i<rep; i++){
        printf("Case #%d: %d\n", i+1, flips[i]); 
    }

    return 0; 
}

// #include <stdio.h>

// int main(){
//     long long int rep, pages, destination;

//     scanf("%lld", &rep); 
//     getchar(); 

//     long long int flips[rep]; 

//     for (int i=0; i<rep; i++){
//         flips[i] = 0; 
//         scanf("%lld %lld", &pages, &destination); 
//         getchar();  
//         // pages=a, destination = b
//         long long int x = destination/2; 
//         long long int y = pages/2-x; 

//         flips[i] = (x < y) ? x:y;

//     }

//     for (int i=0 ; i<rep; i++){
//         printf("Case #%d: %lld\n", i+1, flips[i]); 
//     }

//     return 0; 
// }