#include <stdio.h>

void main(){
    long long int meat, veggie, egg; 

    scanf("%lld %lld %lld", &meat, &veggie, &egg); 
    getchar();

    if (meat>veggie && meat>egg){
        printf("Daging\n");
        if (veggie>egg){
            printf("Sayur\n"); 
            printf("Telur\n"); 
        } else{
            printf("Telur\n"); 
            printf("Sayur\n"); 
        }
    } else if (veggie>meat && veggie>egg){
        printf("Sayur\n");
        if (meat>egg){
            printf("Daging\n"); 
            printf("Telur\n"); 
        } else{
            printf("Telur\n"); 
            printf("Daging\n"); 
        }
    } else if (egg>meat && egg>veggie){
        printf("Telur\n"); 
        if (meat>veggie){
            printf("Daging\n"); 
            printf("Sayur\n"); 
        } else {
            printf("Sayur\n"); 
            printf("Daging\n"); 
        }
    }
}
