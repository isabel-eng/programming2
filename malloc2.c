/*. Escribir un programa que cree en la memoria un array dinámico bidimensional de números reales float
mediante asignación dinámica de memoria:
1º. Solicitará por teclado el tamaño deseado del array (nº de filas y nº de columnas).
2º. Creará en la memoria el array, gobernado por el puntero float **array; de forma que sus elementos
puedan ser accedidos mediante dos subíndices (array[i][j]).
3º. Cargará todo el array con datos numéricos reales introducidos por teclado, rellenándolo por filas.
4º. Presentará en pantalla todos estos datos introducidos, en forma de tabla (por filas).
5º. Eliminará de la memoria todo el array, antes de terminar el programa.
*/
#include <stdio.h>

#include <stdlib.h>

int main() {
    float ** array;
    int f = 0, c = 0, i, j;

    printf("number of rows: \n");
    scanf("%d", & f);
    printf("number of columns: \n");
    scanf("%d", & c);

    // values for the array
    array = (float ** ) malloc(f * sizeof(float * ));
    if (array == NULL) {
        printf("the memory wasn't allocated. Try again.");
    }
    for (i = 0; i < f; i++) {
        array[i] = (float * ) malloc(c * sizeof(float));
        if (array[i] == NULL) {
            printf("the memory wasn't allocated. Try again.");
            f = i;
        }
    }
    // take the values from the user
    for (i = 0; i < f; i++){
        for (j = 0; j < c; j++) {
            printf("value for array[%d][%d]=", i, j);
            scanf("%f", & array[i][j]);
        }
    }
    // print the array
    printf("here is your array:\n");
    for (i = 0; i < f; i++) {
        for (j = 0; j < c; j++) printf("%g\t", array[i][j]);
        printf("\n");
    }
        // erase the array
        for (i = 0; i < f; i++) free(array[i]);
        free(array);
}