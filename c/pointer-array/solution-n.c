#include <stdio.h>

int main() {
	int testCases, position; 
	scanf("%d", &testCases); 
	getchar(); 

	for (int i = 0; i < testCases; i++) {
		long long int size; 
		scanf("%lld", &size); 
		getchar(); 

		long long int array[size], max = -2000000, belowMax = -2000000; 
		for (int j = 0; j < size; j++) {
			scanf("%lld", &array[j]);
			getchar(); 
		}
		for (int j = 0; j < size; j++) {
			if (array[j] > max) {
				max = array[j]; 
				position = j; 
			}
		} 
		for (int j = 0; j < size; j++) {
			if (j == position) continue; 
			if (array[j] > belowMax) belowMax = array[j];
		}
		printf("Case #%d: %lld\n", i+1, max + belowMax); 
	}
	return 0; 
}
