#include <stdio.h>

struct subjects_grade
{
   float math_grade;
   float science_grade;
   float english_grade;
} grade;

struct student {
   unsigned char id;
   unsigned int year;
   struct subjects_grade grade; // external nested struct
   struct more_info  // internal nested struct
   {
      float tall;
      int bla;
      int blabla;
      struct more_more_info // two level nested struct
      {
         int m_bla;
         int m_blabla;
      } more_more_info;
   } info;
};

int main(void) {

   struct student stu1;

   stu1.info.more_more_info.m_blabla = 55;
   stu1.grade.english_grade = 3; // access (internal & external) member

   //printf("%d %d %0.1f\n", stu1.id, stu1.year, stu1.grade);

   return 0;
}
