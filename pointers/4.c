#include <stdio.h>
#include <stdlib.h>

void assignIntVal(int *arr);
void printIntArr(int *arr);

int main(void) {

   // array of int
   int *intArr    = malloc(10*sizeof(int));
   // manip ints
   assignIntVal(intArr);
   printIntArr(intArr);

   free(intArr);

   return 0;
}

void assignIntVal(int *arr)
{
   for(int i = 0; i < 10; ++i)
      arr[i] = i;
}

void printIntArr(int *arr)
{
   for(int i = 0; i < 20; ++i)
      printf("index[%d] = %d\n", i, *(arr+i));
}
