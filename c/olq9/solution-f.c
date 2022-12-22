#include <stdio.h>
typedef struct {
    char title[2042]; 
    char author[2042]; 
    long int views;
} Data;
void sort(Data *yt, int size );
int main() {
    FILE *fp = fopen("testdata.in", "r"); 
    Data yt[101];

    int i = 0; 
    while (!feof(fp)){
        fscanf("%[^#]#%[^#]%d\n", yt[i].title, yt[i].author, yt[i].views); 
        i++; 
    }
    fclose(fp);
}