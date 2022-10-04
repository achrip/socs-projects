#include <stdio.h>

int main(){
    int i;
    char c[100], nim[8];

    scanf("%[^\n]s", c);
    getchar();

    scanf("%s %d", nim, &i);
    getchar();
    
    printf("Name: %s\n", c);
    printf("NIS: %s\n", nim);
    printf("Age: %d\n", i);

    return 0;
}