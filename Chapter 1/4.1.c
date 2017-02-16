#include<stdio.h>
int main()
{
	int a[5],max,i;
	scanf("%d",&a[0]);
	max=a[0];
	for(i=1;i<5;i++)
	{
		scanf("%d",&a[i]);
		if(max<a[i])
			max=a[i];
	}
	printf("%d",max);
}