#include<stdio.h>
typedef struct mat
	{
		int row;
		int col;
		int value;
	}mat;
	
int create(int row,int col,int mat[row][col]);
void sparse(mat mat1[],int row,int col,int mat[row][col],int size);
void printsparse(mat mat1[],int);
int sum(mat matA[],mat matB[],mat msum[],int max,int size1,int size2);
void transpose(mat matA[],mat matB[]);
void fasttrans(mat matA[],mat matB[],int col);
int main()
{
		int size1,size2;
		int row1,col1,row2,col2;
		again:
		printf("enter number of row and column in matrix 1\n");
		scanf("%d%d",&row1,&col1);
		int mat1[row1][col1];
		size1=create(row1,col1,mat1);
		struct mat matA[size1+1];
		printf("enter number of row and column in matrix 2\n");
		scanf("%d%d",&row2,&col2);
		int mat2[row2][col2];
		size2=create(row2,col2,mat2);
		struct mat matB[size2+1];
		sparse(matA,row1,col1,mat1,size1);
		sparse(matB,row2,col2,mat2,size2);
		printf("sparse form of matrix 1\n");
		printsparse(matA,size1);
		printf("sparse form of matrix 2\n");
		printsparse(matB,size2);
		int max;
		max=size1+size2+1;
		struct mat msum[max];
		max=sum(matA,matB,msum,max,size1,size2);
		printf("addition of two matrix is:\n");
		printsparse(msum,max);
		struct mat mT[size1];
		printf("transpose matrix 1:\n");
		transpose(matA,mT);
		printsparse(mT,size1);
		printf("transpose matrix 2:\n");
		transpose(matB,mT);
		printsparse(mT,size2);
		printf("fast transpose matrix 1:\n");
		fasttrans(matA,mT,col1);
		printsparse(mT,size1);
		printf("fast transpose matrix 2:\n");
		fasttrans(matB,mT,col2);
		printsparse(mT,size2);
		
}
void printsparse(mat mat1[],int size)
{	
	 	int i;
	 	printf("\nrow		col		value\n");
	 	for(i=0;i<size+1;i++)
	 	printf("%d		%d		%d\n",mat1[i].row,mat1[i].col,mat1[i].value);
}	
void sparse(mat mat1[],int row,int col,int mat[row][col],int size)
{
		mat1[0].row=row;
		mat1[0].value=size;
		mat1[0].col=col;
		int k=1,i,j;
		for(i=0;i<row;i++)
			{
			for(j=0;j<col;j++)
				{
					if(mat[i][j]!=0)
					{
					 mat1[k].row=i;
					 mat1[k].col=j;
					 mat1[k].value=mat[i][j];
					 k++;
					}
				}
		 }
}	
int create(int row,int col,int mat[row][col])
{
		int i,j;
		int count=0;
		int size=0;
		again:
		printf("enter element of matrix:\n");
		for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
					{
						scanf("%d",&mat[i][j]);
						if(mat[i][j]==0)
							{
							count=count+1;
							}
						else
							{
							size++;
							}
					}
			}
				if(count >= (row * col)/2)
					{
						printf("matrix is sparse\n");
					}
				else
					{
						printf("matrix is not sparse\n");
						goto again;
					}
				return size;
}

int sum(mat matA[],mat matB[],mat msum[],int max,int size1,int size2)
{
	int elem=1;
	int i=1,j=1,k=1;
	int rowa,rowb,cola,colb,vala,valb;
	if(matA[0].row!=matB[0].row&&matA[0].col!=matB[0].col)
	{
		printf("matrix sum is not possible");
	}
	while(elem<=(max-1))
	{
		if(i<=size1)
		{
			rowa=matA[i].row;
			cola=matA[i].col;
			vala=matA[i].value;
		}
		
		if(j<=size2)
		{
			rowb=matB[j].row;
			colb=matB[j].col;
			valb=matB[j].value;
		}
		
		if(rowa==rowb)
		{
			if(cola==colb)
			{
				msum[k].row=rowa;
				msum[k].col=cola;
				msum[k].value=vala+valb;
				j++;
				i++;
				max--;
			}
			
			if(cola<colb)
			{
				msum[k].row=rowa;
				msum[k].col=cola;
				msum[k].value=vala;
				i++;
			}
			
			if(cola>colb)
			{
				msum[k].row=rowb;
				msum[k].col=colb;
				msum[k].value=valb;
				j++;
			}
			k++;
	  }
	  
	 if(rowa<rowb)
			{
				msum[k].row=rowa;
				msum[k].col=cola;
				msum[k].value=vala;
				k++;
				i++;
			}
	  	
	if(rowa>rowb)
			{
				msum[k].row=rowb;
				msum[k].col=colb;
				msum[k].value=valb;
				j++;
				k++;
			}
	elem++;
	}
	msum[0].row=matA[0].row;
	msum[0].col=matA[0].col;
	msum[0].value=max-1;
	return max-1;
}
void transpose(mat matA[],mat matB[])
{
    int i,j,k,n;
   		matB[0].row=matA[0].row;
      matB[0].col=matA[0].col;
      matB[0].value=matA[0].value;
    
    k=1;
    n=matA[0].value;
    
    for(i=0;i<matA[0].col;i++)
        for(j=1;j<=n;j++)
            if(i==matA[j].col)
            {
                matB[k].row=i;
                matB[k].col= matA[j].row;
                 matB[k].value= matA[j].value;
                k++;
            }
}
void fasttrans(mat matA[],mat matB[],int col)
{
	int rowterm[10]={0};
	int startingpos[col];
	int i,j;
	matB[0].row=matA[0].col;
	matB[0].col=matA[0].row;
	matB[0].value=matA[0].value;
	if(matA[0].value>0)
	{
		for(i=1;i<matA[0].value;i++)
			rowterm[matA[i].col]++;
			
			startingpos[0]=1;
		for(i=1;i<matA[0].col;i++)
			startingpos[i]=startingpos[i-1]+rowterm[i-1];

		for(i=1;i<=matA[0].value;i++)
		{
			j=startingpos[matA[i].col]++;
			matB[j].row=matA[j].col;
			matB[j].col=matA[j].row;
			matB[j].value=matA[j].value;
		}
	}
	
}

















