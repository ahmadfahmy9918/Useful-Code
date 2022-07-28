#include <stdio.h>
#define asize 5

void printarr_rev(int ray[])
{
  for (int i = asize; i > 0; i--)
   {
    printf("%d\n", ray[i]);
   }
}

int main(void)
{
  int arr[asize];

  for (int i = 0; i < asize; i++)
  {
    arr[i] = i;
  }

printarr_rev(arr);
//printf("111");

  return(0);
}
