#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void swap (int *n1,int *n2)
{
	int temp;
	temp =	*n1;
	*n1 =	*n2;
	*n2 =	temp;
}

int main(int argc, char *argv[]) 
{ 
	int x[2][2]={{1,2},{3,4}};
	int* ptr;
	int i,j;
	int sayi=6;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			ptr=&x[i][j];
			printf("*ptr= %d \n",*ptr);	
		}
	}
	swap(&x[0][1],&sayi);
	printf("%d\n",x[0][1]);
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			ptr=&x[i][j];
			printf("*ptr= %d \n",*ptr);	
		}
	}
    return 0; 
}  
