////�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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
//	printf("������һ������:\n");
//	int num;
//	scanf("%d", &num);
//	PrtNum(num);
//	system("pause");
//	return 0;
//}

////�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳� 
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int JieChen(int n){//�ǵݹ�
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
////int JieChen(int n){//�ݹ�
////	if (n == 0 || n == 1){
////		return n;
////	}
////	return n*JieChen(n - 1);
////}
//int main(){
//	printf("������n\n");
//	int n;
//	scanf("%d",&n);
//	int sum = JieChen(n);
//	printf("%d�Ľ׳���%d\n", n,sum);
//	system("pause");
//	return 0;
//}

////�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int Strlen(char* str){//�ݹ�
//	if (*str == '\0'){
//		return 0;
//	}
//	return 1 + Strlen(str + 1);
//}
////int Strlen(char* str){//�ǵݹ�
////	int count = 0;
////		while (*str != '\0'){
////			str++;
////			count++;
////		}
////		return count;
////	}
//int main(){
//	printf("�������ַ���:\n");
//	char s[50] = " ";
//	scanf("%s", s);
//	int len = Strlen(s);
//	printf("����Ϊ%d\n", len);
//	system("pause");
//	return 0;
//}

////��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
////ʵ�֣��������ַ����е��ַ��������С�
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
//	//�����ַ�������
//	int len = CountStr(str);
//	if (len <= 1){
//		return;//��ִ��
//	}
//	else{
//		char temp = str[0];
//		str[0] = str[len - 1];
//		str[len - 1] = '\0';//ֻ����һ��
//		reverse_string(str + 1);
//		str[len - 1] = temp;
//	}
//}
//
//
//int main(){
//	//�����ַ���
//	char str[50] = " ";
//	scanf("%s", str);
//	reverse_string(str);
//	printf("%s\n",str);
//	system("pause");
//	return 0;
//}

////дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ� 
////���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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
//	printf("����һ����\n");
//	int num;
//	scanf("%d",&num);
//	num = DigitSum(num);
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}

////�ݹ�ʵ��n^k
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
//	//����n�ļ��η�
//	printf("������n,��k:\n");
//	double n = 0.0;
//	double k = 0.0;
//	scanf("%lf %lf",&n,&k);
//	//�ݹ麯��
//	double result = Mi(n, k);
//	printf("%lf\n", result);
//	system("pause");
//	return 0;
//}

////�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int Fib(int n){//�ݹ鷽��,���������ʱ������̫��
//	if (n == 1 || n == 2){
//		return 1;
//	}
//	return Fib(n - 1) + Fib(n - 2);
//}
//
////int Fib(int n){//ʹ�÷ǵݹ�
////	if (n == 1 || n == 2){
////		return 1;
////	}
////	int num1 = 1;//��һ��
////	int num2 = 1;//�ڶ���
////	int sum = 2;
////	for (int i = 3; i <= n; i++){
////		sum = num1 + num2;
////		num1 = num2;
////		num2 = sum;
////	}
////	return sum;
////}
//int main(){
//	printf("��������:\n");
//	int n;
//	scanf("%d",&n);
//	//����
//	n = Fib(n);
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//}