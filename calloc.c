// malloc function
#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p,n,i;
	printf("enter the number of integers to be used");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	if (p==NULL)
	{
		printf("on memory available");
		exit(1);
	   }   
	   else
	   {
	   	printf("memory allocation was successful");
	   	printf("enter the values \n");
	   	for(i=0;i<n;i++)
	   	{
	   		scanf("%d",p+i);
		   }
	   	
	   	for(i=0;i<n;i++)
	   	{
	   		printf("%d\n",*(p+i));
		   }
	   	
	   	
	   	
	   }
	   
	free(p);
	
	
}


