//binary search
#include<stdio.h>
int main()
{
	int l=0,flag=0,h=h-1,mid=0,key=0,a[0];
	while(l<h)
	{
		mid=(l+h)/2;
		if(a[mid]<key)
		{
			l=mid+1;
		}
		else if(a[mid]>key)
		{
			h=mid-1;
		}
		else
		{
			flag=1;
			if(flag==1)
			{
				printf("Search successfull");
			}
			else
			{
				printf("Search Unsuccessfull");
			}
		}
	}
}
