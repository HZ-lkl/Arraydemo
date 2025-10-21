#include<stdio.h>

//0.定义函数
int order1(int arr[], int len, int num)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == num)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	//1.定义数组

	int arr[] = { 11,22,56,78,91 };
	int len = sizeof(arr) / sizeof(int);
	
	//2.定义要查找的数据
	int num;
	printf("请输入要查找的数据：\n");
	scanf_s("%d", &num);

	//3.调用函数
	int index = order1(arr, len, num);

	printf("%d\n", index);


}