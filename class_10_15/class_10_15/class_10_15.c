//������   
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define ROW 8
#define COL 8
#define Chess 5//��ʾ������
//1.����һ��ȫ�ֱ�������
char g_chesses[ROW][COL];//��ʼ��
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
	while (1){
		scanf("%d %d", &row, &col);
		while (getchar() != '\n'){
			continue;
		}
		row -= 1;
		col = col-1;
		if (row < 0 || row >= ROW || col < 0 || col >= COL){//Խ��
			printf("��Խ������������:\n");
			continue;
		}
		if (g_chesses[row][col] != ' '){
			printf("��λ���Ѿ�����,����������:\n");
			continue;
		}
		break;
	}
	g_chesses[row][col] = 'X';//���ΪX
}
void ComputerMove(){
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