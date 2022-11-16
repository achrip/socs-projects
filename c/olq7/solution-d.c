#include <stdio.h>

int isSquare(int i); 
int isCubic(int i); 
int isPrime(int i); 

int main() {
    int rep; 
    
    scanf("%d", &rep); 
    getchar() ;

    int flagSq[rep], flagCb[rep], flagPr[rep]; 
    long long int arr[rep]; 
    for (int i = 0; i < rep; i++) {
        long long int temp; 
        scanf("%d", &temp); 
        getchar(); 

        flagSq[i] = isSquare(temp); 
        flagCb[i] = isCubic(temp); 
        flagPr[i] = isPrime(temp);

        // printf("temp: %d, %d, %d\n", flagSq[i], flagCb[i], flagPr[i]); 
    }

    for (int i = 0; i < rep; i++) {
        printf("Case #%d :", (i + 1));
        if (flagPr[i] == 1) printf(" prime"); 
        if (flagSq[i] == 1) printf(" square"); 
        if (flagCb[i] == 1) printf(" cubic"); 
        if (!flagCb[i] && !flagPr[i] && !flagSq[i])
            printf(" none");
        printf("\n");
    }

    return 0;
}

int isSquare(int i) {
    if (i == 0 || i == 1) 
        return 1; 
    int count = 0, temp = 0; 

    while (temp <= i) {
        count++; 
        temp = count * count; 
    }
    count--; 
        if (i == count * count) return 1; 
        else return 0; 
}
int isCubic(int i) {
    if (i == 0 || i == 1) 
        return 1; 
    int count = 0, temp = 0; 

    while (temp <= i) {
        count++; 
        temp = count * count * count; 
    }
    count--; 
        if (i == count * count * count) return 1; 
        else return 0; 
}
int isPrime(int i) {

    for (int j = 2; j <= i / 2; j++) 
        if (i % j == 0) return 0;

    return 1; 
}
