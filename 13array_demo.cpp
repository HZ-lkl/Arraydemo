#include<stdio.h>
	//���ֲ��ҷ�
	//1���庯��
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
		//.���min����max��ʾ���ݲ����ڡ�����-1
		return -1;
	}

	int main()
	{
		//2.��������
		int arr[] = {7, 23, 79, 81, 103, 127, 131, 147 };
		int len = sizeof(arr) / sizeof(int);

		//3.����Ҫ���ҵ�����
		int num = 7;

		//4.���ú�����������
		int index = binarySearch(arr, len, num);

		//5.���
		printf("%d\n", index);
	}
	
	
