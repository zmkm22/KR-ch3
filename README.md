# Reading Notes

1. Two ways available to denote statement: semicolon and braces. Braces are used for compound statement, and we do not put semicolon after braces because that would be redundant.
2. A condition is false only if it is zero, thus a loop would run if the condition is negative or positive integer.
3. I learned the purpose of type declaration is to set aside appropriate quantity of memory and for compiler to check error. So compilation not only results in machine code, but also to check error.
4. Variable names stay within immediate brace `{}` enclosing it and remain in the block, not internal, not external. What about for loop? 

## Compilation 

`cc file1.c file2.c >> a.out` and `.o` for object files 

1. Functions cannot be defined within functions in C
2. How to define external varibles visible from single file?

## Extern and Static 

Static usually applies to functions and external variables to mean these items are private to the file enclosing them. When static is used for an internal variable (e.g within a function), the variable persists even when the function call finishes (so how to acess it and what's the use?? pointers?) 

## register

`register int a;` this keyword means the variable will have frequently used. Compiler may choose to ignore it. `register` can only be used within function (automatic variables) and formal parameters (i.e. those passed into the function). We may not obtain address of registered variables.



## goto 
The scope of `goto` is the entire function. It goes to the label. Lable is followed by colon `:`

```
func
{
    goto home;  // home (arbitarily named) is the destination of goto 

    home:
        ...
}

```

## continue 
causes the next iteration of 
`for` `do` `while` to begin. Continue tells the condition of these loops to be re evaluated. Continue doesn't work in switch because this structure doesn't not have the kind of condition that gets tested on each iteration. Although switch has comparisions. I can't remember a switch, let's recall

```
switch(n){
    case (N1): expr
    ...
    case (Nk): expr
    default: expr
}
```

whereby `n, N1..Nk` are integers, `N1..Nk` are pariwise distinct, and the comparisons `n == Nj` are made for `j=1..k`. Without breaks anywhere, the switch runs at least once, and at most twice (that is when default is included and one of the cases is true). Why aren't braces needed after each case? because a pair of cases serve as braces. The last case is terminated by the braces of switch, that is  `switch (n) {...}` If `continue` appears inside switch inside loop, then the continue causes effect to the for. `continue` also does not work in `if` because it is not a loop at all!

```
// infinite loop

int i = 1;

    do {
        printf("hi\n");
        continue;
        --i;
    } while (i);
```
## break

```
for (;;)
{
    for (;;)
        break;  // break exits inner most loop
}
```

## For is a special while and while is a special for, therefore for and while are equivalent

```
for (expr-1; expr-2; expre-3)
    statement
``` 

is basically

```
expr-1
while(expr-2) {
    statement 
    expr-3
}
```

Any of  `expr-1` `expr-2` `expr-3` may be dropped, but semi colon must remain. If `expr-2` is absent, then the for is always true. Infinite loops can be broken by `return` or `break`
```
    while (cond)
        statement

    // equivalent
    for (;cond;)
        statement

    for(;;)
        // infinite loop
```

The index retains its value after the loop ends

## Do-while vs while

While tests before body executes, Do-while tests at the end. 
```
do 
    statement 
while (cond);

```

## Comma

Evaluated left to right. Can be used in for loops to do two things at once

## Switch 

`break` and `return` are used to leave the switch. 

## If Else

0. The else associates to the nearest foregoing if, this can lead to subtle bugs when dealing with nested loops: use braces when dealing with nested if's.
1. By definition if is followed by a single statement, this could either be a compound statement: surrounded by braces, or it could be a single statement terminating in `;`. 
3. This is considered a single structure: brackets are part of the syntax

```
    if (expr)
        statement
    else if (expr)
        statement
    ...

    else if (expr)
        statement
    else    
        statement
```
Condutions evaluated top to bottom in definitive sequence. Exactly one statement gets evaluated in the whole structure, there may be multiple true expressions, but only the first true block gets evaluated, then the entire structure is exited. In variants of such a block, the `if` is necessary, the `else if` are optional and there may be multiple of them. The `else` can occur at most one time. When else does not appear, it is possible the block does not execute at all.

> To do: exercises in this section. 
The function section definitely needs to be re-read. 
> Read https://stackoverflow.com/questions/1433204/how-do-i-use-extern-to-share-variables-between-source-files/1433387