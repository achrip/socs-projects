#include <stdio.h>
#include <string.h>

typedef struct Data{ 
    char name[255]; 
    char nim[255]; 
} student; 

// void merge_sort(student *data, int left, int right);
// void merge(student *data, int left, int mid, int right); 
void swap(student *a, student *b) {
	student temp = *a; 
	*a = *b; 
	*b = temp; 
}

int main() {
    FILE *fp = fopen("./testdata.in", "r"); 
    int cases; 
    fscanf(fp, "%d\n", &cases); 

    student data[cases];
    for (int i = 0; i < cases; i++) {
        fscanf(fp, "%s %[^\n]\n", &data[i].nim, &data[i].name); 
    }
    fclose(fp);
    // merge_sort(data, 0, cases - 1);

	for (int j = 0; j < cases; j++) {
		for (int k = j + 1; k < cases; k++) {
			if (strcmp(data[j].nim, data[k].nim) > 0) swap(&data[j], &data[k]); 
		}
	} 

    for (int i = 0; i < cases; i++) {
	    printf("%s %s\n", data[i].nim, data[i].name); 
    }
    
}

// void merge_sort(student *data, int left, int right) {
// 	if(left >= right) return; 

// 	int mid = (left + right) / 2; 
// 	merge_sort(data, left, mid); 
// 	merge_sort(data, (mid + 1), left); 
// 	merge(data, left, mid, right);
// }

// void merge(student *data, int left, int mid, int right) {
// 	int size_left = (mid - left) + 1; 
// 	int size_right = right - mid; 

// 	student array_left[size_left]; 
// 	student array_right[size_right];

// 	for (int i = 0; i < size_left; i++) array_left[i] = data[left+i];
// 	for (int i = 0; i < size_right; i++) array_right[i] = data[mid + 1 + i];

// 	int index_left = 0, index_right = 0; 
// 	int index_data= left;

// 	while (index_left < size_left && index_right < size_right) {
// 		if(array_left[index_left].nim < array_right[index_right].nim) {
// 			data[index_data] = array_left[index_left]; 
// 			index_left++;
// 			index_data++;
// 		}
// 		else {
// 			data[index_data] = array_right[index_right]; 
// 			index_right++;
// 			index_data++;
// 		}
// 	}

// 	while (index_left < size_left) {
// 		data[index_data] = array_left[index_left];
// 		index_left++;
// 		index_data++;
// 	}

// 	while (index_right < size_right) {
// 		data[index_data] = array_right[index_right];
// 		index_right++; 
// 		index_data++;
// 	}
// }