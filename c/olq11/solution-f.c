#include <stdio.h>
#include <string.h>

typedef struct {
  char name[255]; 
  int value; 
} Data; 

void bubble_sort(Data *d, int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (d[j].value > d[j+1].value) {
        Data temp = d[j];
        d[j] = d[j+1]; 
        d[j+1] = temp; 
      } 
    }
  }
}

int binary_saerch(Data *d, const char *s, int size) {
  for (int i = 0; i < size; i++) {
    if (strcmp(d[i].name, s) == 0 ) return i;
  }

  return -1; 
}

int main() {
  int cases, dataCount; 
  scanf("%d", &cases); 
  getchar(); 

  for (int i = 0; i < cases; i++) {
    scanf("%d", &dataCount); 
    getchar();
    
    Data d[dataCount]; 
    for (int j = 0; j < dataCount; j++) {
     scanf("%s#%d", &d[j].name, &d[j].value); 
     getchar();
    }

    bubble_sort(d, dataCount); 

    char string[255]; 
    scanf("%s", &string); 
    getchar(); 

    int location = binary_saerch(d, string, dataCount); 

    printf("Case #%d: %d\n", (i + 1), (location + 1));
  }
}
