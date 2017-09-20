# 5: Recursion

*Note: use the C++ reference guide as your only external resource (http://www.cplusplus.com/reference/)*

## Problem

Write a program that prompts the user for a desired number of rows.
Use nested for loops to print out the following shape, dependent on the row number (here it is 5 rows):

```
xxxxx
 xxxx
  xxx
   xx
    x
```
    
For 5 rows, Row 1 will contain 5 x's. 
Row 2 will begin with one space, and then contain 4 x's. 
This pattern continues similarly, with Row N containing (N-1) spaces at the beginning of the line, and ending with 1 x.

There are several ways to accomplish this with nested for loops. Simply find one.

This code must be dynamic, and independent of the number of rows. 
Do not simply print a static number of x's.

## Examples

### Input
```
3
```

### Output
```
xxx
 xx
  x
```

### Input
```
7
```

### Output
```
xxxxxxx
 xxxxxx
  xxxxx
   xxxx
    xxx
     xx
      x
```
