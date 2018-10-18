//三子棋   
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define ROW 15
#define COL 15
#define Chess 5//表示三子棋
//1.定义一个全局变量数组
char g_chesses[ROW][COL];//初始化
int Computer[ROW][COL][4];//代表横竖左斜右斜
int Player[ROW][COL][4];//存储棋型找最优解,按照棋型的重要程度给出一个分
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
//void ChessAnalysis(int row, int col);
//int CLine(int row, int col,char flag);
//int CCOL(int row, int col,char flag);
//int CAng1(int row, int col,char flag);
//int CAngR(int row, int col,char flag);
//int Qimap(int count);

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
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < ROW; col++){
			for (int look = 0; look < 4; look++){
				Computer[row][col][look] = 0;//look代表横竖左斜右斜
				Player[row][col][look] = 0;//初始化
			}
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
	/*scanf("%d %d", &row, &col); 
	row -= row;
	col -= col;*/
	while (1){
		scanf("%d %d", &row, &col);
		row -= 1;
		col = col-1;
		if (row < 0 || row >= ROW || col < 0 || col >= COL){//越界
			printf("已越界请重新输入:\n");
			/*scanf("%d %d", &row, &col);
			row -= row;
			col -= col;*/
			continue;
		}
		if (g_chesses[row][col] != ' '){
			printf("此位置已经落子,请重新输入:\n");
			/*scanf("%d %d", &row, &col);
			row -= row;
			col -= col;*/
			continue;
		}
		break;
	}
	g_chesses[row][col] = 'X';//玩家为X
}
//void ChessAnalysis(int row, int col){
//	//判断是否为空处
//	if (g_chesses[row][col] != ' '){
//		return;
//	}//向左和右判断是否为'O'即电脑下的并判断分数
//	Computer[row][col][0] = CLine(row,col,'O');//表示该空位的行
//	Computer[row][col][1] = CCOL(row,col,'O');//表示该空位的列
//	Computer[row][col][2] = CAng1(row, col,'O');//表示向左斜
//	Computer[row][col][3] = CAngR(row, col,'O');//表示向右斜
//}
//int CAngl(int row, int col, char flag){
//	int uprow = row - 1;
//	int lcol = col - 1;
//}
//int CCOL(int row,int col,char flag){
//	int com_Upcount = 0;
//	int uprow = row - 1;
//	while (uprow >= 0 && g_chesses[uprow][col] == flag){
//		com_Upcount++;
//		uprow = row - 1;
//	}
//	int dowrow = row + 1;
//	while (dowrow < ROW&&g_chesses[dowrow][col] == flag){
//		com_Upcount++;
//		uprow = row + 1;
//	}
//	return Qimap(com_Upcount++);
//}
//int CLine(int row,int col,char flag){
//	int com_Lcount = 0;
//	int lcol = col - 1;
//	while (lcol >= 0&&g_chesses[row][lcol] == flag){//判断是否达到边界
//		com_Lcount++;
//		lcol = lcol - 1;
//	}
//	int rcol = col + 1;
//	while (rcol < COL&&g_chesses[row][rcol] == flag){
//		com_Lcount++;
//		lcol = lcol + 1;
//	}
//	return Qimap(com_Lcount++);
//}
void ComputerMove(){
	//int row = 0;//从左上角第一个开始查找
	//int col = 0;
	////for (; row < ROW; row++){
	//	for (; col < COL; col++){
	//		ChessAnalysis(row, col);//查看分析棋型
	//	}
	//}
	//int max = Computer[0][0][0];
	//int Row = 0; 
	//int Col = 0;
	//for (row = 0; row < ROW; row++){//2.遍历三维数组
	//	for (col = 0; col < COL; col++){//查找最高分
	//		for (int look = 0; look < 4; look++){
	//			if (max < Computer[row][col][look]){
	//				max = Computer[row][col][look];
	//				Row = row;
	//				Col = col;
	//			}
	//		}
	//	}
	//}
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
			if (Isline(row,col)/*g_chesses[row][col]==g_chesses[row][col+1]
				&& g_chesses[row][col + 1] == g_chesses[row][col + 2]
				*//*&& g_chesses[row][col + 2]!='' */){
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
			if (IsCol(row,col)/*g_chesses[row][col] == g_chesses[row + 1][col]
				&& g_chesses[row + 1][col] == g_chesses[row + 2][col]
				&& g_chesses[row + 2][col] != ' '*/){
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
	if (IsAng1(row,col)
		/*g_chesses[row][col] == g_chesses[row + 1][col + 1]
		&& g_chesses[row + 2][col + 2] == g_chesses[row + 1][col + 1]
		&& g_chesses[row + 2][col + 2] != ' '*/){
		return g_chesses[row + 2][col + 2];
	}
	return ' ';
}
char IsThree2(int row, int col){
	if (IsAng2(row,col)
		/*g_chesses[row][col] == g_chesses[row + 1][col - 1]
		&& g_chesses[row + 2][col - 2] == g_chesses[row + 1][col - 1]
		&& g_chesses[row + 2][col - 2] != ' '*/){
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