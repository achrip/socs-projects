#include <stdio.h>
#include <string.h>

// const char *fibo_string(int n, char *first, char *second){
// 	if(n == 0) return first; 
	
// 	if(n == 1) return second;
	
// 	// puts("yo");
// 	char prev[200], prev2[200], current[200]; 
// 	strcpy(prev, fibo_string(n-1, first, second));
// 	strcpy(prev2, fibo_string(n-2, first, second)); 
	
// 	return strcat(prev, prev2);
// }

int main() {
    int cases; 
    scanf("%d", &cases); 
    getchar(); 

    for (int i = 0; i < cases; i++) {
        int index;
        // char s0, s1;
	    char s[20][2000]; 
        scanf("%d %s %s", &index, &s[0], &s[1]); 
        getchar(); 

        for (int j = 2; j <= index; j++) {
            s[j][0] = '\0';
            strcpy(s[j], s[j-1]); 
            strcat(s[j], s[j-2]); 
        }
        printf("Case #%d: %s\n", (i+1), s[index]); 
    }
    return 0; 
}
