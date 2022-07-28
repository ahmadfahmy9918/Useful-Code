#include <stdio.h>


//PRODUCES FIBONACCI NUMS IN LINE 18
int main(void)
{
  int n1, n2, n3;

  n1 = 1;
  n2 = n1;

  for (int i = 0; i < 100000; i++)
  {
    n3 = n1 + n2;
    n1 = n2;
    n2 = n3;

    if((n3 > 50) && (n3 < 100))
    {
      printf("%d\n", n3);
    }



  }




  return(0);
}
