#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void menu() {
	printf("****************\n");
	printf("***1->��ʼ��Ϸ**\n");
	printf("***0->������Ϸ**\n");
	printf("****************\n");

}
int main() {
	srand((unsigned int)time(NULL));
	int n = 0;
	int answer = 0;
	printf("������Ϸ��\n���ǻ��������һ��1~100֮���������������������һ������������ʾ���²���������\nף��������죡\n");
	do {

		int ret = rand() % 100 - 1;
		printf("��Ϸ��ʼ�����������Ĵ�:\n");
		while (answer != ret) {
			scanf("%d", &answer);
			if (answer < ret)
				printf("��С��\n");
			else if (answer > ret)
				printf("�´���\n");
			else {
				printf("��ϲ���¶��ˣ�\n���ڷ��ر��⻭�桭��");
				Sleep(3000);
				break;
			}
		}system("cls");
		menu();
		printf("������ѡ��\n");
		scanf("%d", &n);

	} while (n == 1);
	printf("��Ϸ������");

	return 0;
}