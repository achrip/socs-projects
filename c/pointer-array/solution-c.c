#include <stdio.h> 

int main() {
    int items, revisions; 

    scanf("%d", &items);                     // scans for the number of items 
    getchar();                               // jojo wants to spectate

    long long int prices[items];
    for (int i = 0; i < items; i++) {       // populates the array with each item's prices
        scanf("%lld", &prices[i]);
        getchar(); 
    }

    scanf("%d", &revisions);                // scans for the number of price revisions made
    getchar(); 
    
    for (int i = 0; i < revisions; i++) {   // repeats the process below for the number of revisions
        int index, newPrice; 
        scanf("%d %d", &index, &newPrice);  // scans for which item has had a price revision
        getchar(); 

        prices[index - 1] = newPrice;           // appends the new revised price to the array

        printf("Case #%d: ", (i+1));        // prints the current status quo of item prices
        for (int j = 0; j < items; j++) {
            printf("%d", prices[j]); 
            if (j == items - 1) printf("\n"); 
            else printf(" ");
        }
    }

    return 0; 
}