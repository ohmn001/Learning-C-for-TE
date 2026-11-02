# Progress: K&R C for Delta R&D Testing Engineer (Bangpoo)

Status: [ ] not started  [~] in progress  [x] done
🌱 = book section   🐣 = sub-section   🧩 = exercise
⭐ = must-do exercise (directly useful for the JD). The rest are optional if time is short.
Book: The C Programming Language, 2nd edition (K&R). Section numbers match the book.
Tip: tick a section when you have read it AND typed in its examples. Tick an exercise when your own solution runs.

## Goal
Be ready to write test automation tools in C (and Python) for electronics / power supply testing.
- Target date: ____ (fill in when the application / interview date is known)
- Study time per week: ____ hours

## Dashboard (update at each weekly review)
| Area | Done | Total |
|------|------|-------|
| Chapters | 0 | 8 |
| Book sections | 0 | 91 |
| All exercises | 0 | 97 |
| ⭐ must-do exercises | 0 | 53 |
| Test automation projects | 0 | 8 |
| JD skills ready | 0 | 7 |

---

## Part A: K&R book, every section and exercise

### Front matter
- [ ] Preface and Introduction (skim, 10 minutes)

### Ch1 A Tutorial Introduction [ ]  (ex 1-1 to 1-24)
Why it matters: loops, chars, arrays, and reading input. Everything later builds on it.
- [x] 🌱 1.1 Getting Started
  - [x] 🧩 Ex 1-1 Run "hello, world"; leave parts out and read the errors
  - [x] 🧩 Ex 1-2 Try other escape sequences in printf (e.g. `\c`)
- [x] 🌱 1.2 Variables and Arithmetic Expressions
  - [x] 🧩 ⭐ Ex 1-3 Add a heading to the temperature table (formatted output, like a result table)
  - [x] 🧩 Ex 1-4 Celsius to Fahrenheit table
- [ ] 🌱 1.3 The for Statement
  - [ ] 🧩 Ex 1-5 Print the temperature table in reverse order
- [ ] 🌱 1.4 Symbolic Constants
- [ ] 🌱 1.5 Character Input and Output
  - [ ] 🐣 1.5.1 File Copying
    - [ ] 🧩 Ex 1-6 Check that `getchar() != EOF` is 0 or 1
    - [ ] 🧩 Ex 1-7 Print the value of EOF
  - [ ] 🐣 1.5.2 Character Counting
  - [ ] 🐣 1.5.3 Line Counting
    - [ ] 🧩 Ex 1-8 Count blanks, tabs, newlines
  - [ ] 🐣 1.5.4 Word Counting
    - [ ] 🧩 Ex 1-9 Replace many blanks with one blank
    - [ ] 🧩 Ex 1-10 Show tab, backspace, backslash as `\t`, `\b`, `\\`
    - [ ] 🧩 Ex 1-11 Test the word count program; which inputs find bugs?
    - [ ] 🧩 ⭐ Ex 1-12 Print input one word per line
- [ ] 🌱 1.6 Arrays
  - [ ] 🧩 ⭐ Ex 1-13 Histogram of word lengths
  - [ ] 🧩 ⭐ Ex 1-14 Histogram of character frequencies
- [ ] 🌱 1.7 Functions
  - [ ] 🧩 Ex 1-15 Rewrite the temperature conversion as a function
- [ ] 🌱 1.8 Arguments - Call by Value
- [ ] 🌱 1.9 Character Arrays
  - [ ] 🧩 ⭐ Ex 1-16 Longest line of any length
  - [ ] 🧩 ⭐ Ex 1-17 Print lines longer than 80 characters
  - [ ] 🧩 ⭐ Ex 1-18 Remove trailing blanks/tabs, delete blank lines
  - [ ] 🧩 ⭐ Ex 1-19 `reverse(s)`, reverse each input line
