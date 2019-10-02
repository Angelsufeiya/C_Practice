//ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#if 0
void reverse_part(char *src, int start, int end){
	int i, j;
	char tmp;

	for (i = start, j = end; i < j; i++, j--){
		tmp = src[i];
		src[i] = src[j];
		src[j] = tmp;
	}
}

void round(char * src, int time){
	int len = strlen(src);
	int pos = time%len;

	reverse_part(src, 0, pos - 1);
	reverse_part(src, pos, len - 1);
	reverse_part(src, 0, len - 1);
}
#else
void round(char * src, int time){
	char tmp[256] = { 0 };
	int len = strlen(src);
	int pos = time % len;//��ֹ������������������

	strcpy(tmp, src + pos);//��src[pos]��ʼ�����鸳��tmp������
	strncat(tmp, src, pos);//��src��ǰpos���ַ�ƴ�ӵ�tmp�����
	strcpy(src, tmp);//��tmp���鸳��src������
}
#endif

int main(){
	int input;
	char str[] = "ABCDE";

	printf("�����������ĸ�����");
	scanf("%d", &input);
	round(str, input);
	puts(str);

	system("pause");
	return 0;
}