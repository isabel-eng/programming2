# Subprograms and Recursion
[Juan Manuel Balanzar Vega](https://github.com/SrGitQ/Programming2/blob/master/Subprogram3.md) & [Isabel Cámara Montalvo](https://github.com/isabel-eng/programming2/blob/master/subprogram3.md)
## [Subprograms](https://docs.oracle.com/cd/A58617_01/server.804/a58236/07_subs.htm)
A subroutine is that part of the code destined to carry out specific tasks that will be used several times and are used not to repeat this part during the coding, or simply to have a much more intact organization of the code. If we want a function to accept external values, it is necessary that we put parameters in its declaration. The parameters will be the containers where we will have to place the variables with which our function will carry out its work.

### [**By Value**](https://codingornot.com/cuando-se-utiliza-paso-por-referencia-y-cuando-paso-por-valor)
 
This form tells us that our function will receive a copy of the variable that we pass and, any modification we make, will only affect that copy.

```C
void function(parameters){
    /*Code */
    return value;
}
```

###  [**By reference**](https://codingornot.com/cuando-se-utiliza-paso-por-referencia-y-cuando-paso-por-valor7)

A reference is a value that allows us to indirectly access a particular datum within a program; This data could be found, for example, in the main memory of a computer. If you give a function a reference, this form of variable passing is per reference.

In C, the implementation of the reference is the pointer. A pointer is a special type of variable that stores a memory address.
Example:

```C
int num = 5;
int *ptr_num = &num;
printf("valor: %d\n", *ptr_num);

//output
// valor: 5
```



## [Recursion](https://www.educative.io/courses/recursion-for-coding-interviews-in-cpp/m2MB2D8xDOR)
Recursive programs refer to the fact that there are functions in the code capable of replicating themselves and working within them applying the same methods, variables and structure that exists within it, they are usually used to perform processes that require results that can only be granted by the same function.
![alt img](https://cdn.programiz.com/sites/tutorial2program/files/how-recursion-works-c_0.jpg)
### **Direct**
 
When a function is called from the same function to complement part of the task, it is considered direct recursion, since there is no step that it has to reach itself and perform the assignment of values and process.
```c
#include <stdio.h> 

void function(parameters){ 
    do{
        function(i)
        i++;
    }while(i<0)
}
int main(){ 
    int x = 3; 
    function(x); 
    return 0; 
} 
```


###  **Indirect**
Basically it refers to the fact that there are intermediate steps to perform the recursion, it looks as if an auxiliary function calls the main function to perform the recursion, many times this is not seen as such, but during the organization of the code It is important to know the recursions of the functions, especially if they are done indirectly.

```C
void Function1();
void Function2();
  


void Function1(){
  //code
  Function2();
  //code
}
void Function2(){
  //code
  Function1();
  //code
}
```