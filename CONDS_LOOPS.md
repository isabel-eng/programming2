# Selective control structures


* [**Simple conditional:**](https://thestempedia.com/tutorials/conditional-programming/) check whether a programmer-specified Boolean condition is true or false. They make it possible to test a variable against a value/compare a variable with another variable and make the program act in one way if the condition is met, and another if it isn’t. 

* **Double conditional:**

* **Multiple conditional:**

* **Nested conditionals:**


# Iterative control structures

* [**For:**](https://www.programiz.com/c-programming/c-for-loop) The initialization statement is executed only once.
Then, the test expression is evaluated. If the test expression is evaluated to false, the for loop is terminated.
However, if the test expression is evaluated to true, statements inside the body of for loop are executed, and the update expression is updated.
Again the test expression is evaluated.
This process goes on until the test expression is false. When the test expression is false, the loop terminates.

```  
for (InitializationStatement; testExpression; updateStatement){
    //statement inside the body of loop
} 
``` 
* **Nested For:**

* [**While:**](https://www.programiz.com/c-programming/c-do-while-loops) The while loop evaluates the test expression inside the parenthesis ().
If the test expression is true, statements inside the body of while loop are executed. Then, the test expression is evaluated again.
The process goes on until the test expression is evaluated to false.
If the test expression is false, the loop terminates (ends).
```  
while (testExpression){
    //statement inside the body of loop
} 
``` 

* [**Do-while:**](https://www.programiz.com/c-programming/c-do-while-loops) The do..while loop is similar to the while loop with one important difference. The body of do-while loop is executed at least once. Only then, the test expression is evaluated.
```  
do{
    //statement inside the body of the loop
}
while (testExpression);
``` 

* **Break:** The break statement ends the loop immediately when it is encountered.
![How break works](https://cdn.programiz.com/sites/tutorial2program/files/c-break-statement-works.jpg)

* **Continue:** The continue statement skips the current iteration of the loop and continues with the next iteration.
![how continue works](https://cdn.programiz.com/sites/tutorial2program/files/c-continue-statement-works.jpg)
