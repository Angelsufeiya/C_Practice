#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//дһ�������ж�һ�����ǲ�������

int judge_is_prime(int num){
	int i = 0;
	for (i = 2; i <= sqrt(num); i++){
		if (num % i == 0){
			return 0;
		}
	}
		return 1;
}

int main(){
	int num = 0;

	/*for (num = 100; num <= 200; num++){
		if (judge_is_prime(num) == 1){
			printf("%d ", num);
		}
	}*/

	scanf("%d", &num);
	if (0 == judge_is_prime(num))
		printf("�������������\n");
	else
		printf("�������������\n");

	system("pause");
	return 0;
}
