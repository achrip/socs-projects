// #include <stdio.h> 
// #include <string.h>

// int main(){
//     int rep, toy, rm, rm1, rm2, rm3; //variable needed by problem
//     int i, j, temp, x, y; //variable needed by loops
//     int sum[10], tmp[10];
//     scanf("%d", &rep); 
//     getchar();

//     // starts an input loop for each case
//     for (i=0; i<rep; i++){
//         scanf("%d %d %d %d %d", &toy, &rm, &rm1, &rm2, &rm3);
//         getchar();
//     } i=1;
    
//     for (j=0; j<rep; j++){
//         //finds the amount of kelipatan rm within the range of 1 - toy
//         do
//         {
//             temp = rm*i;
//             if (temp >= toy){
//                 break;
//             }
//             i++;
//         } while (i<=toy);
//         tmp[0]=i;   // array tmp's 0th index will store the amount of kelipatan rm
//         i=1; temp=0;    
        
//         //finds the amount of kelipatan rm1 within the range of 1 - toy
//         do
//         {
//             temp = rm1*i;
//             if (temp >= toy){
//                 break;
//             }
//             i++;
//         } while (i<=toy);
//         tmp[1]=i;
//         i=1; temp=0;
        
//         //finds the amount of kelipatan rm2 within the range of 1 - toy
//         do
//         {
//             temp = rm2*i; 
//             if (temp >= toy){
//                 break;
//             }
//             i++;
//         } while (i<=toy);
//         tmp[2]=i;   
//         i=1; temp=0;

//         //finds the amount of kelipatan rm3 within the range of 1 - toy
//         do
//         {
//             temp = rm3*i; 
//             if (temp >= toy){
//                 break;
//             }
//             i++;
//         } while (i<=toy);
//         tmp[3]=i;
//         i=0; temp=0;

//         //append the sum of toys yeeted per case to sum[]
//         do
//         {
//             sum[j] += tmp[i];
//             i++;
//         } while (i<4);
//         i=1;
        
//     }
//     //prints the cases and the remaining toy count
//     for(i=0; i<rep; i++){
//         printf("Case #%d: %d\n", i+1, sum[i]);
//     }
    
//     return 0;
// }

// #include <stdio.h>  

// void main(){
//     int rep, toys, rm1, rm2, rm3, rm4;
//     int p, q, r, s;
//     int tmp1[10001], tmp2[10001], tmp3[10001], tmp4[10001], threw[101];

//     // scans how many cases there will be
//     scanf("%d", &rep); 
//     getchar();

//     // starts an input loop for each case while also calculating 
//     // if a toy is thrown away or not
//     for (int i=0; i<rep; i++){
//         scanf("%d %d %d %d %d", &toys, &rm1, &rm2, &rm3, &rm4);
//         getchar();
//         threw[i]=0; tmp1[i]=0; tmp2[i]=0; tmp3[i]=0; tmp4[i]=0; 

//         for (int j=1; j<=toys; j++){
//             tmp1[j-1]=j*rm1;
//             tmp2[j-1]=j*rm2;
//             tmp3[j-1]=j*rm3;
//             tmp4[j-1]=j*rm4;

//             if (tmp1[j-1]<tmp2[j-1]&&tmp1[j-1]<tmp3[j-1]&&tmp1[j-1]<tmp4[j-1]){
//                 int lowest=tmp1[j-1]; 
//                 if (lowest>toys){
//                 break; 
//             }
//             } else if (tmp2[j-1]<tmp1[j-1]&&tmp2[j-1]<tmp2[j-1]&&tmp2[j-1]<tmp3[j-1]){
//                 int lowest=tmp2[j-1];
//                 if (lowest>toys){
//                 break; 
//             } 
//             } else if (tmp3[j-1]<tmp1[j-1]&&tmp3[j-1]<tmp2[j-1]&&tmp3[j-1]<tmp4[j-1]){
//                 int lowest=tmp3[j-1]; 
//                 if (lowest>toys){
//                 break; 
//             }
//             } else if (tmp4[j-1]<tmp1[j-1]&&tmp4[j-1]<tmp2[j-1]&&tmp4[j-1]<tmp3[j-1]){
//                 int lowest=tmp4[j-1]; 
//                 if (lowest>toys){
//                 break; 
//             }
//             }
            
//             // if (tmp1[i]==tmp2[j]){
//             //     tmp2[j]=NULL; 
//             // } else if (tmp)
    
//             // }

//             printf("%d %d %d %d\n", tmp1[j-1], tmp2[j-1], tmp3[j-1], tmp4[j-1]);
            

//         }
//     }
// }

#include <stdio.h>

void main(){
    int rep, toys, rm1, rm2, rm3, rm4, count[rep]; 
    int p, q, r, s;

    // scans how many cases there will be
    scanf("%d", &rep); 
    getchar();

    // starts an input loop for each case while also calculating 
    // if a toy is thrown away or not
    for (int i=0; i<rep; i++){
        count[i]=0;
        scanf("%d %d %d %d %d", &toys, &rm1, &rm2, &rm3, &rm4);
        getchar();

        for (int j=1; j<=toys; j++){
            p=j%rm1;
            q=j%rm2;
            r=j%rm3;
            s=j%rm4;

            if (p==0||q==0||r==0||s==0){
                count[i]++;
            }
        }
    }

    for (int i=0; i<rep; i++){
        printf("%d\n", count[i]);
    }
}