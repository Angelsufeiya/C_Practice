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
			printf("游戏将要关闭\n");
			break;
		default:
			printf("输入错误，请重新输入！");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}