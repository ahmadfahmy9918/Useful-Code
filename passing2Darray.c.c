#include <stdio.h>
#define 	row 		3
#define 	column 	5
/* When using a 2D array as an argument,		*/
/* We don't need to indicate the 1st dimension 	*/
/* We can mention the 1st dimension if we want       */
void GetMatrix(int Mat[ ][column]);
void PrintMatrix(int Mat[ ][column]);
main( ){
	int MatA[row][column]; /* Declare a 2D matrix */
	GetMatrix(MatA);      /* Call  function to input the matrix*/
	PrintMatrix(MatA);   /* Call function to display the matrix */
}/* To get elements of a matrix from the user */
void GetMatrix(int Mat[ ][column]){
int i, j;
puts("");
for(i= 0; i<row; i++)
		for(j= 0; j<column; j++){
			printf("Matrix[%d][%d]: ", i, j);
			scanf("%d", &Mat[i][j]);
		}}/* To print a matrix */
void PrintMatrix(int Mat[ ][column]){
int i, j;
	for(i= 0; i<row; i++){
		for(j= 0; j<column; j++)
			printf("%5d",Mat[i][j]);
		printf("\n");
	}}
