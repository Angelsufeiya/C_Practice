#include<stdio.h>
#include<stdlib.h>

#define SIZE(a) sizeof(a)/sizeof(a[0])

//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���

int main1(){
	char murder[4] = { 'A', 'B', 'C', 'D' };
	char killer;
	int i = 0;

	for (i = 0; i < SIZE(murder); i++){
		killer = murder[i];
		if ((murder[0] != killer) + (murder[2] == killer) +
			(murder[3] == killer) + (murder[3] != killer) == 3){
			printf("%c is killer\n", killer);
		}
	}

	system("pause");
	return 0;
}