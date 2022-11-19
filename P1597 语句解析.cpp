#include<stdio.h>

int main()
{
	int a,b,c;
	char d,e,f;
	scanf("a:=%c;",&d);
	scanf("b:=%c;",&e);
	scanf("c:=%c;",&f);
	if(d>='0'&&d<='9')a=d-'0';else a=0;
	if(e>='0'&&e<='9')b=e-'0';else b=0;
	if(f>='0'&&f<='9')c=f-'0';else c=0;
	printf("%d %d %d",a,b,c);
	
	return 0;
}
