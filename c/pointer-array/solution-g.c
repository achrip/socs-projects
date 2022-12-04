#include <stdio.h>

int main() {
	int repetitions; 
	scanf("%d", &repetitions); 
	getchar(); 

	for (int i = 0; i < repetitions; i++) {
		long long int size; 
		scanf("%lld", &size); 
		getchar();

		long long int testsPassed[size];
		long long int testsBar[size];
		for (int j = 0; j < size; j++) {
			scanf("%lld", &testsPassed[j]); 
			getchar();
		}
		for (int j = 0; j < size; j++) {
			scanf("%lld", &testsBar[j]); 
			getchar(); 
		}
		int count = 0; 
		for (int j = 0; j < size; j++) {
			if (testsPassed[j] >= testsBar[j]) continue; 
			else count++; 
		}
		printf("Case #%d: %d\n", i+1, count);
	}
}
