////ʵ��һ��ͨѶ¼�� 
////ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ������
////�������Ա����䡢�绰��סַ
////
////�ṩ������
////1. �����ϵ����Ϣ
////2. ɾ��ָ����ϵ����Ϣ
////3. ����ָ����ϵ����Ϣ
////4. �޸�ָ����ϵ����Ϣ
////5. ��ʾ������ϵ����Ϣ
////6. ���������ϵ��
////7. ����������������ϵ��
////8. ������ϵ�˵��ļ�
////9. ������ϵ��
//
//#include <stdio.h>
//
//enum{
//	Add = 1,
//	Delete ,
//	Search ,
//	Change ,
//	Display,
//	Empty  ,
//};
//
//int menu(){
//	int ret, input;
//	printf("1. �����ϵ����Ϣ\n"
//		"2. ɾ��ָ����ϵ����Ϣ\n"
//		"3. ����ָ����ϵ����Ϣ\n"
//		"4. �޸�ָ����ϵ����Ϣ\n"
//		"5. ��ʾ������ϵ����Ϣ\n"
//		"6. ���������ϵ��\n"
//		"��������Ҫ���в���:");
//	//���Ƴɹ�������1������ʧ�ܣ�����0
//	ret = scanf("%d", &input);
//	//��Ϊmenu������while(1)��һ������A ��ѭ��
//	//return input;
//	return ret ? input : -1;
//}
//
//void MailList(){
//	int op;
//	while (1){
//		op = menu();
//		switch (op){
//		case Add:
//			break;
//		case Delete:
//			break;
//		case Search:
//			break;
//		case Change:
//			break;
//		case Display:
//			break;
//		case Empty:
//			break;
//		case -1:
//			printf("������������������\n");
//			break;
//		default:
//			break;
//		}
//
//	}
//}
//
//int main(){
//	MailList();
//	return 0;
//}
#include <stdio.h>

struct S {
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main(){
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;

	printf("a = %d, b = %d, c = %d, d = %d\n", s.a, s.b, s.c, s.d);
	printf("�ṹ��Ŀռ��СΪ%d\n", sizeof(struct S));//3
	return 0;
}