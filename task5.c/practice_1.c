#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<string.h>

/*��ʾ����ַ��������ƶ������м���*/

int main()
{
	char arr1[] = "welcome to bit!!!!";
	char arr2[] = "##################";

	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	//Ԫ�ظ���������"\0"��sizeof�����ַ�������������鶼�����󣬵������ַ������е��鷳��
	int right = strlen(arr1) - 1;
	//strlen���ַ�����û����"\0"

	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	Sleep(500);
	//	//�˿̵ĵط��Ǻ��� 1000���� = 1��
	//	system("cls");
	//	//"cls" ���������Ļ
	//	left++;
	//	right--;
	//}
	//printf("%s\n", arr2);

	//forѭ��ʵ��
	for (left = 0, right = strlen(arr1) - 1; left <= right; left++, right--)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);
		system("cls");
	}

	system("pause");
	return 0;
}