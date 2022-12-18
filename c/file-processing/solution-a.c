#include <stdio.h>
#include <string.h>

struct data{
	char person[255];
	char tree[255];
};

int main() {	
    FILE *fp = fopen("testdata.in", "r");
    char name[255];
    int data, cases; 

    fscanf(fp, "%d\n", &cases);  
    
    struct data list[cases+1]; 
    for (int i = 0; i < cases; i++) {
            fscanf(fp, "%[^#]#%[^\n]\n", list[i].person, list[i].tree);
            // printf("name: %s\n", data_name[i]); 
    }
    data = cases;

    fscanf(fp, "%d\n", &cases);  

    int flag = -1; 
    for (int i = 0; i < cases; i++) {
        fscanf(fp, "%[^\n]\n", name); 
        printf("Case #%d: ", (i + 1)); 
    
        for (int j = 0; j < data; j++) {
            // printf("name: %s\n", data_name[j]); 
            
            if (strcmp(name, list[j].person) != 0) continue; 

            printf("%s\n", list[j].tree);
            flag = 0;
            break; 
        }
        if (flag != 0) printf("N/A\n");
        flag = -1; 
    }
    
    return 0; 
}
