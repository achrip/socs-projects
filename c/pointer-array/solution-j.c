#include <stdio.h>
#include <string.h>

int main() {
	int testCases; 
	scanf("%d", &testCases); 
	getchar(); 

	for (int i = 0; i < testCases; i++) {
		char string[1001];
		scanf("%s", string); 
		getchar(); 
		
		printf("Case %d: ", i+1); 
		for (int j = 0; j < strlen(string); j++) {
			printf("%d", string[j]); 
			if (j != strlen(string) - 1) printf("-"); 
			else printf("\n");
		}
	}
	return 0; 
}
