#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
   int * arr = malloc(10 * sizeof(int));

   //*arr = {1,2,3};     # error
   //*arr = (int){1,2,3};     # error
   memcpy(arr, (int[10]){1,2,3}, sizeof(int)*10);

   for(int i = 0; i < 3; ++i)
      printf("%d", arr[i]);

   return 0;
}