- [ ] 🌱 1.10 External Variables and Scope
  - [ ] 🧩 ⭐ Ex 1-20 detab (tabs to spaces)
  - [ ] 🧩 ⭐ Ex 1-21 entab (spaces to tabs)
  - [ ] 🧩 ⭐ Ex 1-22 fold long lines
  - [ ] 🧩 ⭐ Ex 1-23 Remove comments from a C program
  - [ ] 🧩 Ex 1-24 Check a C program for rough syntax errors (unmatched brackets, quotes)

### Ch2 Types, Operators, Expressions [ ]  (ex 2-1 to 2-10)
Why it matters: integer sizes and bit operations are daily work with hardware values.
- [ ] 🌱 2.1 Variable Names
- [ ] 🌱 2.2 Data Types and Sizes
  - [ ] 🧩 ⭐ Ex 2-1 Ranges of char, short, int, long (use `limits.h` and by calculation)
- [ ] 🌱 2.3 Constants
- [ ] 🌱 2.4 Declarations
- [ ] 🌱 2.5 Arithmetic Operators
- [ ] 🌱 2.6 Relational and Logical Operators
  - [ ] 🧩 Ex 2-2 Write the getline loop without `&&` or `||`
- [ ] 🌱 2.7 Type Conversions
  - [ ] 🧩 ⭐ Ex 2-3 `htoi` (hex string to number, useful for device registers)
- [ ] 🌱 2.8 Increment and Decrement Operators
  - [ ] 🧩 Ex 2-4 `squeeze(s1, s2)` delete chars of s2 from s1
  - [ ] 🧩 Ex 2-5 `any(s1, s2)` first position in s1 of any char in s2
- [ ] 🌱 2.9 Bitwise Operators
  - [ ] 🧩 ⭐ Ex 2-6 `setbits(x, p, n, y)`
  - [ ] 🧩 ⭐ Ex 2-7 `invert(x, p, n)`
  - [ ] 🧩 ⭐ Ex 2-8 `rightrot(x, n)`
- [ ] 🌱 2.10 Assignment Operators and Expressions
  - [ ] 🧩 ⭐ Ex 2-9 Why `x &= (x-1)` counts 1-bits; faster `bitcount`
- [ ] 🌱 2.11 Conditional Expressions
  - [ ] 🧩 Ex 2-10 `lower` with a conditional expression instead of if-else
- [ ] 🌱 2.12 Precedence and Order of Evaluation

### Ch3 Control Flow [ ]  (ex 3-1 to 3-6)
Why it matters: `switch`, loops and `break`/`continue` drive test sequences.
- [ ] 🌱 3.1 Statements and Blocks
- [ ] 🌱 3.2 If-Else
- [ ] 🌱 3.3 Else-If
  - [ ] 🧩 Ex 3-1 Binary search with only one test inside the loop
- [ ] 🌱 3.4 Switch
  - [ ] 🧩 Ex 3-2 `escape(s, t)` newline/tab to `\n`/`\t`, and the reverse
- [ ] 🌱 3.5 Loops - While and For
  - [ ] 🧩 ⭐ Ex 3-3 `expand` shorthand like `a-z` into the full list
- [ ] 🌱 3.6 Loops - Do-While
  - [ ] 🧩 Ex 3-4 Make `itoa` handle the largest negative number
  - [ ] 🧩 ⭐ Ex 3-5 `itob(n, s, b)` number to string in base b
  - [ ] 🧩 Ex 3-6 `itoa` with a minimum field width
- [ ] 🌱 3.7 Break and Continue
- [ ] 🌱 3.8 Goto and Labels

### Ch4 Functions and Program Structure [ ]  (ex 4-1 to 4-14)
Why it matters: splitting a test tool into functions and files; the `static` keyword; macros.
- [ ] 🌱 4.1 Basics of Functions
  - [ ] 🧩 ⭐ Ex 4-1 `strrindex(s, t)` rightmost position of t in s
- [ ] 🌱 4.2 Functions Returning Non-integers
  - [ ] 🧩 ⭐ Ex 4-2 `atof` with exponent (parse "1.5e-3" from a log)
