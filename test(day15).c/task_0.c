//һ��������ֻ�����������ǳ���һ�Σ� 
//�����������ֶ����������Ρ�
//�ҳ�������ֻ����һ�ε����֣����ʵ�֡�

#include<stdio.h>
#include<stdlib.h>

void findNum(int * src, int n, int * pnum1, int * pnum2){
	int i, pos;
	int sum = 0;
	int num1 = 0, num2 = 0;

	for (i = 0; i < n; i++){
		sum ^= src[i];
	}
	//�ж���1����λѰ�ң������λ
	for (pos = 0; !(sum & (1 << pos)); pos++){
		//����Ҫѭ����
	}
	for (i = 0; i < n; i++){
		if (src[i] & (1 << pos)){
			num1 ^= src[i];
		}
		else{
			num2 ^= src[i];
		}
	}

	*pnum1 = num1;
	*pnum2 = num2;
}

int main0(){
	int arr[10] = { 2, 6, 8, 3, 10, 3, 2, 12, 8, 6 };
	int num1, num2;

	findNum(arr, sizeof(arr) / sizeof(arr[0]), &num1, &num2);
	printf("%d %d\n", num1, num2);

	system("pause");
	return 0;
}