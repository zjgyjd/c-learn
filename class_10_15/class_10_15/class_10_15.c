//三子棋   
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define ROW 8
#define COL 8
#define Chess 5//表示三子棋
//1.定义一个全局变量数组
char g_chesses[ROW][COL];//初始化
void reset();
void Prtboard();
void PlayerMove();
void ComputerMove();
char CheckWinner();
char CheckLine();
char CheckCol();
char CheckAng();//对角
void Winnereprot();
char IsThree1();
char IsThree2();
int Isfull();
int Isline(int row,int col);
int IsCol(int row, int col);
int IsAng1(int row, int col);
int IsAng2(int row, int col);

int main(){
	//重置
	reset( );
	char winner;
	while (1){
		Prtboard();//2.打印棋盘
		printf("请玩家落子\n:");
		PlayerMove();//3.玩家落子
		 winner = CheckWinner();
		if (winner != ' '){//4.判断输赢
			break;//有胜负
		}
		ComputerMove();
		winner = CheckWinner();
		if (winner != ' '){//4.判断输赢
			break;//有胜负
		}
	}
	//5.说明胜利情况
	Winnereprot(winner);//X玩家 O电脑 P平局
		system("pause");
		return 0;
}
void reset( ){//重置
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < ROW; col++){
			g_chesses[row][col] = ' ';
		}
	}
	
}
void Prtboard(){
	int row = 0;
	int col = 0;
	int i;
	int j;
	for ( i = 0; row < ROW; row++){
		for ( j = 0,col = 0; col < COL; col++){
			printf("| %c ", g_chesses[row][col]);
			j++;
			if (j == COL ){
				printf("|\n");
			}
		}
		i++;
		if (i < ROW ){
			for (j = 0,col = 0; col < COL; col++){
				printf("|---");
				j++;
				if (j == COL){
					printf("|\n");
				}
			}
		}
	}
}
void PlayerMove(){//1.利用坐标进行移动
	int row = -1;
	int col = -1;
	while (1){
		scanf("%d %d", &row, &col);
		while (getchar() != '\n'){
			continue;
		}
		row -= 1;
		col = col-1;
		if (row < 0 || row >= ROW || col < 0 || col >= COL){//越界
			printf("已越界请重新输入:\n");
			continue;
		}
		if (g_chesses[row][col] != ' '){
			printf("此位置已经落子,请重新输入:\n");
			continue;
		}
		break;
	}
	g_chesses[row][col] = 'X';//玩家为X
}
void ComputerMove(){
	int row = rand() % (ROW );//0到下标最大值
	int col = rand() % (COL );
	while (g_chesses[row][col] != ' '){
		 row = rand() % (ROW );//0到下标最大值
		 col = rand() % (COL );
	}
	g_chesses[row][col] ='O';//电脑为 O
}
char CheckWinner(){//判断是否有三在一起的函数
	if (CheckLine() != ' '){//行
		return CheckLine();
	}
	else if (CheckCol() != ' '){//列
		return CheckCol();
	}
	else if( CheckAng() != ' '){//表示胜利
		//有胜负返回'X'或'O'
		return CheckAng();
	}
	else if (Isfull()){//满了返回平局
		return 'P';
	}
	else{
		return ' ';
	}

}
void Winnereprot(char win){
	if (win == 'P'){
		printf("平局!\n");
		Prtboard();
	}
	else if (win == 'O'){
		printf("电脑胜利!!\n");
		Prtboard();
	}
	else if (win == 'X'){
		Prtboard();
		printf("恭喜玩家胜利!\n");
	}
	else {
		printf("出错!!!!!!!!\n");
		Prtboard();
		printf("在这里%c\n", win);
	}
}
char CheckLine(){
	int row = 0;
	for (; row < ROW; row++){
		for (int col = 0; col + 2 < COL; col++){
			if (Isline(row,col)){
				return g_chesses[row][col + 1];
			}
		}
	}
	return ' ';
}
char CheckCol(){
	int col = 0;
	for (; col < COL; col++){
		for (int row = 0; row + 2 < ROW; row++){
			if (IsCol(row,col)){
				return g_chesses[row + 2][col];
			}
		}
	}
	return ' ';
}
char CheckAng(){
	//1.从第一个数对列开始判断是否加二后小于边界
	//2.如果小于判断下标都加一,和加二看是否相等
	//3.再看下边加一位列是否加二后小于边界
	int col = 0;
	int row = 0;
	for (; row + 2 < ROW; row++){
		for (col = 0; col + 2 < COL; col++){
			if (IsThree1(row, col) != ' '){
				return IsThree1(row, col);
			}
		}
	}
	//4.当列不满足小于后判断减二是否满足边界
	//5.小于判断下标都减一,和减二是否相等
	//5.在观察加一一位是否减二后小于边界
	for (row = 0; row <ROW; row++){
		for (col = COL - 1; col - 2 >= 0; col--){
			if (IsThree2(row, col) != ' '){
				return IsThree2(row, col);
			}
		}
	}
	return ' ';
}
char IsThree1(int row, int col){
	if (IsAng1(row,col)){
		return g_chesses[row + 2][col + 2];
	}
	return ' ';
}
char IsThree2(int row, int col){
	if (IsAng2(row,col)){
		return g_chesses[row + 2][col - 2];
	}
	return ' ';
}
int Isfull(){
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			if (g_chesses[row][col] == ' '){
				return 0;
			}

		}
	}
	return 1;
}
int Isline(int row, int col){
//几子棋就几次判断
	char temp = g_chesses[row][col];
	for (int i = 1; i < Chess; i++){
		if (g_chesses[row][col + i] == ' '){
			return 0;
		}
		if (g_chesses[row][col + i] != temp){
			return 0;
		}
	}
	return 1;
}
int IsCol(int row, int col){
	char temp = g_chesses[row][col];
	for (int i = 1; i < Chess; i++){
		if (g_chesses[row + i][col] == ' '){
			return 0;
		}
		if (g_chesses[row + i][col] != temp){
			return 0;
		}
	}
	return 1;
}
int IsAng1(int row, int col){
	char temp = g_chesses[row][col];
	int i;
	for (i = 1; i < Chess; i++){
		if (g_chesses[row + i][col + i] == ' '){
			return 0;
		}
		if (g_chesses[row + i][col + i] != temp){
			return 0;
		}
	}
	return 1;
}
int IsAng2(int row, int col){
	char temp = g_chesses[row][col];
	int i;
	for (i = 1; i < Chess; i++){
		if (g_chesses[row + i][col - i] == ' '){
			return 0;
		}
		if (g_chesses[row + i][col - i] != temp){
			return 0;
		}
	}
	return 1;
}