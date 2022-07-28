#include <stdio.h>
#include <stdlib.h>

int main(void)
{

        int i, array_size;
        int *LIST;				/* LIST is the name of the array */

/* Get the size of the array */
printf("Please enter the size of the array:"); 
        	scanf("%d", &array_size);
	 /* allocate enough memory to list */
	/*  LIST= (int *) calloc(array_size, sizeof(int) ); */
        	LIST= (int *) malloc ( array_size * sizeof(int) );
	 /* get the elements of the array from the user */
        for(i=0; i<array_size; i++)
                scanf("%d", &LIST[i]);
	/* print the array */
        for(i=0; i<array_size; i++)
                printf("%d\n", LIST[i]);



  return(0);
}
