/*
ModernC says:
      is obviously ugly, and you shouldn’t abuse it. But it is a
   standard trick to surround one or several statements with a {} block without changing the
   block structure that is visible to the naked eye.
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int x;

# define DO_ONCE (x);                  \
do {                                   \
   if ( x < 10) {                      \
      printf("%d\n", x);             \
      printf("%s\n", "Hello, world");  \
   }                                   \
} while ( false );                     \


int main(void) {

   if (1)
      DO_ONCE(2);

   return 0;
}
