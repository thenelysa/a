//Algorithm to display the element of stack
#include<stdio.h>
#define size 10
int main()
{
	int ch,top=-1,ele;
	int stack[size];
	
	printf("1.PUSH\n2.POP\n3.Display\n4.Exit\n");
	printf("Enter your choice:\n");
	scanf("%d",&ch);
	//while(1)
	switch(ch)
	{
		case 1: 
		{
			if(top==size-1)
			{	
				printf("Stack overflow\n");
				//exit(0);
			}
			else
			{
				printf("Enter the element you want to insert\n");
				scanf("%d",&ele);
				top=top+1;
				stack[top]=ele;
			}
		}
		break;
		case 2:
			{
				if(top==-1)
				{
					printf("Stack empty\n");
					//exit(0);
				}
				else
				{
					printf("Item deleted is %d ",stack[top]);
				}
				break;
			}
		case 3:
			{
				if(top==-1)
				{
					printf("Stack empty\n");
				//	exit(0);
				}
				else
				{
					for(int i=top;i>=0;i--)
					{
						scanf("%d",stack[i]);
						{
							printf("\n");
						}
					}
				}
				break;
			}
		case 4:
			{
				printf("Exit");
				return 0;
			}
		default:
				printf("Enter valid choice");
				break;
	}

	return 0;
}
