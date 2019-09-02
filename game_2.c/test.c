#include "game.h"

void menu(){
	printf("*****************************\n");
	printf("*******    1. play    *******\n");
	printf("*******    0. exit    *******\n");
	printf("*****************************\n");
}

void game(){
	//创建两个二维数组
	char show_map[ROW][COL];
	char mine_map[ROW][COL];
	//对两个数组进行初始化
	Init(show_map, mine_map, ROW, COL);
	//shift+f8(fn + option) 快速进行格式化
	//点击+option 按列选中
	int blank_count = 0;
	int row = 0;
	int col = 0;
	while (1){
		//1.打印地图
		//先打印第一行（坐标）
		printf("   |");
		for (row = 0; row < ROW; row++){
			printf("%d ", row);
		}
		printf("\n");
		//打印一行分隔符
		for (row = 0; row < ROW; row++){
			printf("---");
		}
		printf("\n");
		//按照每行分别打印
		for (row = 0; row < ROW; row++){
			printf(" %d |", row);
			for (col = 0; col < COL; col++){
				printf("%c ", show_map[row][col]);
			}
			printf("\n");
		}

		//2.让用户输入一组坐标,并进行校验！
		printf("请输入一组坐标（row col)：");\
		scanf("%d%d", &row, &col);
		if (row < 0 || row >= ROW){
			if (col < 0 || col >= COL){
				printf("输入错误,请重新输入！\n");
				continue;
			}
		}
		if (show_map[row][col] != '*'){
			//这个位置已经被翻开
			printf("您输入的坐标已被翻开，请重新输入！\n");
		}
		//3.判断是否踩雷
		if (mine_map[row][col] == '1'){
			//踩雷了，游戏结束！
			printf("game over!\n");
			break;
		}
		blank_count++;
		//4.判断是否游戏胜利
		if (blank_count == ROW*COL - MINE_COUNT){
			printf("恭喜你，扫雷成功！");
			break;
		}
		//3.更新地图，将当前位置变成一个数字
		updateShowMap(show_map, mine_map, row, col);
	}
}

int main(){
	int input;
	srand((unsigned int)time(NULL));

	do{
		menu();
		printf("请输入您的选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏已关闭!\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}
