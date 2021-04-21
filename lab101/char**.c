//
// 1
// char *   means single char or chain of chars(string)
//
// <olamo> ,english char *c
// <candide> olamo: Declare `c` as a pointer to char. or list of chars....
//
// 2
// char **  means list of single char or strings
//
// <olamo> ,english char *cc[10]
// <candide> olamo: Declare `cc` as an array of 10 elements of pointer to char.

#include <stdio.h>

int main(void) {

   // single * means single char or chain of chars(string)
   char *p_c;
   char c[10] = "hello";
   //            ^^^^^
   //            |||||
   //            ||||`-- has it's own address c[0] or p_c[0]
   //            |||`--- has it's own address
   //            ||`---- has it's own address
   //            |`----- has it's own address
   //            `------ has it's own address

   p_c = c;    // c == &c  because it is name of array.

   printf("p_c = %s\n", p_c);
   printf("p_c = %c\n", p_c[0]);       // output: h
   printf("p_c = %c\n", c[0]);         // output: h



   // #########################################################################

   char **pp_c;
   char *cc[10]= {
                     "Hello",
                     "Sohaib",
                     "Ahmed",
                     "Ibrahib",
                     "zfs.arc"
   };

   pp_c = cc;           // cc == &cc   because it is name of array.
   // <olamo> ,english char *cc[10]
   // <candide> olamo: Declare `cc` as an array of 10 elements of pointer to char.


   int i = 10;
   while(i--) {
      printf("pp_c[%d] = %s\n", i, pp_c[i]);
   }

   return 0;
}
