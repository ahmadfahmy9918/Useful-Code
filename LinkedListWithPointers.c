#include <stdio.h>
#include <string.h>

typedef struct beaches {
int number;
  struct beaches* next;

}beach;


int main(void)
{
  beach b1, b2, b3, b4, b5, b6;
  beach *ptr; b1.number = 27; b2.number = 45; b3.number = 61; b4.number = 36; b5.number = 80;
  b6.number = 90; b6.next = &b5;
  ptr = &b2;
  b1.next = NULL;
  b3.next = &b1;
  b4.next = &b3;
  b2.next = &b4;
  b5.next = &b6;

  while(ptr !=NULL)
  {
  printf("%d\n", ptr -> number);
  ptr = ptr -> next;
  }


return(0);
}
