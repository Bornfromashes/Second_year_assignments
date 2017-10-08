#include <stdio.h>
 void quick_sort(int[],int,int);
 int partition(int[],int,int);
 
	int main()
		{
		    int n,i;
		    printf("How many elements?\n");
		    scanf("%d",&n);
			int a[n];
		    printf("\nEnter array elements:\n");
		    
		    for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		
		    quick_sort(a,0,n-1);
		    printf("\nArray after sorting:\n");
		    
		    for(i=0;i<n;i++)
			printf("%d ",a[i]);
		   
		    return 0;        
		}
 
			void quick_sort(int a[],int l,int u)
					{
							int x=u+1;
					    int j,i;
					    if(l<u)
					    {
						j=partition(a,l,u);
						for(i=0;i<x;i++)
			      printf("%d ",a[i]);
			      printf("\n");
						quick_sort(a,l,j-1);
						for(i=0;i<x;i++)
			 			printf("%d ",a[i]);
			 			printf("\n");
						quick_sort(a,j+1,u);
						for(i=0;i<x;i++)
		      	printf("%d ",a[i]);
		      	printf("\n");
					    }
					}
			 
					int partition(int a[],int l,int u)
						{
						    int v,i,j,temp;
						    v=a[l];
						    i=l;
						    j=u+1;
						    
						    do
						    {
							do
							    i++;
							    
							while(a[i]<v&&i<=u);
		
							do
							    j--;
							while(v<a[j]);
		
							if(i<j)
								{
								    temp=a[i];
								    a[i]=a[j];
								    a[j]=temp;
								}
						    }while(i<j);
						    
						    a[l]=a[j];
						    a[j]=v;
						    
						    return(j);
						}
