#include<stdio.h>

int main()
{
	int a[100];
	int i,n; 
	scanf("%d",&n);
    for(i=0;n!=0;i++)
	{
		a[i]=n;
		scanf("%d",&n);
	}
	for(i=i-1;i>=0;i--)
	{
		if(i)printf("%d ",a[i]);
		else printf("%d",a[i]);
		
	}
	
	
	return 0;
}
