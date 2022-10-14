#include <stdio.h>

int main(){
    int eq1a, eq1b, eq2a, eq2b, eq3a, eq3b; 

    scanf("%d %*c %d %*c", &eq1a, &eq1b);
    getchar();
    scanf("%d %*c %d %*c", &eq2a, &eq2b);
    getchar();
    scanf("%d %*c %d %*c", &eq3a, &eq3b);
    getchar();

    printf("%d\n", eq1a+eq1b);
    printf("%d\n", eq2a+eq2b);
    printf("%d\n", eq3a+eq3b);

    return 0;
}