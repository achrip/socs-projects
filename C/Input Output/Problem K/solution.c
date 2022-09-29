#include <stdio.h>

int main(){
    int i, j;
    char c[100];

    scanf("%s", c);
    getchar();

    do{
        scanf("%d", &i);
        getchar();
    } while (!(i > 0 && i <= 99999999));

    scanf("%d", &j);
    
    printf("Name: %s\n", c);
    printf("NIS: %d\n", i);
    printf("Age: %d\n", j);

    return 0;
}