// C Code to convert Decimal number into Binary
 
#include <stdio.h>
 
void decToBinary(long long int n, int x)
{
    // array to store binary number
    int binaryNum[32];
  
    // counter for binary array
    int i = 0;
    while (n > 0) {
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    printf("Case #%d: ", x+1);
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}
  
// Driver program to test above function
int main()
{
    int n ;
    long long int num;

    scanf("%d", &n);
    getchar(); 

    for (int i=0; i<n; i++) {
        scanf("%lld", &num);
        getchar();
        decToBinary(num, i);
        printf("\n");
    }
    return 0;
}