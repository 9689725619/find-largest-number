#include<stdio.h>
int main()
{
	int a,b,c,d,min;
	
	printf("\n Enter five num:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d);
	min=a;
	if(min>b)
	min=b;
	if(min>c)
	min=c;
	if(min>d)
	min=d;
	
	printf("\n smallest num is %d",min);
	
	return 0;
}
