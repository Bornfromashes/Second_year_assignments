#include<stdio.h>
int main()
{
    int m , n, a[100][100], i, j;
    int *ptr;
    ptr= &a[0][0];
    printf("\nEnter size of the martix 1");
    scanf("%d%d", &m, &n);
    printf("\n Enter matrix 1 elements ");
    getdata(ptr, m , n );
    disp(ptr, m, n);
    return 0;
}
void getdata(int *p, int m, int n)
{
    int i, j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", p+i+j);
        }
    }
}
void disp(int *p, int m , int n)
{
    int i, j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",*(p+i+j));
        }
        printf("\n");
    }

}
