#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//��һ���ַ����������Ϊ:"student a am i",
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ��
//����ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���

void reverse_part(char* str, int start, int end){
	int i, j, tmp;

	for (i = start, j = end; i < j; i++, j--){
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}

int main(){
	char src[] = "I'm a fashion student";
	int i;
	int start = 0, end;
	
	for (i = 0; src[i]; i++){
		if (src[i] == ' '){
			end = i - 1;
			reverse_part(src, start, end);
			start = i + 1;
		}
	}
	reverse_part(src, start, i - 1);//������ת���һ������
	reverse_part(src, 0, i - 1);
	puts(src);

	system("pause");
	return 0;
}