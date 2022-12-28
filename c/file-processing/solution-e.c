#include <stdio.h>
#include <stdlib.h>

int main() {
    // create variable to store the memory address of file 'testdata.in'
	FILE *fp = fopen("testdata.in", "r");

	// create variable to store test case count
	int cases;

	// create variable to store array size
	int size; 

	// scan the amount of testcase from file
	fscanf(fp, "%d\n", &cases); 
	
	// do this for every test case
	for (int i = 0; i < cases; i++) {
		// scan for the array size
		fscanf(fp, "%d\n", &size); 
		
		// create array of said size
		int array[size]; 

		// do this to fill the array 
		for (int j = 0; j < size; j++) {
			if ( j == size -1) { 
				fscanf(fp, "%d\n", &array[j]); 
				continue;
			}
			fscanf(fp, "%d ", &array[j]); 
		}

		// declare + initialize variable to store perimeter and area
		long long int perimeter = 0; 
		long long int area = 0;

		// do this for every stack of cubes
		for (int j = 0; j < size; j++) {
			// calculate area of cube stack
			area += 4 * array[j];

			// if the cube is the left-most 
			if (j < 1) {
				// add the left side of the stack to perimeter
				perimeter += 2 * array[j]; 

				// if this stack is higher than the previous stack, 
				// count the sides that did not meet the previous stack
				if (array[j] > array[j+1]) perimeter += (array[j] - array[j+1]) * 2;
			}
			// if the cube is the right-most
			else if (j > size - 2) {
				// add the right side of the stack to perimeter
				perimeter += 2 * array[j]; 

				// if this stack is higher than the previous stack, 
				// count the sides that did not meet the previous stack
				if (array[j] > array[j-1]) perimeter += (array[j] - array[j-1]) * 2;
			}
			// if the cube is at the middle of the array(?)
			else {
				// if this stack is higher than the previous stack, 
				// count the sides that did not meet the previous stack
				if (array[j] > array[j-1] && (j-1) >= 0) perimeter += (array[j] - array[j-1]) * 2;

				// if this stack is higher than the next stack, 
				// count the sides that did not meet the next stack
				if (array[j] > array[j+1] && (j+1) <= size-1) perimeter += (array[j] - array[j+1]) * 2;
			}

		}

		// add the top and bottom side of a stack to the perimeter
		// and multiply by the amount of stacks
		perimeter += 4 * size; 

		// display the perimeter and area of the cube stack
		printf("Case #%d: %lld %lld\n", (i+1), perimeter, area); 
	}
	// close the opened file 'testdata.in'
	fclose(fp);
	return 0; 
}