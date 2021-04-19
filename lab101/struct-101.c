#include <stdio.h>

struct student {
   unsigned char id;
   unsigned int year;
   float grade;
} stu1={1, 2017, 3.7};

struct school {
   unsigned char id;
   unsigned int year;
   float grade;
} school1, school2, school3;

int main(void) {

   struct student stu2;
   struct student stu3 = {2, 2019, 4};

   stu2.grade = 3;

   // =========================================================================

   struct student *p_stu;

   p_stu = &stu1;

   (*p_stu).grade = 3.3;      /* You will not use this style ever... don't worry... */

   p_stu->id = 11;   /* Access member with -> equal to (*ptr).
                        but -> more readable... */

   printf("%d %d %0.1f\n", stu1.id, stu1.year, stu1.grade);

   // =========================================================================

   return 0;
}
