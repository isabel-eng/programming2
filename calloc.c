//Find the Largest Element in a Dynamically Allocated Memory
//source: https://www.programiz.com/c-programming/examples/dynamic-memory-allocation-largest#:~:text=Find%20the%20Largest%20Element%20in%20a%20Dynamically%20Allocated%20Memory&text=We%20will%20allocate%20memory%20for,and%20printed%20on%20the%20screen.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    int *a;
//read the n value
    printf("set the amount of numbers: ");
    scanf("%d", &n);

    // Allocate memory
    a = (int *)calloc(n, sizeof(int));
    if (a == NULL) {
        printf("the memory wasn't allocated. Try again.");
        exit(0);
    } else {

    // read the numbers from the user
    for (i = 0; i < n; ++i) {
        printf("type the value %i: ", i + 1);
        scanf("%i", a + i);
    }

    // Finding the largest number
    for (i = 1; i < n; ++i) {
        if (*a < *(a + i))
            *a = *(a + i);
    }
    printf("the largest number is %i \n", *a);
    }
    free(a);
    return 0;
}