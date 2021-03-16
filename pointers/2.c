#include <stdio.h>
#include <stdlib.h>

/*
 * main >> setPointer
 * main >> print
 */

void print(int *ptr);
int* setPointer(int val);

int main(void) {

   int* x;

   x = setPointer(777);
   print(x);

   free(x);

   return 0;
}

void print(int *ptr)
{
   printf("%d\n", *ptr);
}

int* setPointer(int val)
{
   int* pr = malloc(sizeof(int));
   *pr = val;

   return pr;
}
