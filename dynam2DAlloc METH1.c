#include <stdio.h>
#include <stdlib.h>
/* Dynamic allocation of arrays of more than one dimension  is easily done. You can simulate a two-dimensional  array with a single, dynamically-allocated one-dimensional  array. However, you must now perform subscript calculations  manually, accessing the [i][j]th element with  array[i * ncolumns + j]. Software engineers prefer this method for its elegance and efficiency */
int main (void){
	int nrows, ncols, i, j;
	int *numbers; /* pointer to the first cell ([0]) */
		printf ("How many rows and columns?> ");
	scanf ("%d%d", &nrows, &ncols);
numbers = (int *) calloc (nrows*ncols, sizeof(int));  /* allocating the array of integers */
	i=1; j=1;
	numbers[i*ncols+j] = 9; /* initializes one value to 9 */
		for (i=0; i<nrows; i=i+1)
	{
		for (j=0; j<ncols; j=j+1)
		{
			printf ("%3d ", numbers[i*ncols+j]);
		}		printf ("\n");
	}

	free (numbers);
	return (0);}
