/*
 *
 * https://www.youtube.com/watch?v=FuCYtnIPfe0
 *
 */

#include <stdio.h>

typedef struct MyData {
   //int x;

   int* (*AddOne) (int * x);
   int* (*Square) (int * x);
   int* (*SubtractTen) (int * x);
   void (*ForEach) (int * x);
} MyData;

int* AddOne(int* x) {
   (*x) +=1;
   return x;
}

int* Square(int* x) {
   (*x) *=(*x);
   return x;
}

int* SubtractTen(int* x) {
   (*x) -= 10;
   return x;
}

void ForEach(int* x) {
   printf("%d\n", *x);
}

int main()
{
   int x = 7;

   MyData myData = {
      .AddOne = AddOne,
      .Square = Square,
      .SubtractTen = SubtractTen,
      .ForEach = ForEach,
   };

   //
   //myData.AddOne(&x)->myData.ForEach(&x);
   //ToList();
   myData.AddOne(&x);
   myData.Square(&x);
   myData.SubtractTen(&x);
   myData.ForEach(&x);

   return 0;
}
