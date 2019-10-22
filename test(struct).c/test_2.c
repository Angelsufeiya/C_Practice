#include <stdio.h>

////星期
//enum Day{//枚举类型
//	Mon = 1,//枚举常量
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//
////性别
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

//enum Color{//颜色
//	RED = 1,
//	GREEN = 2,
//	BLUE = 4
//};
//
//int main(){
//	enum Color clr = GREEN;//只能拿枚举常量给枚举变量赋值，才不会出现类型的差异。 
//	//clr = 5; //ok
//	printf("%d\n", clr);
//	return 0;
//}

//联合类型的声明 
union Un
{
	char c;
	int i; 
};
//联合变量的定义
union Un un; //计算联合变量的大小 

union data{
	int a;
	char b;
	double c;
};

int main(){
	printf("%d\n", sizeof(un));//4
	printf("%d\n", sizeof(union data));
	//下面输出的结果是什么? 
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
//		printf("小端\n");
//	}
//	else{
//		printf("大端\n");
//	}
//	return 0;
//}