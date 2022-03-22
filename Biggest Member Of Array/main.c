#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define ROWSIZE 5
#define COLSIZE	5

void getData(double _matrix[ROWSIZE][COLSIZE],int _rowsize,int _colsize)
{
   int i,j;
   // i and j indices,i is working on the rows, however j is working on the columns
   
   for(i=0;i<_rowsize;i++)	
   		for(j=0;j<_colsize;j++)
		   {
		   	 printf("Enter the value of matrix[%d,%d]",i+1,j+1);
		   	 scanf("%lf",&_matrix[i][j]);		   	
			   }	
}

void dispData(double _matrix[ROWSIZE][COLSIZE],int _rowsize,int _colsize)
{
   int i,j;
   
   for(i=0;i<_rowsize;i++){
   		for(j=0;j<_colsize;j++)
		   	 printf("%9.2f",_matrix[i][j]);		   	 
		printf("\n");		   	
   }
}

void dispMaxLoc(double _matrix[ROWSIZE][COLSIZE],int _rowsize,int _colsize)
{
	int i,j;
	double matrix[ROWSIZE][COLSIZE];
	int max;
	max = matrix[ROWSIZE][COLSIZE];
	for(i=0;i<_rowsize;i++)
	{
		for(j=0;j<_colsize;j++)
		{
			if(_matrix[i][j]>max) 
				max = _matrix[i][j];
		}
	}
	printf("EN BUYUK DEGER= %d\n",max); 
}

int main(int argc, char *argv[]) 
{ 
	double matrix[ROWSIZE][COLSIZE];
	getData(matrix,ROWSIZE,COLSIZE);
	dispData(matrix,ROWSIZE,COLSIZE);
	dispMaxLoc(matrix,ROWSIZE,COLSIZE);
    return 0; 
}  
