#include <stdio.h>
#include <string.h>


int main() {
    FILE *fp = fopen("testdata.in", "r"); 

    int cases; 
    fscanf(fp, "%d\n", &cases); 

    for (int i = 0; i < cases; i++) {
        char string[255], rom[27] = {}, flag[27] = {};
        fscanf(fp, "%[^\n]\n", string);

        int changes, leng = strlen(string); 
        fscanf(fp, "%d\n", &changes); 

        char from, to;
        for (int k = 0; k < changes; k++) {
            fscanf(fp, "%c %c\n", &from, &to);

            if (flag[from - 'A'] == 0) {
                for (int j = 0; j < leng; j++){
                    if (string[j] == from) string[j] = to; 
                } 
                flag[from - 'A']++;
            }
        }

        for (int j = 0; j < leng; j++) rom[string[j] - 'A']++;  

        for (int j = 0; j < 27; j++) {
            if (rom[j] > 0) printf("%c %d\n", 'A'+j, rom[j]);
        } 
    }

    return 0; 
}