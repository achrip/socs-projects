#include <stdio.h>

void floodfill(int y, int x, int size, int time); 

int main() {
  int cases; 
  scanf("%d", &cases); 
  getchar(); 

  FILE *fp = fopen("testdata.in", "r"); 

  for (int i = 0; i < cases; i++) {
    int fieldSize, time; 
    fscanf(fp, "%d %d\n", &fieldSize, &time); 

    char field[fieldSize][fieldSize], temp;
    int coordX, coordY; 

    // input field from file``
    for (int j = 0; j < fieldSize; j++) {
      for (int k = 0; k < fieldSize; k++) {
        temp = fgetc(fp); 
        if (temp != 'F') continue; 
        coordX = j; 
        coordY = k;
      }
    }
    getchar(); 
    
    floodfill(coordY, coordX, fieldSize, time); 
  }

  return 0; 
}

void floodfill(int y, int x, int size, int time) {

  return 
}
