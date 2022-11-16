# Control flow (while)

## calc
Write a program that reads and evaluates simple arithmetic expressions in the form of `4+2` until it reaches the end of the standard input stream. The program should support '+', '-', '*' and '/' and work with integers. Also, the program should work reliably and exit with a non-zero exit code and a message if it encounters a problem (e.g. division by zero).

1) Write the code in `calc.cpp`
2) Compile and run (open a terminal inside the `lab05` folder) by redirecting the standard input from a file `calc.in.txt`:

On Windows
```sh
TBD
```

On Linux/Mac
```sh
g++ calc.cpp -o calc && ./calc < calc.in.txt
```

You should see the following output:
```sh
6
3
-2
9
```

## sum
Write a program that reads integers until it reaches the end of the standard input stream. The program should calculate the sum and write it to the standard output. Also, the program should work reliably and exit with a non-zero exit code and a message if it encounters a problem (e.g. a letter instead of a digit).

1) Write the code in `sum.cpp`
2) Compile and run (open a terminal inside the `lab05` folder) by redirecting the standard input from a file `sum.in.txt`:

On Windows
```sh
TBD
```

On Linux/Mac
```sh
g++ sum.cpp -o sum && ./sum < sum.in.txt
```

You should see the following output:
```sh
45
```