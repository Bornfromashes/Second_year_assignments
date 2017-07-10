#include<stdio.h>


int main()
{
    int a[31],b[31];
    int m, n;
    int *i, *u;
    printf("\nEnter size of two array ");
    scanf("%d %d",&m,&n);
    getdata(&a[0], &b[0], m, n);
    sort(&a[0],m);
    sort(&b[0],n);
    display(&a[0], &b[0], m, n);
    i=intersection(&a[0], &b[0], m, n);
   // u=union(&a[0], &b[0], m, n);
   /* if(m==n)
    {
        sum(&a[0], &b[0], m);
        sub(&a[0], &b[0], m);
        multiply(&a[0], &b[0], m);

    }*/
}
void getdata(int *p, int *q, int m, int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        scanf("%d",p);
        p++;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",q);
        q++;
    }
}
void sort(int *p, int m)
{
    int i, j, temp;
    for(i=0;i<m;i++)
    {
        for(j=i;j<m;j++)
        {
            if(*(p+i)>=*(p+j))
            {
                temp= *(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
}
void display(int *p, int *q, int m, int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        printf("\n%d",*p);
        p++;
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",*q);
        q++;
    }
}
/*
void sum(int *p, int *q, int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        *(p+i)=*(p+i)+*(q+i);
    }
    for(i=0;i<m;i++)
    {
        printf("\n");
        printf("\n%d",*p);
        p++;
    }

} */

void sub(int *p, int *q, int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        *(p+i)=*(p+i)-*(q+i);
    }
    for(i=0;i<m;i++)
    {
        printf("\n");
        printf("\n%d",*p);
        p++;
    }
}
/*void multiply(int *p, int *q, int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        *(p+i)=*(p+i)**(q+i);
    }
    for(i=0;i<m;i++)
    {
        printf("\n");
        printf("\n%d",*p);
        p++;
    }
}*/
int* intersection(int *p, int *q, int m, int n)
{
    int i, j, k[31], o=0;;
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(*(p+i)==*(q+j))
            {
                k[o]=*(p+i);
                o++;
            }
        }
    }
    for(i=0;i<o;i++)
    {
        printf("\n");
        printf("\n %d",k[i]);
    }
    return &k[0];
}

/*int* union(int *p, int *q, int m, int n)
{
    int k[100];
    for(i=0; i<m; i++)
    {
        k[i]=*(p+i);
    }
    for(i=m;i<(m+n);i++)
    {
        k[i]==*j;
        j++;
    }
    return &k[0];
}
*/