- [ ] 🌱 4.3 External Variables (RPN calculator)
  - [ ] 🧩 ⭐ Ex 4-3 Add the modulus operator and negative numbers
  - [ ] 🧩 ⭐ Ex 4-4 Print top, duplicate, swap, clear the stack
  - [ ] 🧩 ⭐ Ex 4-5 Math functions (sin, exp, pow)
  - [ ] 🧩 ⭐ Ex 4-6 Variables with single-letter names
  - [ ] 🧩 ⭐ Ex 4-7 `ungets(s)` push a whole string back
  - [ ] 🧩 ⭐ Ex 4-8 `getch`/`ungetch` that hold one pushed-back char
  - [ ] 🧩 ⭐ Ex 4-9 Make `getch`/`ungetch` handle EOF
  - [ ] 🧩 ⭐ Ex 4-10 Calculator that reads lines with `getline`
- [ ] 🌱 4.4 Scope Rules
- [ ] 🌱 4.5 Header Files
- [ ] 🌱 4.6 Static Variables
  - [ ] 🧩 Ex 4-11 `getop` without `ungetch`, using a static variable
- [ ] 🌱 4.7 Register Variables
- [ ] 🌱 4.8 Block Structure
- [ ] 🌱 4.9 Initialization
- [ ] 🌱 4.10 Recursion
  - [ ] 🧩 ⭐ Ex 4-12 Recursive `itoa`
  - [ ] 🧩 Ex 4-13 Recursive `reverse(s)`
- [ ] 🌱 4.11 The C Preprocessor
  - [ ] 🐣 4.11.1 File Inclusion
  - [ ] 🐣 4.11.2 Macro Substitution
    - [ ] 🧩 Ex 4-14 `swap(t, x, y)` macro
  - [ ] 🐣 4.11.3 Conditional Inclusion

### Ch5 Pointers and Arrays [ ]  (ex 5-1 to 5-20)  HARDEST, give extra time
Why it matters: strings, buffers and command-line arguments are all pointers. Most C bugs live here.
- [ ] 🌱 5.1 Pointers and Addresses
- [ ] 🌱 5.2 Pointers and Function Arguments
  - [ ] 🧩 ⭐ Ex 5-1 Fix `getint` for a sign followed by a non-digit
  - [ ] 🧩 Ex 5-2 `getfloat`, the floating-point version
- [ ] 🌱 5.3 Pointers and Arrays
- [ ] 🌱 5.4 Address Arithmetic
  - [ ] 🧩 ⭐ Ex 5-3 `strcat` with pointers
  - [ ] 🧩 ⭐ Ex 5-4 `strend(s, t)` does t appear at the end of s?
  - [ ] 🧩 ⭐ Ex 5-5 `strncpy`, `strncat`, `strncmp`
  - [ ] 🧩 ⭐ Ex 5-6 Rewrite earlier functions (getline, atoi, itoa, reverse, strindex, getop) with pointers
- [ ] 🌱 5.5 Character Pointers and Functions
- [ ] 🌱 5.6 Pointer Arrays; Pointers to Pointers
  - [ ] 🧩 ⭐ Ex 5-7 `readlines` using an array provided by `main` (no `malloc` first)
- [ ] 🌱 5.7 Multi-dimensional Arrays
  - [ ] 🧩 Ex 5-8 Add error checking to `day_of_year` and `month_day`
  - [ ] 🧩 Ex 5-9 Use pointers instead of indexing in those two functions
- [ ] 🌱 5.8 Initialization of Pointer Arrays
- [ ] 🌱 5.9 Pointers vs. Multi-dimensional Arrays
- [ ] 🌱 5.10 Command-line Arguments
  - [ ] 🧩 ⭐ Ex 5-10 `expr`, an RPN calculator using `argc`/`argv`
  - [ ] 🧩 Ex 5-11 `entab`/`detab` with tab stops given as arguments
  - [ ] 🧩 Ex 5-12 `entab -m +n` option form
  - [ ] 🧩 ⭐ Ex 5-13 `tail -n` (last n lines of a log)
