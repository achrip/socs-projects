#include <stdio.h>

int main() {
	long long int cases; 
	scanf("%lld", &cases);
	getchar(); 

	const double pi = 3.14; 
	for (int i = 0; i < cases; i++) {
		double radius, height; 
		scanf("%lf %lf", &radius, &height); 
		getchar(); 

		double surfaceArea = 2 * pi * radius * (radius + height); 

		printf("Case #%d: %.2lf\n", (i + 1), surfaceArea); 
	}
	return 0;
}
