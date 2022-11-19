#include<stdio.h>

int main()
{
	int n,i,j,o,q,cnt=0;
	int arr[100]={0};
	int arr2[8]={0};
	scanf("%d",&n);
	for(i=0;i<7;i++)
	{
		scanf("%d",&o);
		arr[o]=1;
	}
	for(i=0;i<n;i++)
	{
		for(j=0,cnt=0;j<7;j++)
		{
			scanf("%d",&q);
			if(arr[q]) cnt++;
		}
		arr2[8-cnt]=1;
	}
	for(i=1;i<=7;i++)
	{
		if(i==7) printf("%d",arr2[7]);
		else printf("%d ",arr2[i]); 
		
	}
	
	
	return 0;
}
//0 0 0 0 0 11
