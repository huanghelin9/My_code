#include<stdio.h>
#include<string.h>

int main()
{
	char str[1000];
	int cnt1=0,cnt2=0,i=0;
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='b'&&str[i+1]=='o'&&str[i+2]=='y')
		cnt1++;
	}
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='g'&&str[i+1]=='i'&&str[i+2]=='r'&&str[i+3]=='l')
		cnt2++;
	}
	printf("%d\n%d\n",cnt1,cnt2);
	
	return 0;
}
