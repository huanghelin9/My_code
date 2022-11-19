#include<stdio.h>
void swap(char*e1,char*e2,int width)
{
	int i,tmp;
	for(i=0;i<width;i++)
	{
		tmp=*e2;
		*e2=*e1;
		*e1=tmp;
		e1++;e2++;
	}
}

void bubble_sort(void* base,int sz,int width,int(*cmp)(void*e1,void*e2))
{
	int i,j;
	for(i=0;i<sz-1;i++)
	{
		for(j=0;j<sz-i;j++)
		{
			if(cmp((char*)base+width*j,(char*)base+width*(j+1))>0)
			{
				swap((char*)base+width*j,(char*)base+width*(j+1),width);
			}
		}
	}
}


int cmp_int(void*e1,void*e2)
{
	if(*(int *)e1>*(int *)e2)
	return 1;
}
int main()
{
	int k;
	int arr[5]={6,54321};
	bubble_sort(arr,sizeof(arr)/sizeof(arr[0]),sizeof(arr[0]),cmp_int);
	for(k=0;k<5;k++)
	{
		printf("%d ",arr[k]);
	}
	return 0;
}
