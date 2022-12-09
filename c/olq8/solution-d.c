#include <stdio.h>

int main() {
	int cases; 
	scanf("%d", &cases); 
	getchar(); 

	for (int i = 0; i < cases; i++) {
		int patternCount; 
		long int rooms; 
		scanf("%ld %d", &rooms, &patternCount);
		getchar();
		
		int pattern[patternCount];
		for (int j = 0; j < patternCount; j++) {
			scanf("%d", &pattern[j]); 
			getchar();
		}
		
		int array[rooms];
		for (int j = 0; j < rooms; j++) array[j] = 0; 
		
		int flag = 0; 
		for (int j = 0; j < patternCount; j++) {
			int k = pattern[j]; 
			int temp = pattern[j];
			for (k; k <= rooms; k += temp) {
				if (k == 1) {
					if (flag == 0) flag = 1; 
					else flag = 0;
					break; 
				}
				else {
					if (array[k - 1] == 0) array[k - 1] = 1;
					else array[k - 1] = 0;
				}
			}
		}
		long int count = 0; 
		printf("Case #%d:", i + 1); 
		for (int j = 0; j < rooms; j++) {
			if (flag == 0) {
				if (array[j] != 0) count++; 
				else printf(" %d", j + 1); 
			} else {
				if (array[j] == 0) count++;
				else printf(" %d", j + 1);
			}
		}
		if (count == rooms) printf(" No room left!"); 
		printf("\n");
	}
	return 0;
}		
