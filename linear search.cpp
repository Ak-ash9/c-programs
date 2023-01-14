#include<stdio.h>
int main()
{
	int m,n,i,f=0,ele;
	printf(" Declare the size :");
	scanf("%d",&n);
	printf("Enter the size :");
	scanf("%d",&m);
	
	int a[n],k;
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("All the elements of array are:\n");
	for(i=0;i<m;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("\nEnter the element you want to search:");
	scanf("%d",&ele);
	
	for(i=0;i<m;i++)
	{
		if(a[i]==ele)
		{
			k=(i+1);
			f=1;
			break;
		}
	}
	
	if(f==1)
	printf("Element found at location %d",k);
	else
	printf("Element not found");
	
	return 0;
}

