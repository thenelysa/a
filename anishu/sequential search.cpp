//sequential search

//c program to show the time complexity

#include<stdio.h>
int main()
{
	int i,n,key,flag=0;
	int a[10];
	
	printf("enter the size of array\n");
	scanf("%d",&n);
	
	printf("enter the elements in an array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("enter an item to be searched\n");
	scanf("%d",&key);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("search successful");
		printf("position =%d\n ",i+1);
	}
	else{
		printf("search unsuccessful\n");
		return 0;
	}
}
