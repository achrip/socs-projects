#include <stdio.h>
#include <string.h>


int main() {
  int cases; 
  scanf("%d", &cases);
  getchar(); 

  for (int i = 0; i < cases; i++) {
    char string[255]; 
    scanf("%[^\n]\n", string); 

    printf("Case #%d: ", (i +1)); 
    
    int length = strlen(string);
    for (int j = 0; j < length; j++) {
      if (string[j] == 'a' || string[j] == 'A') continue; 
      if (string[j] == 'i' || string[j] == 'I') continue;
      if (string[j] == 'u' || string[j] == 'U') continue; 
      if (string[j] == 'e' || string[j] == 'E') continue; 
      if (string[j] == 'o' || string[j] == 'O') continue;  
      printf("%c", string[j]);
    }
    printf("\n");  
  }  
  return 0; 
}
