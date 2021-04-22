#include <stdio.h>

int main(void) {

   char *arr[1] = {"Sohaib"}; // if int instead of char, may be work but still awkward

   for (int i = 0; i < 1000; ++i) {
      printf("%s", arr[i]);
   }
   return 0;
}
