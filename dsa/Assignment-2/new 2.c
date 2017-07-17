#include<stdio.h>

int main()
{
    int i, j , a[31][31], b[31][31], m, n, p, q , x, r;
    printf("\n Enter no. of elements in matrix 1 and 2");
    scanf("%d%d%d%d",&m,&n,&p,&q);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    display(a, m, n);
    display(b, p, q);
    do
    {
        printf("\nEnter ur choice 1.Addition 2. Subtraction 3.Multiplication 4.Transpose 5.Saddle Point");
        scanf("%d",&x);
        switch(x)
        {
            case 1: add(a, b, m, n, p, q);
                    break;
            case 2: sub(a, b, m, n, p, q);
                    break;
            case 3: mul(a, b, m, n, p, q);
                    break;
            case 4: transpose(a, m, n);
                    transpose(b, p, q);
                    break;
            case 5: center(a, m, n);
                    break;
        }
        printf("\n Enter 1 to continue");
        scanf("%d", &r);

    }while(r==1);
    return 0;
}
void add(int a[31][31], int b[31][31], int m, int n, int p, int q)
{
    int i,j;
    if(m==p&&n==q)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                a[i][j]=a[i][j]+b[i][j];
            }
        }
    }
    display(a, m, n);

}
void display(int a[31][31], int m, int n)
{
    int i, j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
}
void sub(int a[31][31], int b[31][31], int m, int n, int p, int q)
{
    int i, j;
    if(m==p&&n==q)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                a[i][j]=a[i][j]-b[i][j];
            }
        }
    }
    display(a, m, n);
}
void mul(int a[31][31], int b[31][31], int m, int n, int p, int q)
{
    int i, c[m][q], j, sum=0,k;
    if(m==q)
    {
        for(i=0;i<m; i++)
        {
            for(j=0;j<q;j++)
            {
                for(k=0;k<p;k++)
                {
                    sum=sum+(a[i][k]*b[k][j]);
                }
                c[i][j]=sum;
                sum=0;
            }
        }
    }
    display(c, n, p);
}
void transpose(int a[31][31], int m, int n)
{
    int i, j;
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("\t%d",a[j][i]);
        }
    }
}
void center(int a[31][31], int m, int n)
{
    int i, j, c[31], flag, flag1, e=0, z, k;
    for(i=0;i<m;i++)
    {

        for(j=0;j<n;j++)
        {
            z=a[i][j];
            for(k=0;k<m;k++)
            {
                if(z<a[i][k])
                {
                    flag=0;
                }
            }
            if(flag!=0)
            {
                for(k=0;k<n;k++)
                {
                    if(z>a[k][j])
                    {
                        flag1=0;
                    }
                }
            }
            if(flag1!=0)
            {
                c[e]=z;
                e++;
            }
        }
    }
    for(i=0;i<e;i++)
    {
        printf("\t%d",c[i]);
    }
}

