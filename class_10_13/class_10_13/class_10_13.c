////递归方式实现打印一个整数的每一位
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void PrtNum(int n){
//	if (n > 9){
//		PrtNum(n / 10);
//	}
//	printf("%d\n", n % 10);
//}
//int main(){
//	printf("请输入一个整数:\n");
//	int num;
//	scanf("%d", &num);
//	PrtNum(num);
//	system("pause");
//	return 0;
//}

////递归和非递归分别实现求n的阶乘 
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int JieChen(int n){//非递归
//	if (n == 0 || n == 1){
//		return n;
//	}
//	int sum = 1;
//	while (n > 1){
//		sum = sum * n;
//		n--;
//	}
//	return sum;
//}
////int JieChen(int n){//递归
////	if (n == 0 || n == 1){
////		return n;
////	}
////	return n*JieChen(n - 1);
////}
//int main(){
//	printf("请输入n\n");
//	int n;
//	scanf("%d",&n);
//	int sum = JieChen(n);
//	printf("%d的阶乘是%d\n", n,sum);
//	system("pause");
//	return 0;
//}

////递归和非递归分别实现strlen
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int Strlen(char* str){//递归
//	if (*str == '\0'){
//		return 0;
//	}
//	return 1 + Strlen(str + 1);
//}
////int Strlen(char* str){//非递归
////	int count = 0;
////		while (*str != '\0'){
////			str++;
////			count++;
////		}
////		return count;
////	}
//int main(){
//	printf("请输入字符串:\n");
//	char s[50] = " ";
//	scanf("%s", s);
//	int len = Strlen(s);
//	printf("长度为%d\n", len);
//	system("pause");
//	return 0;
//}

////编写一个函数 reverse_string(char * string)（递归实现）
////实现：将参数字符串中的字符反向排列。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int CountStr(char* str){
//	int count = 0;
//	while (*str != '\0'){
//		str++;
//		count++;
//	}
//	return count;
//}
//void reverse_string(char* str){
//	//计算字符串长度
//	int len = CountStr(str);
//	if (len <= 1){
//		return;//不执行
//	}
//	else{
//		char temp = str[0];
//		str[0] = str[len - 1];
//		str[len - 1] = '\0';//只用走一半
//		reverse_string(str + 1);
//		str[len - 1] = temp;
//	}
//}
//
//
//int main(){
//	//输入字符串
//	char str[50] = " ";
//	scanf("%s", str);
//	reverse_string(str);
//	printf("%s\n",str);
//	system("pause");
//	return 0;
//}

////写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
////例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int DigitSum(int n){
//	if (n < 10){
//		return n;
//	}
//	return n % 10 + DigitSum(n / 10);
//}
//int main(){
//	printf("输入一个数\n");
//	int num;
//	scanf("%d",&num);
//	num = DigitSum(num);
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}

////递归实现n^k
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//double Mi(double n, double k){
//	if (k == 0 || n == 1){
//		return 1;
//	}
//	return n * Mi(n, k - 1);
//}
//int main(){
//	//输入n的几次方
//	printf("请输入n,和k:\n");
//	double n = 0.0;
//	double k = 0.0;
//	scanf("%lf %lf",&n,&k);
//	//递归函数
//	double result = Mi(n, k);
//	printf("%lf\n", result);
//	system("pause");
//	return 0;
//}

////递归和非递归分别实现求第n个斐波那契数
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int Fib(int n){//递归方法,但项数变大时计算量太大
//	if (n == 1 || n == 2){
//		return 1;
//	}
//	return Fib(n - 1) + Fib(n - 2);
//}
//
////int Fib(int n){//使用非递归
////	if (n == 1 || n == 2){
////		return 1;
////	}
////	int num1 = 1;//第一项
////	int num2 = 1;//第二项
////	int sum = 2;
////	for (int i = 3; i <= n; i++){
////		sum = num1 + num2;
////		num1 = num2;
////		num2 = sum;
////	}
////	return sum;
////}
//int main(){
//	printf("输入项数:\n");
//	int n;
//	scanf("%d",&n);
//	//函数
//	n = Fib(n);
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//}