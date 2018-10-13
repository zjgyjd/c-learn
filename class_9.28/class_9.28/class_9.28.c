//打印出一个菱形
#include <stdio.h>
#include <stdlib.h>
#define Breadth 8//最中间的宽度包括\0
#define Middle Breadth / 2-1
void prtdiamond(char diamond[],int x){
	int left;
	int right;
	char ch = '*';
	for (left = 0, right = 0; left < Middle+1; left++, right++){
		diamond[Middle - left] = ch;//向左打印
		diamond[Middle + right] = ch;//向右打印
		printf("%s\n", diamond);

	}//上半段菱形

	ch = ' ';
	for (left = Middle, right = Middle; left > 0; left--, right--){
		diamond[Middle - left] = ch;
		diamond[Middle + right] = ch;
		printf("%s\n", diamond);
	}
}
int main(){
	char diamond[Breadth] = "       ";//找中间注意\0的储存
	prtdiamond(diamond, Middle);
	system("pause");
	return 0;
}

//////////////////////////////////////////////
//输出水仙花数，水仙花数是指一个 n 位数（n≥3 ）
//它的每个位上的数字的 n 次幂之和等于它本身
/////////////////////////////////////////////
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#define cube 3
//int IsArmstrong(int num){
//	int hundred = num / 100;
//	int ten = (num % 100)/10;
//	int bit = num % 10;
//	int sum = pow(hundred, cube) + pow(ten, cube) + pow(bit, cube);
//	if (sum == num){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}
//int main(){
//	int count;
//	for (count = 100; count < 1000; count++){
//		if (IsArmstrong(count)){
//			printf("%d\n", count);
//		}
//		//printf("%d\n", count);
//	}
//	system("pause");
//	return 0;
//}

////求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//int IsSn(int a){
//	int sum = 0;
//	int count;
//	int before=0;
//	for (count = 0; count < 5; count++){
//		before = a *pow(10, count) + before;
//		sum = before+ sum;
//	}
//	return sum;
//}
//int main(){
//	printf("Enter 1-9 numbers :\n");
//	int num;
//	scanf("%d", &num);
//	printf("Sn = a + aa + aaa + aaaa + aaaaa\n");
//	printf("Sn = %d", IsSn(num));
//	system("pause");
//	return 0;
//}