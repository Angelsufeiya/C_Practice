#include <stdio.h>

////����
//enum Day{//ö������
//	Mon = 1,//ö�ٳ���
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//
////�Ա�
//enum sex{
//	Male,
//	Female,
//	Secret
//};
//
//int main(){
//	enum Day w = Thur;
//	printf("%d\n", w);
//	return 0;
//}

//enum Color{//��ɫ
//	RED = 1,
//	GREEN = 2,
//	BLUE = 4
//};
//
//int main(){
//	enum Color clr = GREEN;//ֻ����ö�ٳ�����ö�ٱ�����ֵ���Ų���������͵Ĳ��졣 
//	//clr = 5; //ok
//	printf("%d\n", clr);
//	return 0;
//}

//�������͵����� 
union Un
{
	char c;
	int i; 
};
//���ϱ����Ķ���
union Un un; //�������ϱ����Ĵ�С 

union data{
	int a;
	char b;
	double c;
};

int main(){
	printf("%d\n", sizeof(un));//4
	printf("%d\n", sizeof(union data));
	//��������Ľ����ʲô? 
	un.i = 0x11223344; 
	un.c = 0x55; 
	printf("%x\n", un.i);//11223355
	printf("%x\n", un.c);
	return 0;
}
//
//int sys_check(){
//	int a = 1;
//	return *((char*)&a);
//}
//
//int main(){
//	int n = sys_check();
//	if (n == 1){
//		printf("С��\n");
//	}
//	else{
//		printf("���\n");
//	}
//	return 0;
//}