- [ ] 🌱 5.11 Pointers to Functions
  - [ ] 🧩 ⭐ Ex 5-14 `sort -r` (reverse order)
  - [ ] 🧩 ⭐ Ex 5-15 `sort -f` (fold upper and lower case)
  - [ ] 🧩 ⭐ Ex 5-16 `sort -d` (directory order)
  - [ ] 🧩 ⭐ Ex 5-17 Sort by fields, combine options
- [ ] 🌱 5.12 Complicated Declarations (very hard, do last)
  - [ ] 🧩 Ex 5-18 Make `dcl` recover from input errors
  - [ ] 🧩 Ex 5-19 Make `undcl` not add redundant parentheses
  - [ ] 🧩 Ex 5-20 Make `dcl` handle function argument declarations

### Ch6 Structures [ ]  (ex 6-1 to 6-6)
Why it matters: a test result is a struct (name, value, low, high, status).
- [ ] 🌱 6.1 Basics of Structures
- [ ] 🌱 6.2 Structures and Functions
- [ ] 🌱 6.3 Arrays of Structures
  - [ ] 🧩 ⭐ Ex 6-1 Better `getword` (underscores, strings, comments, preprocessor lines)
- [ ] 🌱 6.4 Pointers to Structures
- [ ] 🌱 6.5 Self-referential Structures
  - [ ] 🧩 Ex 6-2 Group variable names identical in the first n characters
  - [ ] 🧩 ⭐ Ex 6-3 Cross-reference (line numbers per word)
  - [ ] 🧩 ⭐ Ex 6-4 Print words sorted by frequency
- [ ] 🌱 6.6 Table Lookup
  - [ ] 🧩 Ex 6-5 `undef` function
  - [ ] 🧩 Ex 6-6 Simple `#define` processor
- [ ] 🌱 6.7 Typedef
- [ ] 🌱 6.8 Unions
- [ ] 🌱 6.9 Bit-fields

### Ch7 Input and Output [ ]  (ex 7-1 to 7-9)
Why it matters: reading data files and writing reports. This is the core of the job.
- [ ] 🌱 7.1 Standard Input and Output
  - [ ] 🧩 ⭐ Ex 7-1 Convert upper/lower depending on the program name (`argv[0]`)
- [ ] 🌱 7.2 Formatted Output - printf
  - [ ] 🧩 Ex 7-2 Print any input sensibly (non-graphic chars in octal/hex, break long lines)
- [ ] 🌱 7.3 Variable-length Argument Lists
  - [ ] 🧩 ⭐ Ex 7-3 `minprintf`
- [ ] 🌱 7.4 Formatted Input - scanf
  - [ ] 🧩 ⭐ Ex 7-4 `minscanf`
- [ ] 🌱 7.5 File Access
  - [ ] 🧩 ⭐ Ex 7-5 RPN calculator using `scanf`/`sscanf`
- [ ] 🌱 7.6 Error Handling - stderr and exit
- [ ] 🌱 7.7 Line Input and Output
  - [ ] 🧩 ⭐ Ex 7-6 Compare two files, print the first line that differs
  - [ ] 🧩 ⭐ Ex 7-7 Pattern finder (like `grep`) that reads files
  - [ ] 🧩 ⭐ Ex 7-8 Print files with a title and page number per page
- [ ] 🌱 7.8 Miscellaneous Functions
  - [ ] 🐣 7.8.1 String Operations
  - [ ] 🐣 7.8.2 Character Class Testing and Conversion
    - [ ] 🧩 Ex 7-9 `isupper`: save space vs save time
  - [ ] 🐣 7.8.3 Ungetc
  - [ ] 🐣 7.8.4 Command Execution
  - [ ] 🐣 7.8.5 Storage Management
  - [ ] 🐣 7.8.6 Mathematical Functions
  - [ ] 🐣 7.8.7 Random Number Generation

