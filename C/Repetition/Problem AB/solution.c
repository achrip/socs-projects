#include <stdio.h> 
#include <string.h>

int main(){
    int rep, toy, rm, rm1, rm2, rm3; //variable needed by problem
    int i, j, temp, x, y; //variable needed by loops
    int sum[10], tmp[10];
    scanf("%d", &rep); 
    getchar();

    // starts an input loop for each case
    for (i=0; i<rep; i++){
        scanf("%d %d %d %d %d", &toy, &rm, &rm1, &rm2, &rm3);
        getchar();
    } i=1;
    
    for (j=0; j<rep; j++){
        //finds the amount of kelipatan rm within the range of 1 - toy
        do
        {
            temp = rm*i;
            if (temp >= toy){
                break;
            }
            i++;
        } while (i<=toy);
        tmp[0]=i;   // array tmp's 0th index will store the amount of kelipatan rm
        i=1; temp=0;    
        
        //finds the amount of kelipatan rm1 within the range of 1 - toy
        do
        {
            temp = rm1*i;
            if (temp >= toy){
                break;
            }
            i++;
        } while (i<=toy);
        tmp[1]=i;
        i=1; temp=0;
        
        //finds the amount of kelipatan rm2 within the range of 1 - toy
        do
        {
            temp = rm2*i; 
            if (temp >= toy){
                break;
            }
            i++;
        } while (i<=toy);
        tmp[2]=i;   
        i=1; temp=0;

        //finds the amount of kelipatan rm3 within the range of 1 - toy
        do
        {
            temp = rm3*i; 
            if (temp >= toy){
                break;
            }
            i++;
        } while (i<=toy);
        tmp[3]=i;
        i=0; temp=0;

        //append the sum of toys yeeted per case to sum[]
        do
        {
            sum[j] += tmp[i];
            i++;
        } while (i<4);
        i=1;
        
    }
    //prints the cases and the remaining toy count
    for(i=0; i<rep; i++){
        printf("Case #%d: %d\n", i+1, sum[i]);
    }
    
    return 0;
}