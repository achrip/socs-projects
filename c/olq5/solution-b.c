// #include <stdio.h>
// #include <math.h>

// int main(){
//     int tinggi, cabang, rep, total[1001]; 
//     int takSumbing, sumbing, temp;
//     int ngeng;  

//     scanf("%d", &rep); 
//     getchar(); 

//     for (int i=0; i<rep; i++){
//         temp = 1; ngeng = 0; takSumbing = 0; sumbing = 0; 
//         scanf("%d %d", &tinggi, &cabang);
//         getchar();

//         // menghitung cabang non-sumbing
//         for (int j=0; j<tinggi; j++){
//             for (int k=0; k<=j; k++){
//                 temp*=cabang-1-k;
//             }
//             takSumbing+=temp; 
//             temp=1;
//         }

//         // menghitung cabang sumbing
//         for (int j=1; j<tinggi; j++){
//             ngeng += pow (cabang-1, j); 
//         }

//         sumbing = tinggi + ngeng; 
//         total[i] = sumbing + takSumbing;
//     }

//     for (int i=0; i<rep; i++){
//         printf("Case #%d: %d\n", i+1, total[i]%1000000000);
//     }

    
//     return 0; 
// }

// // cabang non-sumbing 3 + (2*3) + (1*2*3)
// // cabang sumbing tinggi-1*(cabang-1)^i


// #include <stdio.h>

// int recursion(int tinggi, int baris, int i){
//     int x = (1+(baris-i)); 
//     i++;
//     if ((baris-i)==1) return 1;
//     return x*recursion(tinggi, baris, i);
// }

// int main (){
//     int tinggi, cabang, rep, total[1001]; 
//     int takSumbing, sumbing, temp;
//     int ngeng, i=1; 

//     scanf("%d", &rep); 
//     getchar(); 

//     for (int i=0; i<rep; i++){
//         temp = 1; ngeng = 0; takSumbing = 0; sumbing = 0; 
//         scanf("%d %d", &tinggi, &cabang);
//         getchar();

//         i = 1; 
//         total[i] = recursion(tinggi, cabang, i);
//     }

//     for (int i=0; i<rep; i++){
//         printf("Case #%d: %d\n", i+1, total[i]%1000000000);
//     }

//     return 0;
// }

#include<stdio.h>
int main(){
	int tc;
	int n,m;
	scanf("%d",&tc);
	for(int j=0;j<tc;j++){
		scanf("%d %d",&m,&n);
		printf("Case #%d: ",j+1);
		long long int base = n;
		if(m==1){
			printf("%d\n",base%1000000000);
			continue;
		}
		long long int tot=0;
		for(int i=1;i<m;i++){
			tot=(n-i);
			int k=i;
			while(k>0){
				tot=tot%1000000000*(n-k)%1000000000+1;
				k--;
			}
			base+=tot;
			base%=1000000000;
		}
		printf("%d\n",base%1000000000);
	}




	return 0;
}