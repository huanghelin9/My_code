#include<stdio.h>

int main()
{
	int n,cnt=2;
	scanf("%d",&n);
	int i=0,j=(n-1)/2;
	int arr[40][40]={0};
	arr[0][n/2]=1;
	for(cnt=2;cnt<=n*n;cnt++)
	{
		i--;
		j++;
		if((i<0)&&(j<n))i=n-1;
		if((i>=0)&&(j>=n))j=0;
		if((i<0)&&(j>=n))
		{
			i=i+2;
			j=j-1;
		}
		if(arr[i][j]!=0)
		{
			i=i+2;
			j=j-1;
			arr[i][j]=cnt;
		}
		else arr[i][j]=cnt;

		
		
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	printf("%d ",arr[i][j]);
	printf("\n");
	}
	
	
	
	return 0;
}
