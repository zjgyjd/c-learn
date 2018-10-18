//������   
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define ROW 15
#define COL 15
#define Chess 5//��ʾ������
//1.����һ��ȫ�ֱ�������
char g_chesses[ROW][COL];//��ʼ��
int Computer[ROW][COL][4];//���������б��б
int Player[ROW][COL][4];//�洢���������Ž�,�������͵���Ҫ�̶ȸ���һ����
void reset();
void Prtboard();
void PlayerMove();
void ComputerMove();
char CheckWinner();
char CheckLine();
char CheckCol();
char CheckAng();//�Խ�
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
	//����
	reset( );
	char winner;
	while (1){
		Prtboard();//2.��ӡ����
		printf("���������\n:");
		PlayerMove();//3.�������
		 winner = CheckWinner();
		if (winner != ' '){//4.�ж���Ӯ
			break;//��ʤ��
		}
		ComputerMove();
		winner = CheckWinner();
		if (winner != ' '){//4.�ж���Ӯ
			break;//��ʤ��
		}
	}
	//5.˵��ʤ�����
	Winnereprot(winner);//X��� O���� Pƽ��
		system("pause");
		return 0;
}
void reset( ){//����
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < ROW; col++){
			g_chesses[row][col] = ' ';
		}
	}
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < ROW; col++){
			for (int look = 0; look < 4; look++){
				Computer[row][col][look] = 0;//look���������б��б
				Player[row][col][look] = 0;//��ʼ��
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
void PlayerMove(){//1.������������ƶ�
	int row = -1;
	int col = -1;
	/*scanf("%d %d", &row, &col); 
	row -= row;
	col -= col;*/
	while (1){
		scanf("%d %d", &row, &col);
		row -= 1;
		col = col-1;
		if (row < 0 || row >= ROW || col < 0 || col >= COL){//Խ��
			printf("��Խ������������:\n");
			/*scanf("%d %d", &row, &col);
			row -= row;
			col -= col;*/
			continue;
		}
		if (g_chesses[row][col] != ' '){
			printf("��λ���Ѿ�����,����������:\n");
			/*scanf("%d %d", &row, &col);
			row -= row;
			col -= col;*/
			continue;
		}
		break;
	}
	g_chesses[row][col] = 'X';//���ΪX
}
//void ChessAnalysis(int row, int col){
//	//�ж��Ƿ�Ϊ�մ�
//	if (g_chesses[row][col] != ' '){
//		return;
//	}//��������ж��Ƿ�Ϊ'O'�������µĲ��жϷ���
//	Computer[row][col][0] = CLine(row,col,'O');//��ʾ�ÿ�λ����
//	Computer[row][col][1] = CCOL(row,col,'O');//��ʾ�ÿ�λ����
//	Computer[row][col][2] = CAng1(row, col,'O');//��ʾ����б
//	Computer[row][col][3] = CAngR(row, col,'O');//��ʾ����б
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
//	while (lcol >= 0&&g_chesses[row][lcol] == flag){//�ж��Ƿ�ﵽ�߽�
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
	//int row = 0;//�����Ͻǵ�һ����ʼ����
	//int col = 0;
	////for (; row < ROW; row++){
	//	for (; col < COL; col++){
	//		ChessAnalysis(row, col);//�鿴��������
	//	}
	//}
	//int max = Computer[0][0][0];
	//int Row = 0; 
	//int Col = 0;
	//for (row = 0; row < ROW; row++){//2.������ά����
	//	for (col = 0; col < COL; col++){//������߷�
	//		for (int look = 0; look < 4; look++){
	//			if (max < Computer[row][col][look]){
	//				max = Computer[row][col][look];
	//				Row = row;
	//				Col = col;
	//			}
	//		}
	//	}
	//}
	int row = rand() % (ROW );//0���±����ֵ
	int col = rand() % (COL );
	while (g_chesses[row][col] != ' '){
		 row = rand() % (ROW );//0���±����ֵ
		 col = rand() % (COL );
	}
	g_chesses[row][col] ='O';//����Ϊ O
}
char CheckWinner(){//�ж��Ƿ�������һ��ĺ���
	if (CheckLine() != ' '){//��
		return CheckLine();
	}
	else if (CheckCol() != ' '){//��
		return CheckCol();
	}
	else if( CheckAng() != ' '){//��ʾʤ��
		//��ʤ������'X'��'O'
		return CheckAng();
	}
	else if (Isfull()){//���˷���ƽ��
		return 'P';
	}
	else{
		return ' ';
	}

}
void Winnereprot(char win){
	if (win == 'P'){
		printf("ƽ��!\n");
		Prtboard();
	}
	else if (win == 'O'){
		printf("����ʤ��!!\n");
		Prtboard();
	}
	else if (win == 'X'){
		Prtboard();
		printf("��ϲ���ʤ��!\n");
	}
	else {
		printf("����!!!!!!!!\n");
		Prtboard();
		printf("������%c\n", win);
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
	//1.�ӵ�һ�������п�ʼ�ж��Ƿ�Ӷ���С�ڱ߽�
	//2.���С���ж��±궼��һ,�ͼӶ����Ƿ����
	//3.�ٿ��±߼�һλ���Ƿ�Ӷ���С�ڱ߽�
	int col = 0;
	int row = 0;
	for (; row + 2 < ROW; row++){
		for (col = 0; col + 2 < COL; col++){
			if (IsThree1(row, col) != ' '){
				return IsThree1(row, col);
			}
		}
	}
	//4.���в�����С�ں��жϼ����Ƿ�����߽�
	//5.С���ж��±궼��һ,�ͼ����Ƿ����
	//5.�ڹ۲��һһλ�Ƿ������С�ڱ߽�
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
//������ͼ����ж�
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