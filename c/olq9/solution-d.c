#include <stdio.h>

typedef struct Data{ 
    char name; 
    char nim; 
} student; 



int main() {
    FILE *fp = fopen("testdata.in", "r"); 
    int cases; 
    fscanf(fp, "%d\n", &cases); 

    student data[cases];
    for (int i = 0; i < cases; i++) {
        fscanf(fp, "%s %[^\n]\n", data[i].name, data[i].nim); 
    }

    mergeSort(data); 
    
}