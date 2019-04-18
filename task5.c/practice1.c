#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

/*演示多个字符从两端移动，向中间汇聚*/

int main()
{
	char arr1[] = "welcome to bit!!!!";
	char arr2[] = "##################";

	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	//元素个数还包括"\0"；sizeof对于字符数组和整型数组都可以求，但是求字符数组有点麻烦。
	int right = strlen(arr1) - 1;
	//strlen求字符数组没有求"\0"

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		//此刻的地方是毫秒 1000毫秒 = 1秒
		system("cls");
		//"cls" 用于清空屏幕
		left++;
		right--;
	}
	printf("%s\n", arr2);

	system("pause");
	return 0;
}