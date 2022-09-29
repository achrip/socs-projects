#include <stdio.h>
#include <string.h>
#define id_size 10

int main(){ 
    char id[id_size], name[100], class;
    int num, size;

    do{    
        scanf("%s", id);
        getchar();
    }while(strlen(id) != id_size);
        
    scanf("%[^\n]s", name);
    getchar();
    
    scanf("%c %d", &class, &num);

    printf("ID\t: %s\n", id);
    printf("Name\t: %s\n", name);
    printf("Class\t: %c\n", class);
    printf("Num\t: %d\n", num);

    return 0;
}