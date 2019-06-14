#include <stdio.h>

void sort(int n, int *arr)
{
	int i, j, tmp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}
int main()
{
	int i, n, arr[100];
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	
	sort(n, arr);
	
	for(i=0;i<n;i++)
		printf("%d ", arr[i]);
	return 0;
}
