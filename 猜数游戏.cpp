#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void menu() {
	printf("****************\n");
	printf("***1->开始游戏**\n");
	printf("***0->结束游戏**\n");
	printf("****************\n");

}
int main() {
	srand((unsigned int)time(NULL));
	int n = 0;
	int answer = 0;
	printf("猜数游戏：\n我们会随机生产一个1~100之间的随机数，而玩家需输入一个数并根据提示来猜测这个随机数\n祝您游玩愉快！\n");
	do {

		int ret = rand() % 100 - 1;
		printf("游戏开始，请输入您的答案:\n");
		while (answer != ret) {
			scanf("%d", &answer);
			if (answer < ret)
				printf("猜小了\n");
			else if (answer > ret)
				printf("猜大了\n");
			else {
				printf("恭喜您猜对了！\n正在返回标题画面……");
				Sleep(3000);
				break;
			}
		}system("cls");
		menu();
		printf("请做出选择：\n");
		scanf("%d", &n);

	} while (n == 1);
	printf("游戏结束！");

	return 0;
}