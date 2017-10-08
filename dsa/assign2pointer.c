#include<stdio.h>
int sum(int *a,int *b,int *c,int *d,int A[*a][*b],int B[*c][*d]);
int diff(int *a,int *b,int *c,int *d,int A[*a][*b],int B[*c][*d]);
int multi(int *a,int *b,int *c,int *d,int A[*a][*b],int B[*c][*d]);
int tran(int *a,int *b,int *c,int *d,int A[*a][*b],int B[*c][*d]);
int lowtri(int *a,int *b,int *c,int *d,int A[*a][*b],int B[*c][*d]);
int uptri(int *a,int *b,int *c,int *d,int A[*a][*b],int B[*c][*d]);
int saddle(int *a,int *b,int *c,int *d,int A[*a][*b],int B[*c][*d]);
int main()
{
    int i,j,k,l,p,q,r,s;
    printf("enter the no. of row and coloumn in matrix A\n");
    scanf("%d%d",&p,&q);
    printf("enter the no. of row and coloumn in matrix B\n");
    scanf("%d%d",&r,&s);
    int A[p][q];
    int B[r][s];
    printf("enter element of matrix A\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",(*(A+i)+j));
        }
    }
     printf("enter element of matrix B\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<s;j++)
        {
            scanf("%d",(*(B+i)+j));
        }
    }




   sum(&p,&q,&r,&s,A,B);
   diff(&p,&q,&r,&s,A,B);
   tran(&p,&q,&r,&s,A,B);
   multi(&p,&q,&r,&s,A,B);
   lowtri(&p,&q,&r,&s,A,B);
   uptri(&p,&q,&r,&s,A,B);
   saddle(&p,&q,&r,&s,A,B);


}
int sum(int *a,int *b,int *c,int *d,int A[*a][*b],int B[*c][*d])
{
 if(*a==*c&&*b==*d)
       {
        int l;
        int i,j;
    printf("\nsum of matrix A and B is\n");
     for(i=0;i<*a;i++)
    {
        printf("\n");
        for(j=0;j<*b;j++)
           {
              l=(*(*(A+i)+j))+(*(*(B+i)+j));
            printf("%d\t",l);
           }
    }

    }
    else{printf("\n\nsum not possible\n\n");}
    }
    int diff(int *a,int *b,int *c,int *d,int A[*a][*b],int B[*c][*d])
{
 if(*a==*c&&*b==*d)
       {
        int l;
        int i,j;
    printf("\ndiffrence of matrix A and B is\n");
     for(i=0;i<*a;i++)
    {
        printf("\n");
        for(j=0;j<*b;j++)
           {
              l=(*(*(A+i)+j))-(*(*(B+i)+j));
            printf("%d\t",l);
           }
    }

    }
    else{printf("\n\ndifference not possible\n\n");}
    }
    int tran(int *a,int *b,int *c,int *d,int A[*a][*b],int B[*c][*d])
    {
        int i,j,l;

    {
        printf("\n");
     printf("transpose of matrix A\n");
     for(i=0;i<*b;i++)
    {
        printf("\n");
        for(j=0;j<*a;j++)
           {
            l= *(*(A+j)+i);
            printf("%d\t",l);
           }
    }
    }
    printf("\n");
     printf("transpose of matrix B\n");
     for(i=0;i<*d;i++)
    {
        printf("\n");
        for(j=0;j<*c;j++)
           {
            l=*(*(B+j)+i);
            printf("%d\t",l);
           }
    }
    }
   int multi(int *a,int *b,int *c,int *d,int A[*a][*b],int B[*c][*d])
    {
         if(*b==*c)
    {
        int i,j,k,p=0,l;
        printf("\nmultiplication of matrix A and B is\n");
     for(i=0;i<*a;i++)

    {
        printf("\n");
        for(j=0;j<*d;j++)
           {

                  for(k=0;k<*d;k++)
                  {
                     l=*(*(A+i)+k)**(*(B+k)+j);
                     p=p+l;
                  }
                  printf("%d\t",p);
                  p=0;
           }
            }
               }
else printf("\nmultiplication not possible\n");
    }

 int lowtri(int *a,int *b,int *c,int *d,int A[*a][*b],int B[*c][*d])
    {
        if(*a==*b&&*b==*c&&*c==*d)
        {int i,j,l;
    printf("\nlower triangle matrix of A");
     for(i=0;i<*a;i++)
    {
        printf("\n");
        for(j=0;j<=i;j++)
           {
           l=*(*(A+i)+j);
            printf("%d\t",l);
           }
    }
    printf("\n");
     printf("\nlower triangle matrix of B\n");
     for(i=0;i<*a;i++)
    {
        printf("\n");
        for(j=0;j<=i;j++)

           {
            l=*(*(B+i)+j);
            printf("%d\t",l);
           }
    }

    }
    else printf("\nlower triangle not possible\n");
    }

 int uptri(int *a,int *b,int *c,int *d,int A[*a][*b],int B[*c][*d])
    {
        if(*a==*b&&*b==*c&&*c==*d)
        {int i,j,l,k,op;
    printf("\nupper triangle matrix of A\n");
     for(i=0;i<*a;i++)
    {
       for(j=i;(j>=i&&j<*a);j++)
           {
            l=*(*(A+i)+j);
            printf("%d\t",l);
           }
           printf("\n");
          for(k=0;k<=i;k++)
          {
              printf("\t");
          }
    }
    printf("\nupper triange matrix B\n");
     for(i=0;i<*a;i++)
    {
       for(j=i;(j>=i&&j<*a);j++)
           {
            op=*(*(B+i)+j);
            printf("%d\t",op);
           }
           printf("\n");
          for(k=0;k<=i;k++)
          {
              printf("\t");
          }
    }
    }
    else printf("\nupper triangle not possible\n");}
    int saddle(int *a,int *b,int *c,int *d,int A[*a][*b],int B[*c][*d])
    {

        int rmin[10000],cmax[100000],x,i,j;
 for( i=0;i<10000;i++)
 	cmax[i]=-100000;
 for(i=0;i<*a;i++)
 {
 	x=100000;
 	for(j=0;j<*b;j++)
 	{
 		if(*(*(A+i)+j)<x)
 			x=*(*(A+i)+j);
 		if(*(*(A+i)+j)>cmax[j])
 			cmax[j]=*(*(A+i)+j);
 	}
 	rmin[i]=x;
 }
 for(i=0;i<*a;i++)
 	for(j=0;j<*b;j++)
 		if((*(*(A+i)+j))==rmin[i]&&(*(*(A+i)+j))==cmax[j])
 			printf("\n%d is saddle point of matrix A \n",*(*(A+i)+j));

 for( i=0;i<10000;i++)
 	cmax[i]=-100000;
 for(i=0;i<*c;i++)
 {
 	x=100000;
 	for(j=0;j<*d;j++)
 	{
 		if(*(*(B+i)+j)<x)
 			x=*(*(B+i)+j);
 		if(*(*(B+i)+j)>cmax[j])
 			cmax[j]=*(*(B+i)+j);
 	}
 	rmin[i]=x;
 }
 for(i=0;i<*c;i++)
 	for(j=0;j<*d;j++)
 		if(*(*(B+i)+j)==rmin[i]&&*(*(B+i)+j)==cmax[j])
 			printf("\n%d is saddle point of matrix B \n",*(*(B+i)+j));
    }
