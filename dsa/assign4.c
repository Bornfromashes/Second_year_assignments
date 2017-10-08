#include <stdio.h>
struct stud
{
	int roll;
	int marks;
	char name[40];
			
};

int main()
{
	int a,b,c,d,i,p,q,r,j;
	printf("data of how many student you want to enter\n");
	scanf("%d",&a);
			//int roll[a];
       struct stud s[a];
			int l[a];
			l[0]=0;
       do{
        
	printf("what you want to perform\n1.add record\n2.display record\n3.delete record\n4.modify\n5.insert record\n6.data of particular student\n7.exit\n");
	scanf("%d",&b);
	switch(b)
		{
		case 1:
		 	{
		        // printf("roll	name	marks\n");
						for(i=0;i<a;i++)
				 				{      
												hello:
												printf("\nenter rollno.:\n");
												scanf("%d",&s[i].roll);
												for(j=0;j<i;j++)
                        {
												if(s[i].roll==l[j])
												{
												printf(" enter roll no. again");
												goto hello;
												}
											  }
												printf("\nenter name.:\n");	
										    scanf("%s",s[i].name);
												printf("\nenter marks.:\n");
												scanf("%d",&s[i].marks);
   											l[i]=s[i].roll;	
		                                        
			         }            
				}
				break;
			case 2:
			{
			
					   printf("roll	name	marks\n");
             for(i=0;i<a;i++)
		              {
												printf("%d	",s[i].roll);
		                    printf("%s	",s[i].name);
												printf("%d	\n",s[i].marks);
                                                
					         }
				}
				break;
			case 3:
				{
          a--;
					printf("which student data you want to delete\n");
					scanf("%d",&c);
					for(i=c;i<=a;i++)
					{s[i-1]=s[i];}
                                        
				}
				break;
			case 4:
			               {             
                                       
					printf("which student data you want to modify\n");
					scanf("%d",&c);
					printf("roll	name	marks\n");
					scanf("%d%s%d",&s[c-1].roll,s[c-1].name,&s[c-1].marks);
                                        
				}
				break;
			case 5:
				{      
          a++;
					printf("roll	name	marks\n");
					scanf("%d%s%d",&s[a-1].roll,s[a-1].name,&s[a-1].marks);
                                                     
					
				}
				break;
			case 6:
				{      
          printf("which student data you want to see\n");
					scanf("%d",&c);
					printf("roll	name	marks\n");
					printf("%d	%s	%d\n",s[c-1].roll,s[c-1].name,s[c-1].marks);
                                                     
					
				}
				break;
		
	}

}while(b!=7);
	}
