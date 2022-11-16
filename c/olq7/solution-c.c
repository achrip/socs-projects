// #include <stdio.h>

// long long int flagDuplicate(long long int n, long long int *arr); 

// int main() {
//     long long int size; 

//     scanf("%lld", &size); 
//     getchar(); 

//     long long int arr[size], count = size; 
//     for (int i = 0; i < size; i++) {
//         scanf("%lld", &arr[i]); 
//         getchar(); 
//     }
//     count -= flagDuplicate(size, arr); 
//     printf("%lld\n", count);

//     return 0; 
// }

// long long int flagDuplicate(long long int n, long long int *arr) {
//     int x = 0, temp[n]; 
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 for (int k = 0; k < n; k++) {
//                     if (temp[k] == arr[j]) continue; 
//                     else temp[k] = arr[j];
//                 }
//             }
//         } 
//     }

//     return x; 
// }
#include<stdio.h>
int main()
{
    int numbers[15] = {1,1,2,2,2,3,4,5,6,6,7,7,7,8,9}, i, j;
    int arr2[15], k = 0, k1 = 0;
    int flag = 0;
    for(i = 0; i < 15; i++)
    {
       for(j = 0; j < 15; j++)
       {
           flag = 0;
           if(i != j && numbers[i] == numbers[j])
           {
               for(k1 = 0; k1 < k; k1++)
                   if(arr2[k1] == numbers[j])
                     flag = 1;
               if(flag != 1)
                   arr2[k++] = numbers[j];
           }
       }
    }
    for(i = 0; i < k; i++)
      printf("Number %d has duplicate values\n",arr2[i]);
    return 0;
}