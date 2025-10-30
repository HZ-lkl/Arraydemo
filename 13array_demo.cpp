#include<stdio.h>
	//二分查找法
	//1定义函数
	int binarySearch(int arr[], int len, int num)
	{
		int min = 0;
		int max = len - 1;

		while (min <= max)
		{
			int mid = (max + max) / 2;
			if (arr[mid] < num)
			{
				min = mid + 1;
			}
			else if (arr[mid] > num)
			{
				max = mid - 1;
			}
			else
			{
				return mid;
			}
		}
		//.如果min大于max表示数据不存在。返回-1
		return -1;
	}

	int main()
	{
		//2.定义数组
		int arr[] = {7, 23, 79, 81, 103, 127, 131, 147 };
		int len = sizeof(arr) / sizeof(int);

		//3.定义要查找的数据
		int num = 7;

		//4.调用函数查找数据
		int index = binarySearch(arr, len, num);

		//5.输出
		printf("%d\n", index);
	}
	
	
