#include<stdio.h>
int sum(int a,int b,int c,int d,int x[a][b],int y[a][b]);
int diff(int a,int b,int c,int d,int x[a][b],int y[a][b]);
int multi(int a,int b,int c,int d,int x[a][b],int y[a][b]);
int trans(int a,int b,int c,int d,int x[a][b],int y[a][b]);
int uptri(int a,int b,int c,int d,int x[a][b],int y[a][b]);
int lowtri(int a,int b,int c,int d,int x[a][b],int y[a][b]);
int saddle(int a,int b,int c,int d,int x[a][b],int y[a][b]);
int main()
{
int a,b,c,d,i,j;
int x;
do{
printf("enter the no. of row and coulumn in matrix A\n");
scanf("%d%d",&a,&b);
int A[a][b];
printf("enter the no. of row and coulumn in matrix B\n");
scanf("%d%d",&c,&d);
int B[c][d];
printf("enter element of matrix A\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
            scanf("%d",&A[i][j]);
    }
    printf("enter element of matrix B\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<d;j++)
        scanf("%d",&B[i][j]);
    }


        sum(a,b,c,d,A,B);
        diff(a,b,c,d,A,B);
        multi(a,b,c,d,A,B);
        trans(a,b,c,d,A,B);
        lowtri(a,b,c,d,A,B);
        uptri(a,b,c,d,A,B);
        saddle(a,b,c,d,A,B);
        printf("do you want to continue press 1 if yes\n");
        scanf("%d",&x);

    }while(x==1);
}
int sum(int a,int b,int c,int d,int A[a][b],int B[c][d])
    {
        if(a==c&&b==d)
       {
        int l;
        int i,j;
    printf("sum of matrix A and B is\n");
     for(i=0;i<a;i++)
    {
        printf("\n");
        for(j=0;j<b;j++)
           {
              l=A[i][j]+B[i][j];
            printf("%d\t",l);
           }
    }

    }
    else{printf("\n\nsum not possible\n\n");}
    }
int diff(int a,int b,int c,int d,int A[a][b],int B[c][d])
{
    if(a==c&&b==d)
    {
    int i,j,l;
    printf("\n\ndifference of matrix A and B is\n\n");
     for(i=0;i<a;i++)
    {
        printf("\n");
        for(j=0;j<b;j++)
           {
              l=A[i][j]-B[i][j];
            printf("%d\t",l);
           }
    }

    }
    else{printf("\ndifference is not possible\n");}
}
int multi(int a,int b,int c,int d,int A[a][b],int B[c][d])
{
    if(b==c)
    {
        int i,j,k,p=0,l;
        printf("\nmultiplication of matrix A and B is\n");
     for(i=0;i<a;i++)

    {
        printf("\n");
        for(j=0;j<d;j++)
           {

                  for(k=0;k<d;k++)
                  {
                     l=(A[i][k]*B[k][j]);
                     p=p+l;
                  }
                  printf("%d\t",p);
                  p=0;
           }
            }
               }
else printf("\nmultiplication not possible\n");
}
int trans(int a,int b,int c,int d,int A[a][b],int B[c][d])
    {
       int i,j,l;

    {
        printf("\n");
     printf("transpose of matrix A\n");
     for(i=0;i<b;i++)
    {
        printf("\n");
        for(j=0;j<a;j++)
           {
            l=A[j][i];
            printf("%d\t",l);
           }
    }
    }
    printf("\n");
     printf("transpose of matrix B\n");
     for(i=0;i<d;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
           {
            l=B[j][i];
            printf("%d\t",l);
           }
    }

    }
    int lowtri(int a,int b,int c,int d,int A[a][b],int B[c][d])
    {
        if(a==b&&b==c&&c==d)
        {int i,j,l;
    printf("\nlower triangle matrix of A");
     for(i=0;i<a;i++)
    {
        printf("\n");
        for(j=0;j<=i;j++)
           {
           l=A[i][j];
            printf("%d\t",l);
           }
    }
    printf("\n");
     printf("\nlower triangle matrix of B\n");
     for(i=0;i<a;i++)
    {
        printf("\n");
        for(j=0;j<=i;j++)

           {
            l=B[i][j];
            printf("%d\t",l);
           }
    }

    }
    else printf("\nlower triangle not possible\n");
    }
    int uptri(int a,int b,int c,int d,int A[a][b],int B[c][d])
    {
        if(a==b&&b==c&&c==d)
        {int i,j,l,k;
    printf("\nupper triangle matrix of A\n");
     for(i=0;i<a;i++)
    {
       for(j=i;(j>=i&&j<a);j++)
           {
            l=A[i][j];
            printf("%d\t",l);
           }
           printf("\n");
          for(k=0;k<=i;k++)
          {
              printf("\t");
          }
    }
    printf("\nupper triange matrix B\n");
     for(i=0;i<a;i++)
    {
       for(j=i;(j>=i&&j<a);j++)
           {
            c=B[i][j];
            printf("%d\t",c);
           }
           printf("\n");
          for(k=0;k<=i;k++)
          {
              printf("\t");
          }
    }
    }
    else printf("\nupper triangle not possible\n");}
    int saddle(int a,int b,int c,int d,int A[a][b],int B[c][d])
    {
        int rmin[10000],cmax[100000],x,i,j;
 for( i=0;i<10000;i++)
 	cmax[i]=-100000;
 for(i=0;i<a;i++)
 {
 	x=100000;
 	for(j=0;j<b;j++)
 	{
 		if(A[i][j]<x)
 			x=A[i][j];
 		if(A[i][j]>cmax[j])
 			cmax[j]=A[i][j];
 	}
 	rmin[i]=x;
 }
 for(i=0;i<a;i++)
 	for(j=0;j<b;j++)
 		if(A[i][j]==rmin[i]&&A[i][j]==cmax[j])
 			printf("\n%d is saddle point of natrix A is\n",A[i][j]);

 for( i=0;i<10000;i++)
 	cmax[i]=-100000;
 for(i=0;i<c;i++)
 {
 	x=100000;
 	for(j=0;j<d;j++)
 	{
 		if(B[i][j]<x)
 			x=B[i][j];
 		if(B[i][j]>cmax[j])
 			cmax[j]=B[i][j];
 	}
 	rmin[i]=x;
 }
 for(i=0;i<c;i++)
 	for(j=0;j<d;j++)
 		if(B[i][j]==rmin[i]&&B[i][j]==cmax[j])
 			printf("\n%d is saddle point of natrix B is\n",B[i][j]);
    }




