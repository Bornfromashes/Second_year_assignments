#include<stdio.h>
int uni();
int inter();  //function declaration
int diff();
int symmdiff();
int main()
{
    int c;
    do
        {

    printf("what you want to perform\n1.UNION\n2.INTERSECTION\n3.DIFFERENCE\n4.SYMM DIFFERENCE\n5.exit\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        uni();
        break;
   case 2:
        inter();
        break;
     case 3:
       diff();
        break;
     case 4:
        symmdiff();
        break;

    }
}
while(c!=5);
}
int uni()     //union function defination
{
   int a,b,c,d,e,i;
   int hash[100000]={0};
    printf("enter element of set A\n");
    scanf("%d",&a);
    int A[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&A[i]);
        if(A[i]<0)
        {
            printf("no negative no should enter\n");
        }
       else{
        c=A[i];
        hash[c]++;
       }

    }
    printf("enter element of set B\n");
    scanf("%d",&b);
    int B[b];
     for(i=0;i<b;i++)
    {
        scanf("%d",&B[i]);
        c=B[i];
        hash[c]++;
    }
    printf("UNION IS:\n{");
    for(i=0;i<10000;i++)
        if(hash[i]>0)
    {
        printf("%d\t",i);
    }
    printf("}\n");
}
int diff()    //difference function defination
{
    int a,b,c,d,e,i;
   int hash[100000]={0};
    printf("enter element of set A\n");
    scanf("%d",&a);
    int A[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&A[i]);
        c=A[i];
        hash[c]++;

    }
    printf("enter element of set B\n");
    scanf("%d",&b);
    int B[b];
     for(i=0;i<b;i++)
    {
        scanf("%d",&B[i]);
        c=B[i];
        hash[c]++;
    }
    printf("difference IS:\n{");
    for(i=0;i<10000;i++)
        if(hash[i]==1)
    {
        printf("%d\t",i);
    }
    printf("}\n");
}
int inter()   //intersection function defination
{
    int a,b,c,d,e,i;
   int hash[100000]={0};
    printf("enter element of set A\n");
    scanf("%d",&a);
    int A[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&A[i]);
        c=A[i];
        hash[c]++;

    }
    printf("enter element of set B\n");
    scanf("%d",&b);
    int B[b];
     for(i=0;i<b;i++)
    {
        scanf("%d",&B[i]);
        c=B[i];
        hash[c]++;
    }
    printf("intersection IS:\n{");
    for(i=0;i<10000;i++)
        if(hash[i]>1)
    {
        printf("%d\t",i);
    }
    printf("}\n");
}
int symmdiff()   //symmetric difference function
{
    int a,b,c,d,e,i;
    int fhash[100000]={0};
   int hash[100000]={0};
    printf("enter element of set A\n");
    scanf("%d",&a);
    int A[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&A[i]);
        c=A[i];
        hash[c]++;

    }
    printf("enter element of set B\n");
    scanf("%d",&b);
    int B[b];
     for(i=0;i<b;i++)
    {
        scanf("%d",&B[i]);
        c=B[i];
        hash[c]++;
    }
    for(i=0;i<10000;i++)
        if(hash[i]>0)
    {
       fhash[i]++;
    }
     for(i=0;i<10000;i++)
        if(hash[i]>1)
    {
       fhash[i]++;
    } printf("SYMMETRIC DIFFERENCE:\n{");
    for(i=0;i<10000;i++)

        if(fhash[i]==0||fhash[i]>0)
    {
       printf("%d\t",i);
    }
    printf("}\n");
}
