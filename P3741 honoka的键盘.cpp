#include<stdio.h>
#include<string.h>



int main()
{
    char a[101];
	int n;
    scanf("%d%s",&n,a);
    int cnt=0;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='V' && a[i+1]=='K')
        {
            cnt++;
            a[i]='A';
            a[i+1]='A';
        }
    }
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]!='A' && a[i]==a[i+1])
        {
            cnt++;
            break;
        }
    }
    printf("%d",cnt);
    return 0;

} 
