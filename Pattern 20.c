#include<stdio.h>
int main()
{
	int i,j,n;
	printf("\n");
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
	{
		for(j=1;j<=2*i-1;j++)

		{
			printf("  %d  ",j);
		}
		printf("\n");
	}
	
	
	return 0;
}
