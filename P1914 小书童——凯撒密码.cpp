#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d", &n);
	char s[1000];
	scanf("%s", s);
	int c= strlen(s);
	if (n == 26)
	{
		printf("%s",s);
	}
	else
	{
		for (int i = 0; i <c ; i++)
		{
			
			if (s[i] + n > 'z')
			{
				n = n - 26;
			}
			s[i] = s[i] + n;
			printf("%c", s[i]);
		}
	}
	return 0;
}

