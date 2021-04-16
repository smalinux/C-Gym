/*
 * ModernC: https://github.com/smalinux/books/blob/main/ModernC.pdf
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int x;

# define max(a, b) ((a) < (b) ? (b) : (a))

int main(void) {

   int x = 8;
   printf("%d\n", max(x++, 8)); // What you expect??
                                 // A7a !!

   return 0;
}
