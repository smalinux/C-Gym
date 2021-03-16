
#include <stdio.h>
#include <stdlib.h>

typedef struct Box_ {
   int height;
   int with;
} Box;

void assignIntVal(int *arr);
void printIntArr(int *arr);

void setString(char *arr);
void printString(char *arr);
void setBox(Box* myBox);
void printBox(Box* myBox);

int main(void) {

   // array of int
   int *intArr    = malloc(10*sizeof(int));
   // strings... or array of char
   char *string   = malloc(10*sizeof(char));
   //
   Box *myBox   = malloc(10*sizeof(Box));

   // manip ints
   assignIntVal(intArr);
   printIntArr(intArr);

   // manip strings
   setString(string);
   printString(string);

   // manip
   setBox(myBox);
   printBox(myBox);



   free(intArr);
   free(string);

   return 0;
}

void assignIntVal(int *arr)
{
   for(int i = 0; i < 10; ++i)
      arr[i] = i;
}

void printIntArr(int *arr)
{
   for(int i = 0; i < 10; ++i)
      printf("index[%d] = %d\n", i, *(arr+i));
}

void setString(char *arr)
{
   arr[0] = 's';
   arr[1] = 'h';
   arr[2] = 'i';
   arr[3] = 'b';

}

void printString(char *arr)
{
   printf("string= %s\n", arr);
}

void setBox(Box* myBox)
{
   for(int i = 0; i < 10; ++i)
   {
      myBox[i].height = i;
      myBox[i].with = i;
   }

}

void printBox(Box* myBox)
{
   for(int i = 0; i < 10; ++i)
      printf("Box[%d], height = %d with = %d\n", i, myBox[i].height, myBox[i].with);
}
