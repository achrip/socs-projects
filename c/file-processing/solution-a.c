#include <stdio.h>
#include <string.h>

//create struct to categorize the data from the file
struct data{
	char person[255];
	char tree[255];
};

int main() {	
    // create variable to store the memory address of file 'testdata.in'
    FILE *fp = fopen("testdata.in", "r");

    // create variable to store the name that will be searched
    char name[255];

    // create variable to store the count of testcases
    int data, cases; 

    // scans for how many datas would be inserted into the program
    fscanf(fp, "%d\n", &cases);  
    
    // create array with struct data type to store the data from the file 
    // in the form of an object of said struct
    struct data list[cases+1]; 

    // read the data from the file as much as the value that was stored 
    // in the file
    for (int i = 0; i < cases; i++) {
            // read the data from each line of the file, and append to the
            // corresponding object attribute of each array index
            fscanf(fp, "%[^#]#%[^\n]\n", list[i].person, list[i].tree);
    } 

    // save the data count that the program has in another variable
    // to be accessed later
    data = cases;

    // scan how many datas the program will search for 
    fscanf(fp, "%d\n", &cases);  

    for (int i = 0; i < cases; i++) {
        // create a flag to check if we've found the name 
        // we are looking for or not
        int flag = -1;

        // scan one line from the file, that is the name we will be 
        // searching from the array
        fscanf(fp, "%[^\n]\n", name); 
        printf("Case #%d: ", (i + 1)); 
    
        // check every data index to find a name that matches the one we 
        // are looking for
        for (int j = 0; j < data; j++) {
            // if the name of current index is not the one we are looking for, 
            // continue searching the next index
            if (strcmp(name, list[j].person) != 0) continue; 

            // print the tree species that the said person have planted
            printf("%s\n", list[j].tree);

            // mark that we've found the name we are looking for
            flag = 0;

            // break from the loop 
            break; 
        }

        // if we did not find the name we are looking for
        if (flag != 0) printf("N/A\n");
    }

    // close the file 'testdata.in'
    fclose(fp);
    
    return 0; 
}
