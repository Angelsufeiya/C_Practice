//����:Fibonacci���� | ʱ������ : 1�� | �ڴ����� : 32768K
//Fibonacci��������������� : 
//F[0] = 0 , F[1] = 1
//for each i �� 2 : F[i] = F[i - 1] + F[i - 2]
//��ˣ�Fibonacci���о����� : 0, 1, 1, 2, 3, 5, 8, 13, ...��
//��Fibonacci�����е������ǳ�ΪFibonacci����
//����һ ��N�����������Ϊһ��Fibonacci����ÿһ������԰ѵ�ǰ����X��ΪX - 1����X + 1��
//���ڸ���һ����N������ ��Ҫ���ٲ����Ա�ΪFibonacci����
//�������� :
//����Ϊһ��������N(1 �� N �� 1, 000, 000) ������� : ���һ����С�Ĳ�����ΪFibonacci��
//ʾ��1:
//����
//15
//���
//2

int fib(i){
	if (i == 1)
		return 1;
	else if (i == 0)
		return 0;
	else
		return f[i - 1] + f[i - 2];
}
#include <stdio.h>

int main(){

	return 0;
}