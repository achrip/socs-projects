// #include <stdio.h>

// int main() {
// 	FILE *fp = fopen("testdata.in", "r");  
// 	long int cases; 
// 	fscanf(fp, "%ld\n", &cases); 
	
// 	for (int i = 0; i < cases; i++) {
// 		long long int size, start, end;
// 		fscanf(fp, "%lld %lld %lld\n", &size, &start, &end); 

// 		char string[size]; 
// 		fscanf(fp, "%[^\n]\n", string); 
		
// 		long long int head = 0, tail = 0, count = 0; 
// 		long long int duration;
// 		for (int j = 0; j < size; j++) {
// 			// if di belakang, gatau kenapa dipisah
// 			if (j == size - 1 && string[j] == '1') { 
// 				tail = j; 
// 				duration = tail - head; 
// 				if (duration >= start && duration <= end) count++;
// 			}

// 			// if ga di belakang, kita mau fokus pada jarak antar nol
// 			if (string[j] == '1') continue; 
			
// 			tail = j; 
			
// 			// check agar durasinya benar kalau dimulai dgn 1
// 			if (head == 0) duration = tail - head; 
// 			else duration = tail - head - 1; 

// 			if (duration >= start && duration <= end) count++;
// 			head = tail; 
// 		} 
// 		printf("Case #%d: %lld\n", (i + 1), count); 
// 	}
// 	return 0;  
// }

#include <stdio.h>

int main(){
    
    FILE *fp = fopen("testdata.in", "r");

    int tc;
    fscanf(fp, "%d\n", &tc);

    for(int i=1; i<=tc; i++){
        long long int len, min, max, counter=0, lightning=0;
        char sound[11000];

        fscanf(fp, "%lld %lld %lld\n", &len, &min, &max);

        fscanf(fp, "%[^\n]\n", sound); 

        for(int j=0; j<len; j++){
            if(sound[j]=='1') counter++;
            else if(sound[j]=='0'){
                if(counter>=min&&counter<=max) lightning++;
                counter=0;
            }
        }

        if(counter>=min&&counter<=max) lightning++;

        printf("Case #%d: %lld\n", i, lightning);
    }

    fclose(fp);

    return 0;
}