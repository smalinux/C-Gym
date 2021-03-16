#include <stdio.h>
#include <stdlib.h>

int* assignIntVal(int *arr, int size);
void printIntArr(int *arr, int size);

int main(void) {
   int *myPr;
   int mySize = 30;

   myPr  = assignIntVal(myPr, mySize);
   printIntArr(myPr, mySize);

   free(myPr);
   return 0;
}

int* assignIntVal(int *arr, int size)
{
   arr    = malloc(size*sizeof(int));

   for(int i = 0; i < size; ++i)
      arr[i] = i;

   return arr;
}

void printIntArr(int *arr, int arrSize)
{
   int i;
   for(i = 0; i < arrSize; ++i)
      printf("index[%d] = %d\n", i, *(arr+i));
}
