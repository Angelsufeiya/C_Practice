#include <stdio.h>

//ģ��ʵ��strlen

//1. ��������ʽ
int my_strlen(char str[]){
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

//2. ���ܴ�����ʱ����������
int my_strlen_1(char str[]){
	if (*str == '\0'){
		return 0;
	}
	else{
		return 1 + my_strlen_1(str + 1);
	}
}

//ָ��-ָ��ķ�ʽ
int my_strlen_2(char str[]){
	char *p = str;
	while (*p != '\0')
		p++;
	return p - str;//ָ��'\0'λ�õ�ָ��-ָ��'a'λ�õ�ָ��
}

int main0(){
	char arr[] = "abcdefg";
	int ret = 0;
	ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}