//扫雷
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <mmsystem.h>//导入声音头文件
#pragma comment(lib,"Winmm.lib")
//两个二维数组分别代表空白部分和雷区
#define ROW 9
#define COL 9
#define Minenum 1//设置雷数
char mine_map[ROW + 2][COL + 2];//加边框//初始化为'0'
char show_map[ROW + 2][COL + 2];//初始化为'0'
void Reset(){
	memset(mine_map, ' ', (ROW + 2)* (COL + 2));
	memset(show_map, '0', (ROW + 2)*(COL + 2));
}
int Menue(){
	printf("************\n");
	printf("*1.开始游戏*\n");
	printf("*0.结束游戏*\n");
	printf("************\n");
	int num;
	while (1){
		scanf("%d", &num);
		while (getchar() != '\n'){
			continue;
		}
		if (num != 0 && num != 1){
			printf("请输入正确数字asa\n");
			continue;
		}
		break;
	}
	return num;
}
void PlaceMine(){
	int row =0;
	int col = 0;
	//将四个边框设置为其他字符
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
	//埋地雷
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
	//遍历所有地雷所在的所有位置
	for (; row <= ROW; row++){
		for (col = 1; col <= COL; col++){
			if (mine_map[row][col] == '*'){
				//周围8个格子全为加一
				PulsOne(row,col);
			}
		}
	}
	//其他地方则为' '初始化实现
}
void Prtmap(int n){
	//先打印第一行的边框
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
	//打印竖行边框
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
	//用show和mine比较
	show_map[row][col] = mine_map[row][col];
	//如果为空继续循环
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
	//判断show地图里面的0的个数是否为地雷数
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
	//玩家输入坐标
	printf("请玩家输入坐标:\n");
	int row;
	int col;
	while (1){
		scanf("%d %d", &row, &col);
		while (getchar() != '\n'){
			continue;
		}
		if (row<1 || row>ROW || col<1 || col>COL){
			printf("请输入有效值:\n");
			continue;
		}
		if (show_map[row][col]!='0'){
			printf("此处已经被点开,请重新下输入:\n");
			continue;
		}
			break;
	}
	//判断是否为地雷
	if (mine_map[row][col] == '*'){
		return 1;
	}
	UpdataMap(row , col);
	//判断是否全部地雷被找出
	if (Isfinish() == 1){
		return 2;
	}
	return 0;
}

void Start(){
	srand(time(0));
	//打印菜单并判断是否开始游戏
	while (Menue()){
		//初始化数组
		Reset();
		//埋地雷
		PlaceMine();
		//描述地雷位置
		ChangeMineMap();
		while (1){
			//打印界面
			Prtmap(1);
			//玩家选择坐标
			int result = Playchoice();
			//判断游戏是否结束
			if (result == 1){
				PlaySound("d:\\BOM.wav", NULL, SND_FILENAME | SND_ASYNC);
				//打印地图位置即mine_map
				Prtmap(2);
				printf("失败!!!!\n");
				break;
			}
			else if (result == 2){
				Prtmap(2);
				printf("恭喜玩家胜利!!!!!\n");
				break;
			}
		}
	}
	printf("游戏结束!!\n");
}
int main(){
	//Reset();
	//Prtmap();
	Start();
	system("pause");
	return 0;
}