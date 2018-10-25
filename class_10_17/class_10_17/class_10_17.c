////写一个函数返回参数二进制中 1 的个数
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int count = 0;//全局变量查看1的值
//int count_one_bits(unsigned int value) {
//	//1.利用取余转换为二进制
//	int temp = 0;
//	if (value  != 0){
//		temp = value % 2;
//		count_one_bits(value / 2);
//	}
//	printf(" %d ", temp);
//	if (temp == 1){
//		count++;
//	}
//	return count;
//}
//int main(){
//	//给出想要查找的数
//	unsigned int num;
//	scanf("%d", &num);
//	int nums = count_one_bits(num);
//	printf("\n%d的二进制中一的个数为:%d\n", num, nums);
//	system("pause");
//	return 0;
//}  

////获取一个数二进制序列中所有的偶数位和奇数位， 分别输出二进制序列。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int count = 0;
//void ChangeTow(unsigned int num,int flag){
//	int temp = 0;
//	if (num  != 0){
//		temp = num % 2;//0 1 0
//		ChangeTow(num / 2,flag);
//		
//	}
//	count++;
//	if (flag == 0){
//		if (count % 2 == 0){
//			printf("%d ", temp);//0
//		}
//	}
//	if (flag != 0){
//		if (count % 2 != 0){
//			printf("%d ", temp);
//		}
//	}
//}
//int main(){
//	//获取一个数
//	unsigned int num;
//	scanf("%d", &num);
//	//化为二进制
//	printf("偶数项为:\n");
//	ChangeTow(num,0);
//	count = 0;
//	printf("\n奇数项为:\n");
//	ChangeTow(num, 1);
//	printf("\n");
//	system("pause");
//	return 0;
//}

////输出整数的每一位
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void Prtnum(int n){
//	if (n > 9){
//		Prtnum(n/10);
//	}
//	printf("%d\n", n % 10);
//}
//int main(){
//	//输入一位数
//	printf("请输入一个整数:\n");
//	int num;
//	scanf("%d",&num);
//	Prtnum(num);
//	system("pause");
//	return 0;
//}

////两个整数的二进制数有多少位不同
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int count = 0;
//int ChengeNum(int n1, int n2){
//	if (n1 > 0 || n2 > 0){
//		ChengeNum(n1 / 2, n2 / 2);
//	}
//	if (n1 % 2 != n2 % 2){
//		count++;
//	}
//	return count;
//}
//int main(){
//	printf("请输入两个数:\n");
//	int num1;
//	int num2;
//	scanf("%d %d", &num1, &num2);
//	int result = ChengeNum(num1, num2);
//	printf("%d和%d的二进制相差%d位\n",num1,num2,result);
//	system("pause");
//	return 0;
//}

//获取二进制的偶数位和奇数位
//1011 偶:1 1 奇:0 1
//获取每一位的值: (n>>i)&1   i=i+2;    偶数:初始值 i = 31当数字大小为32位时
//奇数:i = 30
#include <stdio.h>
#include <stdlib.h>
//void print(int n){
//	int i = 0;
//	//偶数
//	for (i = 31; i > 0; i -= 2){
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//奇数
//	for (i = 30; i >= 0; i -= 2){//考虑第一位不用移动
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//}
//int main(){
//	int n = 8;
//	print(n);
//	system("pause");
//	return 0;
//}

////判断有几个一
//void count_one_bits(int n){
//	int count = 0;
//	while (n){
//		n = n&(n - 1);
//		count++;
//	}
//	printf("%d \n", count);
//}
//int main(){
//	int n = 3;
//	count_one_bits(n);
//	system("pause");
//	return 0;
//}

//返回两个int的二进制,有多少位不同
//用异或算出有几位不同,回到第一步判断有几个一
//6-->0110               7-->0111
//5-->0101---->0100--->4 6-->0110--___>0110-->6
///////////////0011---->0000---->0 5-->0101-->0100-->4
//所以有两个1                             3-->0011-->0   所以有3次
