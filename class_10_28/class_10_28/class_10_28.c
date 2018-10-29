////1.编写函数：
////unsigned int reverse_bit(unsigned int value);
////这个函数的返回值value的二进制位模式从左到右翻转后的值。
//#include <stdio.h>
//#include <stdlib.h>
//unsigned int reverse_bit(unsigned int value){
//	unsigned int sum = 0;
//	int i = 31;
//	//设置出口,当数为零时返回
//	while (value != 0){
//		//右移32
//		//0000 0000 0000 0000 0000 0000 0001 1001 
//		sum = ((value&1) << i)+sum;
//		i -= 1;
//		value = value >> 1;
//	}
//	return sum;
//}
//int main(){
//	unsigned int num1 = 25;
//	unsigned int num2 = reverse_bit(num1);
//	printf("%u 的二进制从左到右翻转为 %u\n", num1, num2);
//	//num1 = 3;
//	//printf("%d\n",num1 << 31);
//	system("pause");
//	return 0;
//}

////2.不使用（a + b） / 2这种方式，求两个数的平均值。
//#include <stdio.h>
//#include <stdlib.h>
//int Average(int a, int b){
//	return (a + b) >> 1;
//}
//int main(){
//	int a = 32;//0100  平均数6-->0110   
//	int b = 8;//1000   总数12-->1100
//	int aver = Average(a, b);
//	printf("The Average is %d\n",aver);
//	system("pause");
//	return 0;
//}

////3.编程实现：
////一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
////请找出这个数字。（使用位运算）
//#include <stdio.h>
//#include <stdlib.h>
//void FindOne(int* a,int n){
//	for (int i = 0; i < n; i++){
//		int count = 0;
//		for (int j = 0; j < n; j++){
//			if ((j ^ i)==0){
//				continue;
//			}
//			if ((a[i]^a[j])==0){//异或等于零说明相等
//				count++;
//				break;
//			}
//		}
//		if (count == 0){
//			printf("The One is %d\n", a[i]);
//		}
//	}
//}
//int main(){
//	int a[] = { 1, 7, 2, 1, 3, 3, 4, 4, 7 };
//	int n = sizeof(a) / sizeof(a[0]);
//    FindOne(a,n);
//	system("pause");
//	return 0;
//}

