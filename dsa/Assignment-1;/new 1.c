#include<stdio.h>

int main()
{
    int c[5],i, m=5;
    for(i=0;i<5;i++)
    {
        scanf("%d",&c[i]);
    }
    sort(&c, 5);
    m=r(&c, 5);
    printf("\n{");
    for(i=0;i<m;i++)
    {
        printf("%d",c[i]);
    }
    printf("\n}");
    return 0;
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
    if (*(p+k) != *(p+i)) {              //comparing the first 2 unequal numbers
    *(p+k+1) = *(p+i);                 //shifting to the left if distinct
    k++;
    }
    }
    return k+1;
}


