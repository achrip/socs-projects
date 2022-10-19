#include <stdio.h>

void main(){
    int rep; 
    double celcius[5], reamur[5], kelvin[5], fahit[5]; 

    scanf("%d", &rep);
    getchar();

    for (int i=0; i<3; ++i){
        scanf("%lf", &celcius[i]);
        getchar();

        reamur[i]=4*celcius[i]/5; 
        kelvin[i]=celcius[i]+273;
        fahit[i]=9*celcius[i]/5+32;
    }

    for (int i=0; i<3; ++i){
        printf("%.2lf %.2lf %.2lf\n", reamur[i], fahit[i], kelvin[i]);
    }
}