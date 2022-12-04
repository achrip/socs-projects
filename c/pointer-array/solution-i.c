#include <stdio.h>

int main() {
	int repetitions; 

	scanf("%d", &repetitions); 
	getchar(); 

	for (int i = 0; i < repetitions; i++) {
		int boxes; 
		scanf("%d", &boxes); 
		getchar(); 

		long long int array[boxes];
		for (int j = 0; j < boxes; j++) {
			scanf("%d", &array[j]);
			getchar(); 
		}
		printf("Case #%d:", i+1); 
		for (int j = 0; j < boxes; j++) {
			printf(" %d", array[boxes-1-j]);
		} printf("\n");
	}

	return 0;
}
