// #include <stdio.h>

// int flagDuplicate(int i, int *a); 

// int main() {
//     int size; 

//     scanf("%d", &size); 
//     getchar(); 

//     int arr[size], count = size; 
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]); 
//         getchar(); 
//     }
//     count -= flagDuplicate(size, arr); 
//     printf("%d\n", count);

//     return 0; 
// }

// int flagDuplicate(int n, int *arr) {
//     int x = 0; 
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) x++; 
//         } 
//     }

//     return x; 
// }
#include <stdio.h>

int main() {
    int size; 

    scanf("%d", &size); 
    getchar(); 

    long long int arr[5001] = {0}, count = 0, temp;  
    for (int i = 0; i < size; i++) {
        scanf("%lld", &temp); 
        getchar();
        if (arr[temp] == 0) {
            count++; 
            arr[temp]++;
        }
    }
    printf("%d\n", count);

    return 0; 
}