### Ch8 The UNIX System Interface [ ]  (ex 8-1 to 8-8, optional)
Why it matters: file descriptors, `open`/`read`/`write`. Skip unless time allows.
- [ ] 🌱 8.1 File Descriptors
- [ ] 🌱 8.2 Low Level I/O - Read and Write
- [ ] 🌱 8.3 Open, Creat, Close, Unlink
  - [ ] 🧩 Ex 8-1 `cat` with `read`/`write`/`open`/`close`; compare speed with the library version
- [ ] 🌱 8.4 Random Access - Lseek
- [ ] 🌱 8.5 Example - An Implementation of Fopen and Getc
  - [ ] 🧩 Ex 8-2 Rewrite `fopen` and `_fillbuf` with fields instead of bit operations
  - [ ] 🧩 Ex 8-3 `_flushbuf`, `fflush`, `fclose`
  - [ ] 🧩 Ex 8-4 `fseek`
- [ ] 🌱 8.6 Example - Listing Directories
  - [ ] 🧩 Ex 8-5 Make `fsize` print more inode information
- [ ] 🌱 8.7 Example - A Storage Allocator
  - [ ] 🧩 Ex 8-6 `calloc`
  - [ ] 🧩 Ex 8-7 Error checking in `malloc` for a too-large request
  - [ ] 🧩 Ex 8-8 `bfree`

### Appendices (reference, read when needed)
- [ ] Appendix A Reference Manual (skim: declarations, expressions, preprocessor)
- [ ] Appendix B Standard Library (know `stdio.h`, `string.h`, `stdlib.h`, `ctype.h`, `math.h`)
- [ ] Appendix C Summary of Changes (skip)

---

## Part B: Test automation projects (folder: test_automation_practice/)
Build in this order. Each one reuses the one before.
- [ ] 1. Read a text file line by line, print each line with its number
- [ ] 2. Parse a CSV of measurements (name, value) into an array of structs
- [ ] 3. Compare each value to low/high limits, print PASS/FAIL
- [ ] 4. Print a summary (total, passed, failed, pass rate)
- [ ] 5. Write the test report to a file with date, device ID, results
- [ ] 6. Take the input file and limits from the command line (`argc`/`argv`)
- [ ] 7. Parse a real-looking log (timestamps, ERROR/WARN lines) and count defects
- [ ] 8. Return an exit code (0 = all pass, 1 = any fail) so a script can use it

---

## Part C: JD skills (not only C)
| JD requirement | How I practice it | Ready? |
|----------------|-------------------|--------|
| Test plans, cases, scripts from specs | Write a 1-page test plan + 10 test cases for one of my C tools (inputs, expected, actual) | [ ] |
| Find, document, track defects | Keep `defects.md`: ID, steps to reproduce, expected vs actual, severity, status | [ ] |
| Test automation in C / Python / C# | Parts A + B in C. Redo projects 1 to 5 in Python (fast for me) | [ ] |
| Analyze results, give feedback | After projects 3 to 7, write 3 lines: what the data shows, what to fix | [ ] |
| Electronics / power supply basics | Learn: voltage, current, ripple, load regulation, efficiency, typical limits | [ ] |
| Production line testing | Read about pass/fail limits, yield, retest, test time; add a yield % to project 4 | [ ] |
| English documentation and communication | Write all reports and defect notes in English; explain one project aloud in 2 minutes | [ ] |

---

## Weekly review (every Sunday, 10 minutes)
- What did I finish this week?
- What was hardest? (copy it to the Log below)
- What is the plan for next week? (max 3 items)

## Log
| Date | What I did | Time (h) | Stuck on | Next step |
|------|-----------|----------|----------|-----------|
| 2026-11-02 | Set up folders, CLAUDE.md, JD saved, upgraded this file |1 |- | Ch1: ex 1-3 |
