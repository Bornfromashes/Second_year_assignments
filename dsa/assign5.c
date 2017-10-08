#include<stdio.h>
#include<string.h>
void bubble_sort(char a[100]);
void insertion_sort(char b1[100]);
void selection_sort(char c1[100]);
void linear_search(char d1[100]);
void binary_search(char e1[100]);

int main()
{
int a1,b,flag;
char a[100];

hello:
printf("enter the string\n");
scanf("%s",a);

do
{
printf("\nwhat you want to perform\n1.sorting\n2.searching\n3.change the string\n4.exit\n");
scanf("%d",&a1);
switch(a1)
{
case 1://sorting
{
do
{
printf("\nfrom which method\n1.bubble sort\n2.insertion sort\n3.selection sort\n4.go to main menu\n");
scanf("%d",&b);
switch(b)
{
case 1:
bubble_sort(a);
break;
case 2:
insertion_sort(a);
break;
case 3:
selection_sort(a);
break;
}
}while(b!=4);
}
break;
case 2:
{
do
{
printf("\nfrom which method\n1.linear search\n2.binary search\n3.return to main menu\n");
scanf("%d",&b);
switch(b)
{
case 1:

linear_search(a);
break;
case 2:
bubble_sort(a);
binary_search(a);
break;
}
}
while(b!=3);
}
break;
case 3:
goto hello;
break;
}
}while(a1!=4);
}
void bubble_sort(char a[100])//bubble sort
{
int flag=0;
char temp;
int i,j;
for(i=1;i<strlen(a);i++)
{
for(j=0;j<(strlen(a)-i);j++)
{
if(a[j]<a[j+1]&&a[j+1]<a[j+2]&&a[j+2]<a[j+3])
{
printf("array sorted\n");
flag=1;
break;
}
else if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
if(flag==1)
{break;}
puts(a);
}
puts(a);
}
void insertion_sort(char a[100])
{
int flag=0;
int i,j;
char temp;
//if(a[j]<a[j+1]&&a[j+1]<a[j+2]&&a[j+2]<a[j+3])
/*{
printf("array sorted\n");
//flag=1;
break;
}*/
for(i=0;i<(strlen(a)-2);i++)
{
temp=a[i];
for(j=i-1;(j>=0&&a[j]>temp);j--)
{
a[j+1]=a[j];
a[j]=temp;
}
puts(a);
}
}
void selection_sort(char a[100])
{
int i,j,k;
char temp;
for(i=0;i<(strlen(a)-1);i++)
{
k=i;
for(j=i+1;j<(strlen(a)-1);j++)
{
if(a[j]<a[k])
k=j;
if(k!=i)
{
temp=a[i];
a[i]=a[k];
a[k]=temp;
}
}
puts(a);
}
}
void linear_search(char a[100])
{
bubble_sort(a);
int i=0;
char b;
printf("\nwhich string to find\n");
scanf("%s",&b);
while(i<strlen(a))
{
if(a[i]==b)
{
printf("\nstring found\n");
break;
}
i++;
}
}
void binary_search(char a[100])
{
int i,j,c;
char b;
printf("\nstring you want to search\n");
scanf("%s",&b);
i=0;
j=strlen(a);
c=(i+j)/2;
while(a[i]!=b)
{
if(b>a[c])
i=c+1;
else if(a[c]>b)
j=c-1;
else if(a[c==b])
{
printf("string found");
break;
}
c=(i+j)/2;
}
}



























