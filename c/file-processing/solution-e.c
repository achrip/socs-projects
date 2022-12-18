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

		for (int i = 0; i < size; i++) {
			area += 4 * array[i];
			if (i < 1 || i > size - 2) perimeter += 2 * array[i];
			if (array[i] > array[i-1] && (i-1) >= 0) perimeter += (array[i] - array[i-1]) * 2;
			if (array[i] > array[i+1] && (i+1) <= size-1) perimeter += (array[i] - array[i+1]) * 2;
		}

		perimeter += 4 * size; 

		printf("Case #%d: %lld %lld\n", (i+1), perimeter, area); 
	}
	fclose(fp);
	return 0; 
}