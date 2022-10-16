# First programs in C++ on Ubuntu

## Setup
1) Open a terminal. It is open in your home directory of your user. If your user is `ivan`, it will be `/home/ivan`.
1) Check the current working directory by the "print working directory" command:
```sh
$ pwd
/home/ivan
```
> The "$" symbol is included for clarity to illustrate the prompt and to distinquish between commands you type and the output in the terminal. Only type the text after it.
3) Create a directory for the course:
```sh
$ mkdir citb107
```
4) Change the current directory by going into the newly created folder. Confirm by running `pwd` again:
```sh
$ cd citb107
$ pwd
/home/ivan/citb107
```
5) Repeat step 4 to create a new directory `lab02` under `citb107` and `cd` inside:
```sh
$ mkdir lab02
$ cd lab02
$ pwd
/home/ivan/citb107/lab02
```

## First
1) Create your first source file as `first.cpp`:
```cpp
int main() {
    int a = 2;
    int b = 3;
    int c = a + b;
    return c;
}
```
2) Run the preprocessor part of the compilation and see the result by openning the newly created `first.cpp.txt` file:
```sh
$ g++ first.cpp -E -o first.cpp.txt
```
3) Run the compilation to object file. Generate assemply to see the result by openning the newly created `first.s` file:
```sh
$ g++ first.cpp -c -o first.o
$ g++ first.cpp -S -o first.s
```
4) Link the object file into executable:
```sh
$ g++ first.o -o first
```
5) Execute the program and see the result by printing the exit code:
```sh
$ ./first
$ echo $?
```

## Hello
1) Create your second source file as `hello.cpp`:
```cpp
#include <iostream>

using namespace std;

int main() {
    cout << "Hello, C++ on Ubuntu!" << endl;
    return 0;
}
```
2) Go thorugh a similar process as with the `first.cpp` to produce the preprocessing result, object file, assembly and link the object file into an executable.

**Don't forget to replace "first" with "hello" for both for input to the compilation, as well for the output, e.g.:**
```sh
$ g++ hello.o -o hello
```