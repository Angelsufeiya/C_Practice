#include<iostream>
using namespace std;

int main(){
	bool x = -100, x1 = 30, x2 = 0;
	bool a = false;

	printf("sizeof(a) = %d\n", sizeof(a)); //输出：1 布尔类型为1个字节
	cout << "x值:" << x << endl;
	cout << "x1值:" << x1 << endl;
	cout << "x2值:" << x2 << endl;

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

