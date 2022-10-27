#include <stdio.h>

char area();

int main(){
    int sisi; 
    scanf("%d", &sisi);
    getchar();

    char kotak[sisi][sisi];

    area(kotak, sisi);
    

}

char area(char **area, int sisi){
    for (int i=0; i<sisi; i){
        // strcpy(area[0][i], "#");
        area[0][i]='#'; 
        area[i][0]='#';
        area[sisi-1][i]='#';
        area[i][sisi-1]='#';
    }
    for (int i=1; i<sisi; i++){
        for (int j=1; j<sisi; j++){
            area[i][j]=' '; 
        }
    }
    
    for (int i=0; i<sisi; i++){
        for (int j=0; j<sisi; j++){
            printf("%c", area[i][j]);
        }
        printf("\n");
    }
    
}



// #include <stdio.h>

// void main(){
//     int a = 9; 
//     int *ptrA = &a; 

//     // *ptrA (dibaca variabel pointer a) merujuk/menyimpan memory address dari
//     // value 9. kebetulan memory address yang nyimpen value 9 == memory address var a
//     // jadi ketika kita mau panggil/print value yang disimpen oleh memory address tsb, keluar value 9

//     // *ptrA menyimpan memory address a (value sebuah pointer selalu memory address)
//     // a menyimpan value 9


//     int arr[5][5]; // ini value per index
//     // misal ini arr [row][col]


//     // printf("%d\n", a); 
//     // printf("%d\n", &a); 
//     // printf("%d\n", ptrA); kita summon value dr variable ptrA, dimana value nya itu memory address nya a
//     // printf("%d\n", *ptrA); kita summon value yang disimpen di memory address yang disimpen ptrA

//     // printf("%d\n", *arr); // arr (yang kebetulan sebuah array) ini sama seperti kita pake ptrA. karena dia menyimpan address 
//     // printf("%d\n", *arr); // disini fungsi [] == * . dimana mereka akan berfungsi seperti line 46
//     // printf("%d\n", *(arr+2)); // index aslinya memory address

//     scanf("%d", &arr[0][0]); // --> misal %d = 7. yang terjadi adalah ini terbaca seperti arr[0][0] = 7
//     getchar(); 

//     printf("%d\n", arr); 
//     printf("%d\n", *arr); // disini dia nyangkut di row
//     printf("%d\n", **arr); 
// }