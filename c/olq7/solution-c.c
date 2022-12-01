#include <stdio.h>

int main(){
	
	int len;
	unsigned long long int room[10000], max=0;
	unsigned long long int temp[]={0};
	
	scanf("%d", &len);
	getchar();
	
	unsigned long long counter=len;
	
	for(int i=0; i<len; i++){
		scanf("%llu", &room[i]);
		getchar();
	}
	
	for(int i=0; i<len; i++){
		for (int j=i+1; j<len; j++){
			if(room[i]==room[j]){
				counter--;
				break;
			}
		}
	}
	
	printf("%llu\n", counter);
	
	return 0;
}