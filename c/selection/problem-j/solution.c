#include <stdio.h>
#include <stdlib.h>

int main(){
    int lift1, lift2, liftBroken; 

    scanf("%d %d %d", &lift1, &lift2, &liftBroken); 
    getchar();

    if (lift1 > liftBroken || lift2 < liftBroken) printf("-1\n");
    else {
	int a = liftBroken - lift1;
	int b = lift2 - liftBroken; 

	if (a == b) printf("%d\n", a);
    }

    return 0; 
}

