/*
 *
 * https://www.youtube.com/watch?v=FuCYtnIPfe0
 *
 */

#include <stdio.h>
#include <stdlib.h>
#define NELEMS 7

typedef struct MyData {
   int* (*AddOne) (int * x);
   int* (*Square) (int * x);
   int* (*SubtractTen) (int * x);
   void (*ForEach) (int * x);
} MyData;

int* AddOne(int x[]) {
   for(int i = 0; i < NELEMS; ++i)
      (x[i]) +=1;
   return x;
}

int* Square(int x[]) {
   for(int i = 0; i < NELEMS; ++i)
      (x[i]) *=(x[i]);
   return x;
}

int* SubtractTen(int x[]) {
   for(int i = 0; i < NELEMS; ++i)
      (x[i]) -= 10;
   return x;
}

void ForEach(int x[]) {
   for(int i = 0; i < NELEMS; ++i)
      printf("%d\n", x[i]);
}

int main()
{
   int List[] = {7, 4, 5, 6, 3, 8, 10};

   MyData myData = {
      .AddOne = AddOne,
      .Square = Square,
      .SubtractTen = SubtractTen,
      .ForEach = ForEach,
   };

   myData.AddOne(List);
   myData.Square(List);
   myData.SubtractTen(List);
   myData.ForEach(List);

   return 0;
}
