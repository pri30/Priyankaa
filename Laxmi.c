#include <stdio.h>

int main(void) {
	int i,n,j,max=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(max<a[i]) max=a[i];
	}
	int h[max+1];
	for(i=0;i<=max;i++)
	h[i]=0;
	for(i=0;i<n;i++)
	h[a[i]]++;
	for(i=0;i<=max;i++)
	if(h[i]>1)
	printf("%d ",i);
	printf("\n");
	return 0;
}
