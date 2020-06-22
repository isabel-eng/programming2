//realizar un vector dinámico de 10 elementos y eliminar los numeros repetidos reajustando el vector
//source https://www.fiwiki.org/images/3/36/PROGRAMACION_EN_C_FINAL.pdf [modified]
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void funcion (int a[]){
    int i;
    for (i=0;i<10;i++){
        printf ("valor %i:",i);
        scanf ("%i", &a[i]);
    }
}
int main(){
    int n=10, i, j, k;
    int *a;
    a=(int)malloc(n*sizeof(int));
    if(a==NULL){
        printf("the memory wasn't allocated. Try again.");    
        } else {
        // read the numbers from the user
        funcion(a);
        //check if the numbers repeat
        for (i=0; i<n; i++){
            j= i+1;
            while(j<n){
                if(*(a+i)==*(a+j)){
                    //if the numbers repeat change the number in position k for the next one (k+1)
                    for(k=j; k+1<n; k++){
                        *(a+k)=*(a+k+1);
                    }
                    n--;
                }else{j++;}                
            }
        }
    }
    a=(int*)realloc(a, n*sizeof(int));
    if(a==NULL){
        printf("the memory wasn't allocated. Try again.");    
        } else {
            for(i=0; i<n; i++){
                printf("%i \n", *(a+i));
            }
    }
    free(a);
}