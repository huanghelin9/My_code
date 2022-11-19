#include<stdio.h>

int main()
{
	char ch[10];
	int i,n,sum=1,cnt=0;
	scanf("%s%d",ch,&n);
	for(i=0;ch[i]!='\0';i++)
	{
		cnt=ch[i]-'A'+1;
		sum=sum*cnt;
	}
	if(sum%47==n%47)printf("GO");
	else printf("STAY");
	
	return 0;
}
