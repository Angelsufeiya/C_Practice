#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int i = 0;
	char password[20] = { 0 };

	for (i = 0; i < 3; i++){
		printf("�������������룺");
		scanf("%99s", password);//123456
		//�ӡ�99������ʾ��ȣ����Ҫ99���ַ�����Ϊ�˷�ֹԽ��
		//���롰%s��, ����Ҫ�� & ��
		if (0 == strcmp(password, "123456")){
			printf("������ȷ����½�ɹ�!\n");
			break;
		}
		else{
			printf("�����������������!\n");
		}
	}
	if (i == 3){
		printf("�������붼�����˳�����!\n");
	}
	
	system("pause");
	return 0;
}