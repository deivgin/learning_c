# Notes

These notes are for the book "C How to program 6th Edition"

## Structured Program development

Algorythm - a procedure to solve a _computing_ problem using an _action_ to be executed and an _order_ in which that action will be executed.

Pseudocode - artificial and information language that helps us develop algorythms, by focusing on the logic of it, not the computer code implementation.

Sequential execution - when actions in a program are executed one after another in order they are written in (line by line).

### Structured Programming

Boham and Jacopini created the structured program theorem. It states:
All programs can be written in three controll structures:

1. Sequence structure - how code statements (actions) and subroutines (functions) are executed in order.
2. Selection structure - how some statements are executed based on the program state (use of if statements)
3. Repetition structure - how some statements are repeated until a certain program state is reached. There should be only one entry pointo into a loop and one exit point. (usage of for, while etc.)

### Flow Charts

We use flow charts to represent algorythms and pseudo code.

Flow chart meanings:

1. Oval - start/end of a process
2. Rectangle - process or operation step
3. Arrow - flow between steps
4. Diamong - step requiring yes/no (if statement)
5. Parallelogram - input/output step
6. Circle - connector symbol, connects pages, programs, etc.

### Control structures

1. If statement

```c
  if (x == y) {
    return 0;
  }

  if (x > y) {
    return x;
  } else {
    return y;
  }
}
```

2. Ternary operator

```c
x > y ? x : y;
```

3. While loop

```c
while (x < y) {
  x++;
}
```

### Operators

```c
//Assignement operators
c = c + 1;
c += 1;

c = c - 1;
c -= 1;

c = c * 1;
c *= 1;

c = c / 1;
c /= 1;

c = c % 1;
c %= 1;

//Increment and decrement operators
c = c + 1;
++c; // increment c by 1 before using it
c++; // uses c and then increments it by 1

c = c - 1;
--c; // decrement c by 1 before using it
c--; // uses c and then decrements it by 1
```
