# Subprograms and Recursion

## [Subprograms](https://docs.oracle.com/cd/A58617_01/server.804/a58236/07_subs.htm)
Subprograms are named PL/SQL blocks that can take parameters and be invoked. PL/SQL has two types of subprograms called *procedures* and *functions*. Generally, you use a *procedure* to perform an action and a *function* to compute a value. The distinction between the two is that a function returns a value, and a procedure does not.

### [**Procedures**](https://docs.oracle.com/cd/A58617_01/server.804/a58236/07_subs.htm#591)
A procedure is a subprogram that performs a specific action. 
```
PROCEDURE name [(parameter[, parameter, ...])] IS
   [local declarations]
BEGIN
   executable statements
[EXCEPTION
   exception handlers]
END [name];
 ```
where parameter stands for the following syntax:
```
parameter_name [IN | OUT | IN OUT] datatype [{:= | DEFAULT} expression]
```

###  [**Functions**](https://docs.oracle.com/cd/A58617_01/server.804/a58236/07_subs.htm#657)

A function is a subprogram that computes a value. Functions and procedures are structured alike, except that functions have a RETURN clause.

```
FUNCTION name [(parameter[, parameter, ...])] RETURN datatype IS
   [local declarations]
BEGIN
   executable statements
[EXCEPTION
   exception handlers]
END [name];
```
where parameter stands for the following syntax:
```
parameter_name [IN | OUT | IN OUT] datatype [{:= | DEFAULT} expression]
```