#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define N_STUDENT 5

int main(int argc, char *argv[]) 
{
	int i;
	int grade[N_STUDENT];
	printf("input 5 scores:");
	
	for (i=0;i<N_STUDENT;i++)
	  scanf("%d", &grade[i]);
	  
	for (i=0;i<N_STUDENT;i++)
	  printf("grade[%d] = %d\n", i, grade[i]);
	  
	return 0;
}
