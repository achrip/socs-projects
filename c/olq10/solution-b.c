#include <stdio.h>

int main() {
	FILE *fp = fopen("testdata.in", "r");  
	long int cases; 
	fscanf(fp, "%ld\n", &cases); 
	
	for (int i = 0; i < cases; i++) {
		long long int size, start, end; 
		fscanf(fp, "%lld %lld %lld\n", &size, &start, &end); 

		char string[size]; 
		fscanf(fp, "%[^\n]\n", string); 
		
		long long int count = 0; 
		for (int j = (start + 1); j < end; j++) {
			if (string[j] == 0) continue; 
			count++; 
		}

		printf("Case #%d: %lld\n", (i + 1), count); 
	return 0;  
}