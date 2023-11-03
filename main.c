#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define ROWS 3
#define COLS 3

void addMatrix(int A[][COLS], int B[][COLS], int C[][COLS])
{
	//C = A + B : for loop
	int i, c;
	
	for (i=0;i<3;i++)
	{
		for (c=0;c<3;c++)
		C[i][c] = A[i][c] + B[i][c];
	}
}

void printMatrix(int C[][COLS])
{
	//for loop - A의 요소를 각자 출력 
	int i, c;
	
	for (i=0;i<3;i++)
	{
		for(c=0;c<3;c++)
		  printf("%d ", C[i][c]);
		printf("\n");
	}
}

int main(int argc, char *argv[]) 
{
	int A[ROWS][COLS] = {
		{2,3,0},
		{8,9,1},
		{7,0,5}};
	int B[ROWS][COLS]= {
		{1,0,0},
		{0,1,0},
		{0,0,1}};
	int C[ROWS][COLS];
	
	addMatrix(A,B,C);
	printMatrix(C);

	return 0;
}
