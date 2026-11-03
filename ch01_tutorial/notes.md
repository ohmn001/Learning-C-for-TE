# Notes

- What confused me: 
  - หลักการ getchar()
  - หลักการ putchar()
  - หลักการ EOF 
  - หลักการของ Bit , Byte
  - Size ของ datatype
- Key ideas:
- Mistakes I made (and the fix):
  - Ex 1-6: I thought typing `A` + Enter makes `getchar() != EOF` become 0 after one round.
    - Wrong: input `A\n` is two characters, so the expression is 1 twice.
      Then the program waits. `EOF` only comes with Ctrl+D.
    - I mixed two values: `getchar()` returns -1 at the end (that is EOF),
      but the expression `getchar() != EOF` is then 0.
  - Why `c` must be `int`, not `char`: `int` can hold all 256 characters plus EOF (-1).
