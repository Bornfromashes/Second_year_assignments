#include<stdio.h>

int main()
{
    int a[31], b[31];
    int m,n;
    printf("\nEnter size of array 1 and array 2");
    scanf("%d%d",&m, &n);
    getdata(&a, m);
    getdata(&b,n);
    sort(&a,m);
    sort(&b,n);
    remove(&a, m);
    remove(&b, n);
    display(&a,m);
    display(&b,n);
   // union_(&a,&b,m,n);
  //  intersection(&a, &b, m, n);
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
    for(i=0;i<m-1;i++)
    {
        if(*(p+i)!=*(p+i+1))
        {
            c[l]=*(p+i);
            l++;
        }
        else
            i++;

    }
    c[l]=*(p+m);
    m=l;
    for(i=0;i<m;i++)
    {
        *(p+i)=c[i];
    }
}
void remove(int *p, int m)
{int i, j, k;
for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;)
        {
            if(*(p+i)=*(p+j))
            {
                for(k=j;k<m-1;++k)
                {
                    *(p+k)=*(p+k+1);
                }
                --m;
            }
            else
                ++j;
        }
    }
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
void union_(int *p, int *q, int m, int n)
{
    int i,j, c[m+n];
    for(i=0;i<(m+n);i++)
    {
        if(i<m){
           c[i]=*(p+i);
        }
        else{
            c[i]=*(q+i-m);
        }
    }
    display(&c, m+n);
}
void intersection(int *p, int *q, int m, int n)
{
    int i,j,c[31],l=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(*(p+i)==*(q+j))
            {
                c[l]=*(p+i);
                l+=1;
            }
        }
    }
    display(&c, l);
}
void difference(int *p, int *q, int m, int n)
{
    int i,j,c[31],l=0;
    for(i=0;i<m;i++)
    {
        if(*(p+i)!=*(q+i))
            {
                c[l]=*(p+i);
                l++;
            }
            else
            {
                i++;
            }
    }
    display(&c, l);

}


