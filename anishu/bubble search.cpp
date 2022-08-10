//bubble search
#include<stdio.h>
int main()
{
	int i,j,n,temp=0;
	int a[10];
	
	printf("enter the size of array\n");
	scanf("%d",&n);
	
	printf("enter the elements in an array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp =a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
		printf(" the elements in an array\n");
	for(j=0;j<n;j++)
	{
		printf("%d\n",a[j]);
		
	}
}
