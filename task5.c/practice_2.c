#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*ģ���û���¼�龰������ֻ�ܵ�½3�Ρ�
��ֻ��������3�����룬���������ȷ����ʾ��½�ɹ������3�����붼����������˳�����*/

int main()
{
	int i = 0;
	char password[20] = { 0 };

	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", password);//123456
		//"%s" ����ַ���
		//if (password == "123456")
		//�ַ����ıȽϣ������õȺűȡ�
		if (strcmp(password, "123456") == 0)//string compare
			//string1 == string2��strcmp�������ֵ��ڡ�0��
			//string1 < string2,strcmp���ص�����С�ڡ�0��
			//string1 > string2,strcmp���ص����ִ��ڡ�0��
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�����������������!\n");
		}
	}
	if (i == 3)
		printf("�������붼�����˳�����\n");

	system("pause");
	return 0;
}