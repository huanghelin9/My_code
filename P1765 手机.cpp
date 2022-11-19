#include<stdio.h>
int main()
{
	char str[201];
	int i,n=0; 
	gets(str);
	for(i=0;str[i]!='\0';i++) 
	  {
	  	if(str[i]==97||str[i]==100||str[i]==103||str[i]==106||str[i]==109||str[i]==112||str[i]==116||str[i]==119||str[i]==' ')
	  	  n+=1;
	  	else if(str[i]==98||str[i]==101||str[i]==104||str[i]==107||str[i]==110||str[i]==113||str[i]==117||str[i]==120)
	  	  n+=2;
	  	else if(str[i]==99||str[i]==102||str[i]==105||str[i]==108||str[i]==111||str[i]==114||str[i]==118||str[i]==121)
	  	  n+=3;
	  	else if(str[i]==115||str[i]==122)
	  	  n+=4;
	  }
	printf("%d",n);
    return 0;
}

