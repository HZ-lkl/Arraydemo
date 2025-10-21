#include<stdio.h>

void printArr(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
}
int main()
{
	int arr[5] = { 0 };
	int len = sizeof(arr) / sizeof(int);

	for (int i = 0; i < len; i++)
	{
		printf("请录入第%d个元素\n", i + 1);
		scanf_s("%d", &arr[i]);
	}

	printArr(arr, len);

	int i = 0;
	int j = len - 1;
	while (i < j)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

		i++;
		j--;

	}


	printArr(arr, len);
	return 0;
}

