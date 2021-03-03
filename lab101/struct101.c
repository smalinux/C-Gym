#include <stdio.h>
#include <stdlib.h>

typedef struct contactInfo
{
    int number;
    char id;
} ContactInfo;

int main(void) {

   ContactInfo nom,*ptr;

   ptr=malloc(2*sizeof(ContactInfo));
   ptr->id = 'S';
   ptr->number = 33;

   printf("id: %c\nNumber: %d", ptr->id, ptr->number);

   return 0;
}
