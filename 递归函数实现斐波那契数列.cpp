#include<stdio.h>
int Fib(int n)
{
	if(n<=2)
	return 1;     
	else return Fib(n-1)+Fib(n-2);
}
int main()
{
	int n; 
	scanf("%d",&n);
	int j=0;
	
	for(;j<n;j++)
	printf("%d\t",Fib(j));
	return 0;
}
