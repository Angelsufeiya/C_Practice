#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//дһ�������ж�һ���ǲ�������

int judge_leap_year(int num){
	if ((num % 4 == 0 && num % 100 != 0) || (num % 400 == 0))
		return 1;
	else
		return 0;
}

	//����Ϊ�Ż�����
	/*if (num % 100 == 0){
		if (num % 400 == 0){
		return 1;
		}
		else{
		return 0;
		}
		}
		else if(num % 4 == 0){
		return 1;
		}
		else{
		return 0;
		}
}*/

int main(){
	int num = 0;

	//�������麯������ȷ��

	//for (num = 1000; num <= 2000; num++){
	//	if (judge_leap_year(num) == 1){
	//		printf("%d ", num);
	//	}
	//}

	scanf("%d", &num);
	if (0 == judge_leap_year(num)){
		printf("��һ�겻������");
	}
	else{
		printf("��һ��������");
	}

	system("pause");
	return 0;
}