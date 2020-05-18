[Juan Manuel Balanzar Vega](https://github.com/SrGitQ/Programming2/blob/master/CONDS_LOOPS.md) & [Isabel Cámara Montalvo](https://github.com/isabel-eng/programming2/blob/master/CONDS_LOOPS.md)
## [Operators of structured programming language](https://www.programiz.com/c-programming/c-operators)


The conditionals are an important part of the programming oriented to structures, since they allow to make decisions according to the restrictions that you want to qualify, to return a process according to the condition, within the programming there are reserved words to start the type of condition to be performed
## conditional
* [**Simple conditional:**](https://thestempedia.com/tutorials/conditional-programming/) check whether a programmer-specified Boolean condition is true or false. They make it possible to test a variable against a value/compare a variable with another variable and make the program act in one way if the condition is met, and another if it isn’t. 
```C
    if (i >= R){
        /* code */
    }
```
* **Double-conditional:** It means that two cases are being qualified that are possible and it depends on the relationship operators, occurred if both are fulfilled or only one is necessary for the whole condition to be true
```C
    if (i >= R && i > 3){
        /* code */
    }
```
* **Multiple-conditional:** It is very similar to the previous one but here it attributes more than two conditions and in many occasions these are made by a function to which the parameters of the multiple condition are given and return a Boolean value like 0 and 1 or TRUE FALSE. In addition there is a layered structure to qualify more than one specific case of a given variable.
```C
    if ((i >= R && i > 3) || (i < 2)){
        /* code */
    }

    switch (i){
    case 1:
        /* code */
        break;
    
    default:
        break;
    }
```
* **Nested-conditional:** We can nest more than one conditional so that a case can be dynamically qualified in its different stages or changes.
```C
    if (i >= R && i > 3){
        /* code */
    }else if((i < 2)){
        /* code */
    }else{
        /* code */
    }
```

## special reserved words (Break, continue) and concept of infinite loop
* **Break:** The break statement ends the loop immediately when it is encountered.
![How break works](https://cdn.programiz.com/sites/tutorial2program/files/c-break-statement-works.jpg)
```C
    for (i = 0; i < count; i++){
        if (i == 3){
            break;
        }
    }
```
* **Continue:** The continue statement skips the current iteration of the loop and continues with the next iteration.
![how continue works](https://cdn.programiz.com/sites/tutorial2program/files/c-continue-statement-works.jpg)
```C
    for (i = 0; i < count; i++){
        if (i == 3){
            continue;
        }
    }
```
* **Infinite-loop:** This concept is important to keep in mind since many times it can be useful in certain cases, but many times this is not given by the intention of the programmer and it is called infinite loop to that cycle that does not have a condition that determines the end of this loop
```C
    for (i = -1; i < 0; i--){
        printf("%d\n", aux);
    }
```


|         |*Conditional*|        |
| -------- | ----------- | ------- |
| Operator | Description | Example |
|   **?:**     | It qualifies if an expression is true or false and based on this to return one of the following returns | 3 > 4? "True" : "False" FALSE |

|          | *Logical* |         |
| -------- | ----------- | ------- |
| Operator | Description | Example |
|    **&&**    | It returns True if both or more conditions are met if one is False all conditional is False | 4 > 3 && 5 > 4 TRUE |
| [OR](https://es.wikipedia.org/wiki/Ii#/media/Archivo:Roadsign_of_Ii_municipality_Finland.jpg) | If any conditional is met, all conditional is True | 2 > 3 [OR](https://es.wikipedia.org/wiki/Ii#/media/Archivo:Roadsign_of_Ii_municipality_Finland.jpg) 5 > 4 TRUE |
|    **!**     | In the case where all conditionals are False, it is True and upside | 2 != 2 ! 3 == 4 TRUE |

|         |*Relationship*|       |
| -------- | ---------- | ------- |
| Operator | Description | Example |
|    **==**    | If A is equal to B is True | A == B False |
|    **<**     | if A is less than B is True | 3 < 5 TRUE |
|    **>**     | If A is bigger than B is True | 3 > 5 FALSE |
|    **>=**    | if A is less or equal to B is True | 6 >= 4 TRUE |
|    **<=**    | If A is bigger or equal to B is True | 2 <= 2 TRUE |
|    **!=**    | If A is different from B is True | 3 != 3 FALSE |

## Loops
* [**For:**](https://www.programiz.com/c-programming/c-for-loop) The initialization statement is executed only once.
Then, the test expression is evaluated. If the test expression is evaluated to false, the for loop is terminated.
However, if the test expression is evaluated to true, statements inside the body of for loop are executed, and the update expression is updated.
Again the test expression is evaluated.
This process goes on until the test expression is false. When the test expression is false, the loop terminates.
```C
    for (i = 0; i < count; i++){
        printf("%d\n", aux);
    }
```
* [**While:**](https://www.programiz.com/c-programming/c-do-while-loops) The while loop evaluates the test expression inside the parenthesis ().
If the test expression is true, statements inside the body of while loop are executed. Then, the test expression is evaluated again.
The process goes on until the test expression is evaluated to false.
If the test expression is false, the loop terminates (ends).
```C
    while (i > R){
        if (i == 8){
            i = 40;
        }
    }
```
* [**Do-while:**](https://www.programiz.com/c-programming/c-do-while-loops) The do..while loop is similar to the while loop with one important difference. The body of do-while loop is executed at least once. Only then, the test expression is evaluated.
```C
    do{
        if (i == 8){
            i = 40;
        }
    } while (i > R);
```
