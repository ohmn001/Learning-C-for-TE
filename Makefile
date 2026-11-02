# Usage: make run FILE=ch01_tutorial/ex1-01_hello.c
# -Wall -Wextra shows warnings, which catch many beginner mistakes early.
CFLAGS = -Wall -Wextra -std=c99

run:
	gcc $(CFLAGS) $(FILE) -o /tmp/c_out && /tmp/c_out

# Without make, the same thing is:
#   gcc -Wall -Wextra -std=c99 FILE -o out && ./out   (see CHEATSHEET.md)
