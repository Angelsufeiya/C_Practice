void menu(){
	printf("******************************\n");
	printf("********   1. PLAY   *********\n");
	printf("********   0. EXIT   *********\n");
	printf("******************************\n");
}

game(){
	printf("hehe\n");
}

int main(){
	int input;

	do{
		menu();
		scanf("%d", &input);
		switch (input){
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ��Ҫ�ر�\n");
			break;
		default:
			printf("����������������룡");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}