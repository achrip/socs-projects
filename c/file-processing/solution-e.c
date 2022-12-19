#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fp = fopen("testdata.in", "r");
	int cases;
	int size; 

	fscanf(fp, "%d\n", &cases); 
		
	for (int i = 0; i < cases; i++) {
		fscanf(fp, "%d\n", &size); 
		
		int array[size]; 
		for (int j = 0; j < size; j++) {
			if ( j == size -1) { 
				fscanf(fp, "%d\n", &array[j]); 
				continue;
			}
			fscanf(fp, "%d ", &array[j]); 
		}

		long long int perimeter = 0; 
		long long int area = 0;

		for (int j = 0; j < size; j++) {
			area += 4 * array[j];

			if (j < 1) {
				perimeter += 2 * array[j]; 
				if (array[j] > array[j+1]) perimeter += (array[j] - array[j+1]) * 2;
			}
			else if (j > size - 2) {
				perimeter += 2 * array[j]; 
				if (array[j] > array[j-1]) perimeter += (array[j] - array[j-1]) * 2;
			}
			else {
				if (array[j] > array[j-1] && (j-1) >= 0) perimeter += (array[j] - array[j-1]) * 2;
				if (array[j] > array[j+1] && (j+1) <= size-1) perimeter += (array[j] - array[j+1]) * 2;
			}

		}

		perimeter += 4 * size; 

		printf("Case #%d: %lld %lld\n", (i+1), perimeter, area); 
	}
	fclose(fp);
	return 0; 
}