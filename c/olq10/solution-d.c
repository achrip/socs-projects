#include <stdio.h>

int main() {
  int cases; 
  scanf("%d", &cases);  
  getchar(); 

  for (int i = 0; i < cases; i++) {
    int cuts; 
    scanf("%d", &cuts); 
    getchar(); 

    printf("Case %d: ", (i + 1)); 
    long long int final = 1; 
    for (int j = 0; j < cuts; j++) {
      final += j; 
      printf("%lld", final); 
      if (j == cuts - 1) printf("\n") ;
      else printf(" "); 
    }
  }
  return 0;
}
