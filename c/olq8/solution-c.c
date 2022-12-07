#include <stdio.h>

int main() {
    char s[21], ss[21], sss[21];
    char c[21], cc[21], ccc[21]; 
    scanf("%s %s %s", s, ss, sss); 
    getchar(); 
    
    scanf("%s %s %s", c, cc, ccc); 
    getchar(); 

    printf("%sszs %sszs %sszs\n", s, ss, sss); 
    printf("%sszs %sszs %sszs\n", c, cc, ccc); 
    return 0; 
}