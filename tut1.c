#include<stdio.h>
#include<stdlib.h>	
void main()
{
	int n,i,j,p;
	printf("Enter limit: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\nEnter position of value to delete ");
	scanf("%d",&i);
	int temp=a[i];
	for(j=i;j<n-1;j++)
	{
		a[j]=a[j+1];
	}
	for(p=0;p<n-1;p++)
	{
		printf("%d",a[p]);
	}
	printf("\n");
	int h,l;
	l=a[i];
	for(j=0;j<n;j++)
	{
		if(a[j]>temp && a[j]<=l)
		{
			l=a[j];
		}
	}
	printf("Next largest element is %d",l);
}

	
	
	
