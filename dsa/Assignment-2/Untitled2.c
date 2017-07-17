#include<stdio.h>

void add(int *ptr1, int *ptr2, int m, int n, int x, int y)
{
    int i, j;
    if(m==x&&n==y)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("\t%d", *(ptr1+i+j)+*(ptr2+i+j));
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nError can't be added");
    }
}
void getdata(int *ptr, int m , int n)
{
    int i, j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", ptr+i+j);
        }
    }
}
void sub(int *ptr1, int *ptr2, int m, int n, int x, int y)
{
    int i, j;
    if(m==x&&n==y)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("\t%d", *(ptr1+i+j)-*(ptr2+i+j));
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nError can't be added");
    }
}
void transpose(int *ptr1, int m , int n)
{
    int i, j;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("\t%d",*(ptr1+(m-i)+(n-j)));
            }
            printf("\n");
        }
}
void mul(int *ptr1, int *ptr2, int m, int n, int x, int y)
{
    int i, j, k, sum=0;
    int c[100][100];
    if(m==x)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<y;j++)
            {
                for(k=0;k<x;k++)
                {
                    sum= sum+(*(ptr1+i+k)**(ptr2+k+j));

                }
                c[i][j]=sum;
                sum=0;
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<y;j++)
            {
                printf("\t%d",c[i][j]);
            }
            printf("\n");
        }
    }
}
void sdpt(int *ptr1, int m, int n)
{
    int i, j, k, t;
    int c[100];
    for(i=0;i<m;i++)
    {
        t1=a[i][0];
        for(j=0;j<n;j++)
        {
            if(t1<a[i][j])
                t2+=1;
            else
                t2=1';
        }
        if(t2==0)
        {
            t3=a[0][j];
            for(k=0;k<m, k++)
            {
                if(t3>a[])
            }
        }
    }
}
int main()
{
    int a[100][100],b[100][100],m,n, x, y, i, j,ch, ka;
    int *ptr1, *ptr2;
    ptr1=&a[0][0];
    ptr2=&b[0][0];
    printf("\nEnter size of matrix 1 and 2");
    scanf("%d%d%d%d", &m, &n, &x, &y);
    printf("\nEnter elts in matrix 1");
    getdata(ptr1, m, n);
    printf("\nEnter elts in matrix 2");
    getdata(ptr2, x, y);
    do
    {
        printf("\n Enter ur choice\n1.Addition\n2.Subtraction\n3.Multiply\n4.Transpose\n5.Saddle point");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: add(ptr1, ptr2, m, n, x, y);
                    break;
            case 2: sub(ptr1, ptr2, m, n, x, y);
                    break;
            case 3: mul(ptr1, ptr2, m, n, x, y);
                    break;
            case 4: transpose(ptr1, m, n);
                    transpose(ptr2, x, y);
                    break;
    /*        case 5: sdpt(ptr1, m, n);
                    sdpt(ptr2, x, y);
                    break;*/
        }
        printf("\nEnter 1 to continue");
        scanf("%d",&ka);
    }
    while(ka==1);
    return 0;
}
