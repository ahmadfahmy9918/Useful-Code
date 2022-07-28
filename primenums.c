#include <stdio.h>

int main(void)
{
int high, low, tf;


/////////////////////////////THIS IS MY OLDER BRUTE FORCE METHOD
//printf("hello world\n");
/*
printf("input a low range: \n");
scanf("%d", &low);
printf("\n");

printf("input a high range: \n");
scanf("%d", &high);
//printf("he;;o world");
printf("\n");

printf("Prime numbers between %d and %d are: \n", low, high);

for (int i = low; i < high; i++)
{

 if((i%2 != 0) && (i%3 != 0) && (i%4 != 0) && (i%5 != 0) && (i%6 != 0) && (i%7 != 0) && (i%8!= 0))
    {
    printf("\n%d\n", i);
    }

}
*/

printf("PRIME NUMBER CALCULATOR\n");
printf("________________________\n");


printf("Input the lower range: \n");
scanf("%d", &low);
printf("\n");

printf("Input the higher range: \n");
scanf("%d", &high);

printf("\n");

printf("Prime numbers between %d and %d are: \n", low, high);

for (int i = low; i < high; i++)
  {
        for(int j = 2; j < 1000000; j++)
        {
          if((i != j) && (i > j))
          {
            if (i%j == 0)
            {
              tf = 0;
              break;
            }

          }

         else
         {
            tf = 1;
         }

        }

    if(tf == 1)
    {
      printf("%d\n", i);
    }

  }

return(0);
}
