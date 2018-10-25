////1.
////5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
////A选手说：B第二，我第三；B选手说：我第二，E第四；C选手说：我第一，D第二；
////D选手说：C最后，我第三；E选手说：我第四，A第一；
////比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	//将每半句话单独写出
//	int asays[2] = { 2, 3 };
//	int bsays[2] = { 2, 4 };
//	int csays[2] = { 1, 2 };
//	int dsays[2] = { 5, 3 };
//	int esays[2] = { 4, 1 };
//	//进行排列组合
//	for (int a = 1; a <= 5; a++){
//		for (int b = 1; b <= 5; b++){
//			for (int c = 1; c <= 5; c++){
//				for (int d = 1; d <= 5; d++){
//					for (int e = 1; e <= 5; e++){
//						if (((b == asays[0]) + (a == asays[1]))==1 &&
//							((b == bsays[0]) + (e == bsays[1]))==1 &&
//							((c == csays[0]) + (d == csays[1]))==1 &&
//							((c == dsays[0]) + (d == dsays[1]))==1 &&
//							((e == esays[0]) + (a == esays[1]))==1){
//						//仅仅对一半时进入循环
//							if (a*b*c*d*e == 120){
//								printf("A:%d B:%d C;%d D:%d E:%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}

////日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
////嫌疑犯的一个。以下为4个嫌疑犯的供词。
////A说：不是我。
////B说：是C。
////C说：是D。
////D说：C在胡说
////已知3个人说了真话，1个人说的是假话。
////现在请根据这些信息，写一个程序来确定到底谁是凶手。
//#include <stdio.h>
//#include <stdlib.h>
//int Iskiller(int n){
//	int a =(n==4);
//	int b =(n==3);
//	int c =(n==2);
//	int d =(n==1);
//	if (((a != 1) + (c == 1) + (d == 1) + (d != 1)) == 3){
//		//只有三个说真话
//		return 1;
//	}
//	return 0;
//}
//int main(){
//	//设置凶手
//	int killer = 1;
//	//让A,B,C,D依次成为凶手验证真假
//	for (int name = 4; name > 0; name--){
//		//判断凶手
//		if (Iskiller(name)){
//			printf("%c是凶手!!\n", 'E' - name);
//		}
//	}
//	system("pause");
//	return 0;
//}

////在屏幕上打印杨辉三角。
//#include <stdio.h>
//#include <stdlib.h>
//#define N 10
//void Trangle(int n){
//	int row;
//	int a[N][N+1] = { 0 };
//	for (row = 0; row < n; row++){
//		for (int col = 0; col < row + 1; col++){
//			if (col == row||col==0){
//				a[row][col] = 1;
//			}
//			else
//			{
//				a[row][col] = a[row - 1][col - 1] + a[row-1][col];
//			}
//			
//		}
//		for (int col = 0; col < row + 1; col++){
//			printf("%d ", a[row][col]);
//		}
//		printf("\n");
//	}
//}
//int main(){
//	//输入最后一行的行数
//	Trangle(N);
//	system("pause");
//	return 0;
//}

//版本二第一题
//对话进行翻译,
//b!=2 && a=3 || b=2 && a!=3//说明A说对一半
////同理
//第二题
//同样给翻译对话
//#include <stdio.h>
//#include <stdlib.h>
//void predict_killer(){
//	char killer = '0';
//	for (killer = 'A'; killer < 'D'; killer++){
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D'))
//			== 3){
//			printf("凶手是%c\n", killer);
//			break;
//		}
//
//	}
//}
//int main(){
//	predict_killer();
//	system("pause");
//	return 0;
//}

//第三题杨辉三角形
