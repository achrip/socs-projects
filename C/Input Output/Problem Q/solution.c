#include <stdio.h>

int main(){ 
    char name[100];

    scanf("%[^\n]s", name);

    printf("Halo %s\n", name);
    

    return 0;
}