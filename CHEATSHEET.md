# How to compile and run C

## Traditional way (no Makefile). Learn this first, it works everywhere.

    gcc -Wall -Wextra -std=c99 ch01_tutorial/ex1-01_hello.c -o hello
    ./hello

- `gcc`       the C compiler
- `-Wall -Wextra`  show warnings (they catch many mistakes)
- `-std=c99`  follow the C99 standard
- `-o hello`  name of the program to create (without it, you get `a.out`)
- `./hello`   run it (`./` means "in this folder")

Compile + run in one line (run only if compile worked):

    gcc -Wall -Wextra ex1-01_hello.c -o hello && ./hello

## Shortcut way (Makefile in this folder)

    make run FILE=ch01_tutorial/ex1-01_hello.c

It does the same thing as above. See the Makefile for details.

## Useful extras

- Needs the math library (sqrt, pow)?  add `-lm` at the end:
      gcc ex.c -o ex -lm
- Debug with prints, or use `gcc -g` and `lldb ./ex` on macOS.
- Program waits for input? Type text, then press Ctrl+D to send end-of-file (EOF).
- `gcc` not found?  run `xcode-select --install` once.
