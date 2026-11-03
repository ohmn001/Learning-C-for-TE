// K&R Ex 1-7: EOF is a macro from stdio.h (usually -1). It is not a real
// character, which is why getchar() results must be stored in int, not char.
#include <stdio.h>

int main(void)
{
    printf("EOF is %d\n", EOF);
    return 0;
}