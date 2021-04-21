/*
<olamo> hi, why C compiler accept `const char *arr[]` and not accept `char *arr[]` ?? thanks
<fizzie> olamo: That question needs more context on it. Certainly there's places where `char *arr[]` is fine.

<olamo> fizzie: where/when are these places where `char *arr[]` is fine, please??
<olamo> fizzie: my code: https://github.com/smalinux/C-Gym/blob/bc2efa0533e70b9b00e67e756908d0c2e89202e9/lab101/char**.c#L40

<fizzie> That's one of those places, for example.
<fizzie> If you're getting errors from that code, but it works with a `const char *cc[10]`, then chances are you're compiling it as C++ rather than C. (Of course even in C you might prefer to use a `const char *` type when pointing at the contents of a string literal; there's certainly nothing *wrong* with it. But it's not required.)

<olamo> fizzie: It's acceptable here because I use inline initialization. I think. it has compiled well but I get a Segmentation fault,, I use `clang mycode.c`
<fizzie> Well. Strictly speaking, passing a null pointer to the %s conversion specifier (like you're doing for pp_c[9] through pp_c[5]) is undefined. Though quite often it will just print "(null)" or some-such anyway.

<olamo> fizzie: hah, Thank you so much :)
*/

#include <stdio.h>

int main(void) {

   char *cc[]= {
                     "Hello",
                     "Sohaib",
                     "Ahmed",
                     "Ibrahib",
                     "zfs.arc",
                     NULL     // Why ?? because freedom is dangerous :)
   };


   int i = 0;
   do {
      if(!cc[i]) // if == NULL then break
         break;
      printf("pp_c[%d] = %s\n", i, cc[i]);
   } while(++i);

   return 0;
}
