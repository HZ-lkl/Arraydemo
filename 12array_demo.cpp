#include<stdio.h>

//0.���庯��
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
	//1.��������

	int arr[] = { 11,22,56,78,91 };
	int len = sizeof(arr) / sizeof(int);
	
	//2.����Ҫ���ҵ�����
	int num;
	printf("������Ҫ���ҵ����ݣ�\n");
	scanf_s("%d", &num);

	//3.���ú���
	int index = order1(arr, len, num);

	printf("%d\n", index);


}