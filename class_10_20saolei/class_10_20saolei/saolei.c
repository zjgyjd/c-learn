//ɨ��
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <mmsystem.h>//��������ͷ�ļ�
#pragma comment(lib,"Winmm.lib")
//������ά����ֱ����հײ��ֺ�����
#define ROW 9
#define COL 9
#define Minenum 1//��������
char mine_map[ROW + 2][COL + 2];//�ӱ߿�//��ʼ��Ϊ'0'
char show_map[ROW + 2][COL + 2];//��ʼ��Ϊ'0'
void Reset(){
	memset(mine_map, ' ', (ROW + 2)* (COL + 2));
	memset(show_map, '0', (ROW + 2)*(COL + 2));
}
int Menue(){
	printf("************\n");
	printf("*1.��ʼ��Ϸ*\n");
	printf("*0.������Ϸ*\n");
	printf("************\n");
	int num;
	while (1){
		scanf("%d", &num);
		while (getchar() != '\n'){
			continue;
		}
		if (num != 0 && num != 1){
			printf("��������ȷ����asa\n");
			continue;
		}
		break;
	}
	return num;
}
void PlaceMine(){
	int row =0;
	int col = 0;
	//���ĸ��߿�����Ϊ�����ַ�
	for (row = 0; col < COL + 2; col++){
		mine_map[row][col] = 'q';
	}
	for (col = 0,row = 0; row < ROW + 2; row++){
		mine_map[row][col] = 'q';
	}
	for (col = COL + 1,row = 0; row < ROW + 2; row++){
		mine_map[row][col] = 'q';
	}
	for (row = ROW + 1,col = 0; col < COL + 2; col++){
		mine_map[row][col] = 'q';
	}
	//�����
	int count = 0;
	while( count < Minenum){
		col = rand() % 9 + 1;
		row = rand() % 9 + 1;//1~9
		if (mine_map[row][col] == '*'){
			continue;
		}
		mine_map[row][col] = '*';
		count++;
	}
}
void PulsOne(int row,int col){
	for (int rowl = row - 1; rowl < row + 2; rowl++){
		for (int coll = col - 1; coll < col + 2; coll++){
			if (rowl == row&&coll == col){
				continue;
			}
			if (mine_map[rowl][coll] == '*'){
				continue;
			}
			if (mine_map[rowl][coll] == ' '){
				mine_map[rowl][coll] = '1';
			}
			else
			{
				mine_map[rowl][coll] = mine_map[rowl][coll] + 1;
			}
		}
	}
}
void ChangeMineMap(){
	int row = 1;
	int col = 1;
	//�������е������ڵ�����λ��
	for (; row <= ROW; row++){
		for (col = 1; col <= COL; col++){
			if (mine_map[row][col] == '*'){
				//��Χ8������ȫΪ��һ
				PulsOne(row,col);
			}
		}
	}
	//�����ط���Ϊ' '��ʼ��ʵ��
}
void Prtmap(int n){
	//�ȴ�ӡ��һ�еı߿�
	int col;
	int row;
	for (col = 0; col <= COL; col++){
		printf("%d  ", col);
	}
	printf("\n");
	for (col = 0; col <= COL; col++){
		printf("---");
	}
	printf("\n");
	//��ӡ���б߿�
	for (row = 1; row <= ROW; row++){
		printf("%02d|", row);
		for (col = 1; col <= COL; col++){
			if (n == 1){
				printf("%c  ", show_map[row][col]);
			}
			if (n == 2){
				printf("%c  ", mine_map[row][col]);
			}
		}
		printf("\n");
	}
}
void UpdataMap(int row, int col){
	//��show��mine�Ƚ�
	show_map[row][col] = mine_map[row][col];
	//���Ϊ�ռ���ѭ��
	if (show_map[row][col] == ' '){
		for (int rowl = row - 1; rowl < row + 2; rowl++){
			for (int coll = col - 1; coll < col + 2; coll++){
				if (rowl == row && coll == col){
						continue;
						}
				if (mine_map[rowl][coll] == 'q'){
							continue;
							}
				if (show_map[rowl][coll]==' '){
					continue;
				}
				UpdataMap(rowl, coll);
			}
		}
	}

}
int Isfinish(){
	int row;
	int col;
	int count = 0;
	//�ж�show��ͼ�����0�ĸ����Ƿ�Ϊ������
	for (row = 1; row <= ROW; row++){
		for (col = 1; col <= COL; col++){
			if (show_map[row][col] == '0'){
				count++;
			}
		}
	}
	if (count == Minenum){
		return 1;
	}
	return 0;
}
int Playchoice(){
	//�����������
	printf("�������������:\n");
	int row;
	int col;
	while (1){
		scanf("%d %d", &row, &col);
		while (getchar() != '\n'){
			continue;
		}
		if (row<1 || row>ROW || col<1 || col>COL){
			printf("��������Чֵ:\n");
			continue;
		}
		if (show_map[row][col]!='0'){
			printf("�˴��Ѿ����㿪,������������:\n");
			continue;
		}
			break;
	}
	//�ж��Ƿ�Ϊ����
	if (mine_map[row][col] == '*'){
		return 1;
	}
	UpdataMap(row , col);
	//�ж��Ƿ�ȫ�����ױ��ҳ�
	if (Isfinish() == 1){
		return 2;
	}
	return 0;
}

void Start(){
	srand(time(0));
	//��ӡ�˵����ж��Ƿ�ʼ��Ϸ
	while (Menue()){
		//��ʼ������
		Reset();
		//�����
		PlaceMine();
		//��������λ��
		ChangeMineMap();
		while (1){
			//��ӡ����
			Prtmap(1);
			//���ѡ������
			int result = Playchoice();
			//�ж���Ϸ�Ƿ����
			if (result == 1){
				PlaySound("d:\\BOM.wav", NULL, SND_FILENAME | SND_ASYNC);
				//��ӡ��ͼλ�ü�mine_map
				Prtmap(2);
				printf("ʧ��!!!!\n");
				break;
			}
			else if (result == 2){
				Prtmap(2);
				printf("��ϲ���ʤ��!!!!!\n");
				break;
			}
		}
	}
	printf("��Ϸ����!!\n");
}
int main(){
	//Reset();
	//Prtmap();
	Start();
	system("pause");
	return 0;
}