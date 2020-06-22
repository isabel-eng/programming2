//C program to find sum of n elements entered by user. To perform this program, allocate memory dynamically using malloc() function.
//source: https://www.codequiz.in/c-program-to-find-sum-of-n-elements-entered-by-user-to-perform-this-program-allocate-memory-dynamically-using-malloc-function/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    //variables
    int i, n, sum=0;
    int *a, *b;

    //read the n value
    printf("set the amount of numbers: ");
    scanf("%i", &n);

    //allocate memory
    a=(int*) malloc(n * sizeof(int));
    if (a== NULL){
        printf("the memory wasn't allocated. Try again.");    
        } else {
            //read the numbers from the user
           for (i=0, b=a; i<n; i++){
                printf("type the value %i: ", (i+1));
                scanf("%i", b);
                //make the sum
                sum = sum + *b;
           }    
           //print sum
           printf("the result of the sum is %i\n", sum);
           // free the memory
           free(a);
           return 0;

        }

}