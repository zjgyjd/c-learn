////дһ���������ز����������� 1 �ĸ���
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int count = 0;//ȫ�ֱ����鿴1��ֵ
//int count_one_bits(unsigned int value) {
//	//1.����ȡ��ת��Ϊ������
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
//	//������Ҫ���ҵ���
//	unsigned int num;
//	scanf("%d", &num);
//	int nums = count_one_bits(num);
//	printf("\n%d�Ķ�������һ�ĸ���Ϊ:%d\n", num, nums);
//	system("pause");
//	return 0;
//}  

////��ȡһ�������������������е�ż��λ������λ�� �ֱ�������������С�
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
//	//��ȡһ����
//	unsigned int num;
//	scanf("%d", &num);
//	//��Ϊ������
//	printf("ż����Ϊ:\n");
//	ChangeTow(num,0);
//	count = 0;
//	printf("\n������Ϊ:\n");
//	ChangeTow(num, 1);
//	printf("\n");
//	system("pause");
//	return 0;
//}

////���������ÿһλ
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
//	//����һλ��
//	printf("������һ������:\n");
//	int num;
//	scanf("%d",&num);
//	Prtnum(num);
//	system("pause");
//	return 0;
//}

////���������Ķ��������ж���λ��ͬ
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
//	printf("������������:\n");
//	int num1;
//	int num2;
//	scanf("%d %d", &num1, &num2);
//	int result = ChengeNum(num1, num2);
//	printf("%d��%d�Ķ��������%dλ\n",num1,num2,result);
//	system("pause");
//	return 0;
//}

//��ȡ�����Ƶ�ż��λ������λ
//1011 ż:1 1 ��:0 1
//��ȡÿһλ��ֵ: (n>>i)&1   i=i+2;    ż��:��ʼֵ i = 31�����ִ�СΪ32λʱ
//����:i = 30
#include <stdio.h>
#include <stdlib.h>
//void print(int n){
//	int i = 0;
//	//ż��
//	for (i = 31; i > 0; i -= 2){
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//����
//	for (i = 30; i >= 0; i -= 2){//���ǵ�һλ�����ƶ�
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

////�ж��м���һ
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

//��������int�Ķ�����,�ж���λ��ͬ
//���������м�λ��ͬ,�ص���һ���ж��м���һ
//6-->0110               7-->0111
//5-->0101---->0100--->4 6-->0110--___>0110-->6
///////////////0011---->0000---->0 5-->0101-->0100-->4
//����������1                             3-->0011-->0   ������3��
