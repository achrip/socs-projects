#include <stdio.h>

int main() {
    // create variable to store the memory address of file 'testdata.in'
    FILE *fp = fopen("testdata.in", "r"); 

    // create variable to store values from the file
    int a, b; 

    // scan the data (values) from the file 
    fscanf(fp, "%d %d", &a, &b);
    
    // close the file 'testdata.in'
    fclose(fp); 
    
    // print the sum of the two values of the file 
    printf("%d\n", a+b);

    return 0; 
}