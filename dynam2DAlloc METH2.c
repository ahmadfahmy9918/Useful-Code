#include <stdio.h>
#include <stdlib.h>
/* Dynamic allocation of arrays of more than one dimension  can also be done using a pointer pointing to an array of pointer and each pointer of that array pointing to an array  of values. With that method you can use the real 2-D  subscripts like array[i][j] */
int main (void){
	int nrows, ncols, i, j;
	int **numbers; /* pointer to the first cell ([0][0]) */
		printf ("How many rows and columns?> ");
	scanf ("%d%d", &nrows, &ncols);
		numbers = (int **) calloc (nrows, sizeof(int *)); /* allocating the array of pointers */
	for (i=0; i<ncols; ++i) 	/* allocating the array of integers */
		numbers[i] = (int *) calloc (ncols, sizeof(int));
	i=1; j=1;
	numbers[i][j] = 9; /* initializes one value to 9 */
			for (i=0; i<nrows; i=i+1)	{
		for (j=0; j<ncols; j=j+1)
		{
			printf ("%3d ", numbers[i][j]);		}
		printf ("\n");
	}	/* freeing the array */
	for (i=0; i<ncols; ++i)
		free (numbers[i]);	free (numbers);	return (0);}
