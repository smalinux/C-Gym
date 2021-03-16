#include <stdio.h>
#include <stdlib.h>

/*
 * main >> setPointer
 * main >> print
 */

void print(int *ptr);
void setPointer(int *ptr, int val);

int main(void) {

   int* pr = malloc(sizeof(int));

   setPointer(pr, 777);
   print(pr);

   free(pr);
   return 0;
}

void print(int *ptr)
{
   printf("%d\n", *ptr);
}

void setPointer(int* ptr, int val)
{
   *ptr = val;
}
