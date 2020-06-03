# Subprograms and Recursion

## [Subprograms](https://docs.oracle.com/cd/A58617_01/server.804/a58236/07_subs.htm)
If we want a function to accept external values, it is necessary that we put parameters in its declaration. The parameters will be the containers where we will have to place the variables with which our function will carry out its work.

### [**By Value**](https://codingornot.com/cuando-se-utiliza-paso-por-referencia-y-cuando-paso-por-valor)
 
This form tells us that our function will receive a copy of the variable that we pass and, any modification we make, will only affect that copy.


###  [**By reference**](https://codingornot.com/cuando-se-utiliza-paso-por-referencia-y-cuando-paso-por-valor7)

A reference is a value that allows us to indirectly access a particular datum within a program; This data could be found, for example, in the main memory of a computer. If you give a function a reference, this form of variable passing is per reference.

In C, the implementation of the reference is the pointer. A pointer is a special type of variable that stores a memory address.
Example:

```
int num = 5;
int *ptr_num = &num;
printf("valor: %d\n", *ptr_num);

//output
// valor: 5
```