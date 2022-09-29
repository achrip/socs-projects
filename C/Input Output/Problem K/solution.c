#include <stdio.h>

int main(){
    int i, j;
    char c[100];

    scanf("%[^\n]s", c);
    getchar();

    do{
        scanf("%d %d", &i, &j);
        getchar();
    } while (!(i > 0 && i <= 99999999));
    
    printf("Name: %s\n", c);
    printf("NIS: %d\n", i);
    printf("Age: %d\n", j);

    return 0;
}