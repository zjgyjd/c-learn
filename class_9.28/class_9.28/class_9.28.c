//��ӡ��һ������
#include <stdio.h>
#include <stdlib.h>
#define Breadth 8//���м�Ŀ�Ȱ���\0
#define Middle Breadth / 2-1
void prtdiamond(char diamond[],int x){
	int left;
	int right;
	char ch = '*';
	for (left = 0, right = 0; left < Middle+1; left++, right++){
		diamond[Middle - left] = ch;//�����ӡ
		diamond[Middle + right] = ch;//���Ҵ�ӡ
		printf("%s\n", diamond);

	}//�ϰ������

	ch = ' ';
	for (left = Middle, right = Middle; left > 0; left--, right--){
		diamond[Middle - left] = ch;
		diamond[Middle + right] = ch;
		printf("%s\n", diamond);
	}
}
int main(){
	char diamond[Breadth] = "       ";//���м�ע��\0�Ĵ���
	prtdiamond(diamond, Middle);
	system("pause");
	return 0;
}

//////////////////////////////////////////////
//���ˮ�ɻ�����ˮ�ɻ�����ָһ�� n λ����n��3 ��
//����ÿ��λ�ϵ����ֵ� n ����֮�͵���������
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

////��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ������
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