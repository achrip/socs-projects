#include<stdio.h>

int main(){ 
    long num1, num2, sum; 

    scanf("%ld %ld", &num1, &num2);

    sum = 0;
    for (long i = num1; i <= num2; i++){
        sum += i; 
    }
    printf("%ld\n", sum);

    return 0; 
}