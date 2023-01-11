#include <stdio.h>

typedef struct {
  char name[255], nim[15], postalCode[10], birthplace[255], birthdate[255]; 
  char school[255], bankAccNumber[15]; 
  int age, siblingCount, height; 
} Data;

int main() {
  Data student;
  int cases; 
  scanf("%d", &cases); 
  getchar(); 

  for (int i = 0; i < cases; i++) {
    scanf("%[^\n]\n%s\n%d\n%s\n%[^\n]\n%s\n%[^\n]\n%d\n%d\n%s", 
          &student.name, &student.nim, &student.age, &student.postalCode,
          &student.birthplace, &student.birthdate, &student.school, 
          &student.siblingCount, &student.height, &student.bankAccNumber); 
    
    getchar(); 

    printf("Nama: %s\n", &student.name);
    
  }
}
