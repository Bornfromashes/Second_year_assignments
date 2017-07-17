#include<stdio.h>

int main()
{
    int a[31], b[31],x,z;
    int *g, *h;
    int m,n;
    printf("\nEnter size of array 1 and array 2");
    scanf("%d%d",&m, &n);
    getdata(&a, m);
    getdata(&b,n);
    sort(&a,m);
    sort(&b,n);
    m=r(&a,m);
    n=r(&b,n);
    display(&a,m);
    display(&b,n);
    do
    {
        printf("\n Enter ur choice 1.union 2. intersection 3. difference 4. symmetric difference");
        scanf("%d",&x);
        switch(x)
        {
            case 1: uni(&a, &b, m, n);
                    break;
            case 2: intersection(&a, &b, m, n);
                    break;
            case 3: difference(&a, &b, m, n);
                    break;
            case 4: symmetric(&a, &b, m, n);
                    break;
        }
        printf("\n Enter 1 to continue ");
        scanf("%d", &z);
    }while(z==1);

    return 0;
}
void getdata(int *p, int m)
{
    int i, j;
    for(i=0;i<m;i++)
    {
        scanf("%d",p);
        p++;
    }
}
void sort(int *p, int m)
{
    int i, j, temp,c[31],l=0;
    for(i=0;i<m;i++)
    {
        for(j=i;j<m;j++)
        {
            if(*(p+i)>*(p+j))
            {
                temp= *(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
}
int r(int *p, int m)
{
    int k = 0,i;
    for (i = 1; i < m; i++)
    {
    if (*(p+k) != *(p+i)) {
    *(p+k+1) = *(p+i);
    k++;
    }
    }
    return k+1;
}
void display(int *p, int m)
{
    int i,j;
    printf("\n{");
    for(i=0;i<m;i++)
    {
        printf("\n%d",*p);
        p++;
    }
    printf("\n}");
}
void uni(int *p, int *q, int m, int n)
{
    int i,j,d[31],l;
    for(i=0;i<m;i++)
    {
        d[i]=*(p+i);
    }
    for(i=m; i<m+n; i++)
    {
        d[i]=*(q+i-m);
    }
    l=m+n;
    sort(&d, l);
    l=r(&d, l);
    display(&d, l);
}
void intersection(int *p, int *q, int m, int n)
{
    int i,j,d[31],l=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(*(p+i)==*(q+j))
            {
                d[l]=*(p+i);
                l++;
            }
        }
    }
    sort(&d, l);
    l=r(&d, l);
    display(&d, l);
}
void difference(int *p, int *q, int m, int n)
{
    int i, j, d[31], l=0, o=0, e[31];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(*(p+i)==*(q+j))
            {
                d[l]=*(p+i);
                l++;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<l;j++)
        {
            if(*(p+i)==d[i])
            {
                j++;
            }
            else
            {
                e[o]=*(p+i);
                o++;
            }

        }
    }
    display(&e, o);
}
void symmetric(int *p, int *q, int m, int n)
{
    int i,j,d[31],l=0,c[31],y=0,f[31],v;
    for(i=0;i<m;i++)
    {
        d[i]=*(p+i);
    }
    for(i=m; i<m+n; i++)
    {
        d[i]=*(q+i-m);
    }
    v=m+n;
    sort(&d, v);
    v=r(&d, v);
    display(&d, v);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(*(p+i)==*(q+j))
            {
                c[y]=*(p+i);
                y++;
            }
        }
    }
    sort(&c, y);
    y=r(&c, y);
    display(&c, y);
    for(i=0; i<v; i++)
    {
        for(j=0;j<y;j++)
        {
            if(d[i]!=c[j])
            {
                f[l]=d[i];
                l++;
            }

        }
    }
    sort(&f, l);
    l=r(&f, l);
    display(&f, l);
}
