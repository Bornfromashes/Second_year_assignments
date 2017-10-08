#include<stdio.h>
int main()
{
    char a[1000];
    char b[1000];
    char c[1000];
    char d[1000];
    int i,j,k,l,x,z;
   do{
    printf("enter first string\n");
   scanf("%s",a);
    printf("enter second string\n");
  scanf("%s",b);
    printf("you enter string 1 is:\n");
    for(i=0;a[i]!='\0';i++)
        {
           printf("%c",a[i]);
        }
        printf("\nyou enter string 2 is:\n");
        for(j=0;b[j]!='\0';j++)
       {
           printf("%c",b[j]);
       }
        printf("\n\nlength of string 1\n%d\nlength of string 2\n%d",i,j);


       for(k=i,l=0;k<(i+j);l++,k++)
       {
           a[k]=b[l];
        }
        printf("\n\nconcatation of two string is:\n");
        for(k=0;k<(i+j);k++)
        {
            printf("%c",a[k]);
        }
        printf("\n\nreverse of string 1:\n");
        for(k=(i-1),l=0;k>=0;k--,l++)
            {
                c[l]=a[k];
            }
        for(l=0;l<i;l++)
        {
            printf("%c",c[l]);
        }
         printf("\nreverse of string 2:\n");
        for(k=(j-1),l=0;k>=0;k--,l++)
            {
                d[l]=b[k];
            }
        for(l=0;l<j;l++)
        {
            printf("%c",d[l]);
        }
        printf("\n\nchecking whether string is palindrone or not\n");
        for(k=0;k<i;k++)
        {
            if(c[k]==a[k])
            {
               l=0;
            }
                else
                {
                    l=l+1;
                    printf("\nstring 1 not palindrome\n");
                    break;
                }

        }
        if(l==0)
        printf("\nstring 1 is palindrome\n");


        for(k=0;k<j;k++)
        {
            l=0;
            if(d[k]==b[k])
            {
               l=0;
            }
                else
                {
                    l=l+1;
                    printf("\nstring 2 not palindrome\n");
                    break;
                }

        }
        if(l==0)
        printf("\nstring 2 is palindrome\n");
        printf("\n\ncomparing two strings\n");
        if(i==j)
        {
          for(k=0;k<i;k++)
               {
                if(a[k]==b[k])
          {
              l=2;
          }
          else {printf("\ntwo string not equal");break;}
        }
        }
        else
           {
               printf("\ntwo sting not equal\n");
           }
            if(l==2)
                {printf("\ntwo strings are equal\n");}
                 printf("\n\nsubstring\n");
        printf("enter the index from which you want to find substring from string 1\n");
        scanf("%d",&k);
        printf("\nenter the index to which you want to find substring from string 2\n");
        scanf("%d",&l);
        if(l>i)
        {
            printf("\nenter less than length of string");
        }
        else
        {printf("\nsubstring from string 1 is:\n");
        for(x=k;x<=l;x++)
        printf("%c",a[x]);}
        printf("\nenter the index from which you want to find substring from string 2\n");
        scanf("%d",&k);
        printf("\nenter the index to which you want to find substring from string 2\n");
        scanf("%d",&l);
         if(l>i)
        {
            printf("\nenter less than length of string");
        }
         else
         {printf("\nsubstring from string 2 is:\n");
        for(x=k;x<=l;x++)
        printf("%c",b[x]);}

        printf("\n\ncopy two strings\n");
        for(k=0;k<i;k++)
        {
            c[k]=a[k];
        }
        for(k=0;k<j;k++)
        {
            a[k]=b[k];
        }
        for(k=0;k<i;k++)
        {
            b[k]=c[k];
        }
        printf("\nstring 1 is now:\n");
        for(k=0;k<j;k++)
        {
            printf("%c",a[k]);
        }
        printf("\nstring 2 is now:\n");
        for(k=0;k<i;k++)
        {
            printf("%c",b[k]);
        }
        printf("\nto continue press 1\n");
        scanf("\n\n%d",&z);

}while(z==1);
}
