#include <stdio.h>
int main()
{
	int arr[] = { 11,66,43,78,91 };
	int max = arr[0];
	int len = sizeof(arr) / sizeof(int);

	for (int i = 0; i < len; i++)
	{
		if (arr[i] >= max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);

}