#include <stdio.h>

int main() {
    int testCase; 

    scanf("%d", &testCase);                             /* scans for the test cases */
    getchar(); 

    int ingredients[testCase];
    long long int ingredientsBought[testCase][100];
    for (int i = 0; i < testCase; i++) {                /* scans and calculate all of the information 
                                                           that will be given by every test cases */
        scanf("%d", &ingredients[i]);                   // scans for the amount of   
        getchar();                                      // ingredients needed

        long long int ingredientsHave[ingredients[i]];  // declare array of ingredients at hand
        long long int ingredientsNeed[ingredients[i]];  // declare array of ingredients needed

        for (int j = 0; j < ingredients[i]; j++) {         // populate array of ingredients needed
            scanf("%lld", &ingredientsNeed[j]);
            getchar(); 
        }

        for (int j = 0; j < ingredients[i]; j++) {         // populate array of ingredients at hand
            scanf("%lld", &ingredientsHave[j]);
            getchar();                                  

            ingredientsBought[i][j] = ingredientsNeed[j] // calculate how many ingredients
                                 - ingredientsHave[j];   /* need to be bought, and the amount of 
                                                            each ingredient we need to buy. */
        }
    }

    for (int i = 0; i < testCase; i++) {                /*  prints the reslut of our calculations 
                                                            by each test cases in succession */
        printf("Case #%d: ", (i + 1));
        for (int j = 0; j < ingredients[i]; j++) {
            printf("%d", ingredientsBought[i][j]); 
            if (j == ingredients[i] - 1) printf("\n");
            else printf(" "); 
        }
    }

    return 0; 
}
