#include<iostream>
using namespace std;

int main(){
	bool x = -100, x1 = 30, x2 = 0;
	bool a = false;

	printf("sizeof(a) = %d\n", sizeof(a)); //�����1 ��������Ϊ1���ֽ�
	cout << "xֵ:" << x << endl;
	cout << "x1ֵ:" << x1 << endl;
	cout << "x2ֵ:" << x2 << endl;

	bool flag = true;
	if (flag){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}

	flag = false;
	if (flag){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}

	return 0;
}

